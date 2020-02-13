"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmStereoPairPoint3D import ZcmStereoPairPoint3D

from ZcmService import ZcmService

class ZcmStereoDisparities(object):
    __slots__ = ["service", "max_disparity", "disparities_points"]

    def __init__(self):
        self.service = ZcmService()
        self.max_disparity = 0
        self.disparities_points = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmStereoDisparities._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">i", self.max_disparity))
        for i0 in range(self.max_disparity):
            assert self.disparities_points[i0]._get_packed_fingerprint() == ZcmStereoPairPoint3D._get_packed_fingerprint()
            self.disparities_points[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmStereoDisparities._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmStereoDisparities._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmStereoDisparities()
        self.service = ZcmService._decode_one(buf)
        self.max_disparity = struct.unpack(">i", buf.read(4))[0]
        self.disparities_points = []
        for i0 in range(self.max_disparity):
            self.disparities_points.append(ZcmStereoPairPoint3D._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmStereoDisparities in parents: return 0
        newparents = parents + [ZcmStereoDisparities]
        tmphash = (0x9fad58de8753f14+ ZcmService._get_hash_recursive(newparents)+ ZcmStereoPairPoint3D._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmStereoDisparities._packed_fingerprint is None:
            ZcmStereoDisparities._packed_fingerprint = struct.pack(">Q", ZcmStereoDisparities._get_hash_recursive([]))
        return ZcmStereoDisparities._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
