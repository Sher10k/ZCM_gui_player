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

class ZcmRadarContiObjectQualityInfo(object):
    __slots__ = ["service", "id", "dist_long_rms", "vrel_long_rms", "dist_lat_rms", "vrel_lat_rms", "arel_lat_rms", "areal_long_rms", "orientation_rms", "meas_state", "prob_of_exist"]

    def __init__(self):
        self.service = ZcmService()
        self.id = 0
        self.dist_long_rms = 0.0
        self.vrel_long_rms = 0.0
        self.dist_lat_rms = 0.0
        self.vrel_lat_rms = 0.0
        self.arel_lat_rms = 0.0
        self.areal_long_rms = 0.0
        self.orientation_rms = 0.0
        self.meas_state = 0
        self.prob_of_exist = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmRadarContiObjectQualityInfo._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">hfffffffbf", self.id, self.dist_long_rms, self.vrel_long_rms, self.dist_lat_rms, self.vrel_lat_rms, self.arel_lat_rms, self.areal_long_rms, self.orientation_rms, self.meas_state, self.prob_of_exist))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmRadarContiObjectQualityInfo._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmRadarContiObjectQualityInfo._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmRadarContiObjectQualityInfo()
        self.service = ZcmService._decode_one(buf)
        self.id, self.dist_long_rms, self.vrel_long_rms, self.dist_lat_rms, self.vrel_lat_rms, self.arel_lat_rms, self.areal_long_rms, self.orientation_rms, self.meas_state, self.prob_of_exist = struct.unpack(">hfffffffbf", buf.read(35))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmRadarContiObjectQualityInfo in parents: return 0
        newparents = parents + [ZcmRadarContiObjectQualityInfo]
        tmphash = (0xf5ca165979dfdb6c+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmRadarContiObjectQualityInfo._packed_fingerprint is None:
            ZcmRadarContiObjectQualityInfo._packed_fingerprint = struct.pack(">Q", ZcmRadarContiObjectQualityInfo._get_hash_recursive([]))
        return ZcmRadarContiObjectQualityInfo._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
