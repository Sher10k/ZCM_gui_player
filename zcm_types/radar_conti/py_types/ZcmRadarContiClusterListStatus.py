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

class ZcmRadarContiClusterListStatus(object):
    __slots__ = ["service", "number_cluster_near", "number_cluster_far", "meas_count", "interface_version"]

    def __init__(self):
        self.service = ZcmService()
        self.number_cluster_near = 0
        self.number_cluster_far = 0
        self.meas_count = 0
        self.interface_version = 0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmRadarContiClusterListStatus._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">hhib", self.number_cluster_near, self.number_cluster_far, self.meas_count, self.interface_version))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmRadarContiClusterListStatus._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmRadarContiClusterListStatus._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmRadarContiClusterListStatus()
        self.service = ZcmService._decode_one(buf)
        self.number_cluster_near, self.number_cluster_far, self.meas_count, self.interface_version = struct.unpack(">hhib", buf.read(9))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmRadarContiClusterListStatus in parents: return 0
        newparents = parents + [ZcmRadarContiClusterListStatus]
        tmphash = (0x337c6d358dd32ea8+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmRadarContiClusterListStatus._packed_fingerprint is None:
            ZcmRadarContiClusterListStatus._packed_fingerprint = struct.pack(">Q", ZcmRadarContiClusterListStatus._get_hash_recursive([]))
        return ZcmRadarContiClusterListStatus._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

