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

class ZcmObjectValue(object):
    __slots__ = ["service", "object_name", "object_value", "valid_value"]

    def __init__(self):
        self.service = ZcmService()
        self.object_name = ""
        self.object_value = 0.0
        self.valid_value = False

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmObjectValue._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        __object_name_encoded = self.object_name.encode('utf-8')
        buf.write(struct.pack('>I', len(__object_name_encoded)+1))
        buf.write(__object_name_encoded)
        buf.write(b"\0")
        buf.write(struct.pack(">fb", self.object_value, self.valid_value))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmObjectValue._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmObjectValue._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmObjectValue()
        self.service = ZcmService._decode_one(buf)
        __object_name_len = struct.unpack('>I', buf.read(4))[0]
        self.object_name = buf.read(__object_name_len)[:-1].decode('utf-8', 'replace')
        self.object_value = struct.unpack(">f", buf.read(4))[0]
        self.valid_value = bool(struct.unpack('b', buf.read(1))[0])
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmObjectValue in parents: return 0
        newparents = parents + [ZcmObjectValue]
        tmphash = (0x7f26dc3cefd9ab6b+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmObjectValue._packed_fingerprint is None:
            ZcmObjectValue._packed_fingerprint = struct.pack(">Q", ZcmObjectValue._get_hash_recursive([]))
        return ZcmObjectValue._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

