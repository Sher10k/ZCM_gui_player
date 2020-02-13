"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmObstacleLocalCoordinates(object):
    __slots__ = ["x", "y", "z"]

    def __init__(self):
        self.x = 0.0
        self.y = 0.0
        self.z = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmObstacleLocalCoordinates._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ddd", self.x, self.y, self.z))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmObstacleLocalCoordinates._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmObstacleLocalCoordinates._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmObstacleLocalCoordinates()
        self.x, self.y, self.z = struct.unpack(">ddd", buf.read(24))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmObstacleLocalCoordinates in parents: return 0
        tmphash = (0xa185a87460cf139b) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmObstacleLocalCoordinates._packed_fingerprint is None:
            ZcmObstacleLocalCoordinates._packed_fingerprint = struct.pack(">Q", ZcmObstacleLocalCoordinates._get_hash_recursive([]))
        return ZcmObstacleLocalCoordinates._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

