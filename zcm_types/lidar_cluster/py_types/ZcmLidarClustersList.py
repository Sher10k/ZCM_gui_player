"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmLidarCluster import ZcmLidarCluster

from ZcmService import ZcmService

class ZcmLidarClustersList(object):
    __slots__ = ["service", "clustersCount", "scanNumber", "scanClusters"]

    def __init__(self):
        self.service = ZcmService()
        self.clustersCount = 0
        self.scanNumber = 0
        self.scanClusters = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarClustersList._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">ii", self.clustersCount, self.scanNumber))
        for i0 in range(self.clustersCount):
            assert self.scanClusters[i0]._get_packed_fingerprint() == ZcmLidarCluster._get_packed_fingerprint()
            self.scanClusters[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarClustersList._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarClustersList._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarClustersList()
        self.service = ZcmService._decode_one(buf)
        self.clustersCount, self.scanNumber = struct.unpack(">ii", buf.read(8))
        self.scanClusters = []
        for i0 in range(self.clustersCount):
            self.scanClusters.append(ZcmLidarCluster._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarClustersList in parents: return 0
        newparents = parents + [ZcmLidarClustersList]
        tmphash = (0xa8a57466df517779+ ZcmService._get_hash_recursive(newparents)+ ZcmLidarCluster._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarClustersList._packed_fingerprint is None:
            ZcmLidarClustersList._packed_fingerprint = struct.pack(">Q", ZcmLidarClustersList._get_hash_recursive([]))
        return ZcmLidarClustersList._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

