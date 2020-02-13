"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmService import ZcmService

class ZcmSauglMssduInfoAck(object):
    __slots__ = ["service", "counter"]

    def __init__(self):
        self.service = ZcmService()
        self.counter = 0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmSauglMssduInfoAck._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">h", self.counter))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmSauglMssduInfoAck._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmSauglMssduInfoAck._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmSauglMssduInfoAck()
        self.service = ZcmService._decode_one(buf)
        self.counter = struct.unpack(">h", buf.read(2))[0]
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmSauglMssduInfoAck in parents: return 0
        newparents = parents + [ZcmSauglMssduInfoAck]
        tmphash = (0x5bb0b69cca8068f9+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmSauglMssduInfoAck._packed_fingerprint is None:
            ZcmSauglMssduInfoAck._packed_fingerprint = struct.pack(">Q", ZcmSauglMssduInfoAck._get_hash_recursive([]))
        return ZcmSauglMssduInfoAck._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
