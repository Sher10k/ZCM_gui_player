"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmObstacleGeoCoordinates import ZcmObstacleGeoCoordinates

from ZcmObstacleUtmCoordinates import ZcmObstacleUtmCoordinates

from ZcmObstacleProperties import ZcmObstacleProperties

from ZcmObstacleLocalCoordinates import ZcmObstacleLocalCoordinates

class ZcmObstacle(object):
    __slots__ = ["cluster_id", "object_type", "object_properies", "local_coordinates", "utm_coordinates", "geo_coordinates"]

    STATIC_OBJECT = 0
    MOVING_OBJECT = 1

    def __init__(self):
        self.cluster_id = 0
        self.object_type = 0
        self.object_properies = ZcmObstacleProperties()
        self.local_coordinates = ZcmObstacleLocalCoordinates()
        self.utm_coordinates = ZcmObstacleUtmCoordinates()
        self.geo_coordinates = ZcmObstacleGeoCoordinates()

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmObstacle._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ii", self.cluster_id, self.object_type))
        assert self.object_properies._get_packed_fingerprint() == ZcmObstacleProperties._get_packed_fingerprint()
        self.object_properies._encode_one(buf)
        assert self.local_coordinates._get_packed_fingerprint() == ZcmObstacleLocalCoordinates._get_packed_fingerprint()
        self.local_coordinates._encode_one(buf)
        assert self.utm_coordinates._get_packed_fingerprint() == ZcmObstacleUtmCoordinates._get_packed_fingerprint()
        self.utm_coordinates._encode_one(buf)
        assert self.geo_coordinates._get_packed_fingerprint() == ZcmObstacleGeoCoordinates._get_packed_fingerprint()
        self.geo_coordinates._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmObstacle._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmObstacle._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmObstacle()
        self.cluster_id, self.object_type = struct.unpack(">ii", buf.read(8))
        self.object_properies = ZcmObstacleProperties._decode_one(buf)
        self.local_coordinates = ZcmObstacleLocalCoordinates._decode_one(buf)
        self.utm_coordinates = ZcmObstacleUtmCoordinates._decode_one(buf)
        self.geo_coordinates = ZcmObstacleGeoCoordinates._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmObstacle in parents: return 0
        newparents = parents + [ZcmObstacle]
        tmphash = (0xbd77d4f68b2e8a0f+ ZcmObstacleProperties._get_hash_recursive(newparents)+ ZcmObstacleLocalCoordinates._get_hash_recursive(newparents)+ ZcmObstacleUtmCoordinates._get_hash_recursive(newparents)+ ZcmObstacleGeoCoordinates._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmObstacle._packed_fingerprint is None:
            ZcmObstacle._packed_fingerprint = struct.pack(">Q", ZcmObstacle._get_hash_recursive([]))
        return ZcmObstacle._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
