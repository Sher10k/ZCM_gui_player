"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmRadarContiClusterQualityInfo import ZcmRadarContiClusterQualityInfo

from ZcmRadarContiClusterGeneral import ZcmRadarContiClusterGeneral

class ZcmRadarContiCluster(object):
    __slots__ = ["id", "general", "quality"]

    def __init__(self):
        self.id = 0
        self.general = ZcmRadarContiClusterGeneral()
        self.quality = ZcmRadarContiClusterQualityInfo()

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmRadarContiCluster._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">h", self.id))
        assert self.general._get_packed_fingerprint() == ZcmRadarContiClusterGeneral._get_packed_fingerprint()
        self.general._encode_one(buf)
        assert self.quality._get_packed_fingerprint() == ZcmRadarContiClusterQualityInfo._get_packed_fingerprint()
        self.quality._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmRadarContiCluster._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmRadarContiCluster._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmRadarContiCluster()
        self.id = struct.unpack(">h", buf.read(2))[0]
        self.general = ZcmRadarContiClusterGeneral._decode_one(buf)
        self.quality = ZcmRadarContiClusterQualityInfo._decode_one(buf)
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmRadarContiCluster in parents: return 0
        newparents = parents + [ZcmRadarContiCluster]
        tmphash = (0xe0d2bb4ef4e457e5+ ZcmRadarContiClusterGeneral._get_hash_recursive(newparents)+ ZcmRadarContiClusterQualityInfo._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmRadarContiCluster._packed_fingerprint is None:
            ZcmRadarContiCluster._packed_fingerprint = struct.pack(">Q", ZcmRadarContiCluster._get_hash_recursive([]))
        return ZcmRadarContiCluster._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

