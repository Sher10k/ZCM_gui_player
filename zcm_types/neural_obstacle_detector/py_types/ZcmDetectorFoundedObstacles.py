"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmObstacleDetectorObject import ZcmObstacleDetectorObject

from ZcmService import ZcmService

class ZcmDetectorFoundedObstacles(object):
    __slots__ = ["service", "count", "obstacles"]

    def __init__(self):
        self.service = ZcmService()
        self.count = 0
        self.obstacles = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmDetectorFoundedObstacles._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">i", self.count))
        for i0 in range(self.count):
            assert self.obstacles[i0]._get_packed_fingerprint() == ZcmObstacleDetectorObject._get_packed_fingerprint()
            self.obstacles[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmDetectorFoundedObstacles._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmDetectorFoundedObstacles._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmDetectorFoundedObstacles()
        self.service = ZcmService._decode_one(buf)
        self.count = struct.unpack(">i", buf.read(4))[0]
        self.obstacles = []
        for i0 in range(self.count):
            self.obstacles.append(ZcmObstacleDetectorObject._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmDetectorFoundedObstacles in parents: return 0
        newparents = parents + [ZcmDetectorFoundedObstacles]
        tmphash = (0x642ae1baee381172+ ZcmService._get_hash_recursive(newparents)+ ZcmObstacleDetectorObject._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmDetectorFoundedObstacles._packed_fingerprint is None:
            ZcmDetectorFoundedObstacles._packed_fingerprint = struct.pack(">Q", ZcmDetectorFoundedObstacles._get_hash_recursive([]))
        return ZcmDetectorFoundedObstacles._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

