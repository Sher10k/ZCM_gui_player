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

class ZcmSauglBrakeDiagnostics(object):
    __slots__ = ["service", "driver_brake", "brake", "ack"]

    def __init__(self):
        self.service = ZcmService()
        self.driver_brake = 0
        self.brake = 0
        self.ack = 0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmSauglBrakeDiagnostics._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">hhh", self.driver_brake, self.brake, self.ack))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmSauglBrakeDiagnostics._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmSauglBrakeDiagnostics._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmSauglBrakeDiagnostics()
        self.service = ZcmService._decode_one(buf)
        self.driver_brake, self.brake, self.ack = struct.unpack(">hhh", buf.read(6))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmSauglBrakeDiagnostics in parents: return 0
        newparents = parents + [ZcmSauglBrakeDiagnostics]
        tmphash = (0x61fd5d1b493a99aa+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmSauglBrakeDiagnostics._packed_fingerprint is None:
            ZcmSauglBrakeDiagnostics._packed_fingerprint = struct.pack(">Q", ZcmSauglBrakeDiagnostics._get_hash_recursive([]))
        return ZcmSauglBrakeDiagnostics._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

