"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmNavNV08CVelocityVector(object):
    __slots__ = ["XSpeed", "YSpeed", "ZSpeed"]

    def __init__(self):
        self.XSpeed = 0.0
        self.YSpeed = 0.0
        self.ZSpeed = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmNavNV08CVelocityVector._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ddd", self.XSpeed, self.YSpeed, self.ZSpeed))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmNavNV08CVelocityVector._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmNavNV08CVelocityVector._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmNavNV08CVelocityVector()
        self.XSpeed, self.YSpeed, self.ZSpeed = struct.unpack(">ddd", buf.read(24))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmNavNV08CVelocityVector in parents: return 0
        tmphash = (0x77848cd658e08678) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmNavNV08CVelocityVector._packed_fingerprint is None:
            ZcmNavNV08CVelocityVector._packed_fingerprint = struct.pack(">Q", ZcmNavNV08CVelocityVector._get_hash_recursive([]))
        return ZcmNavNV08CVelocityVector._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

