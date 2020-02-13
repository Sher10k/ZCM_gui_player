"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmCamWDGlarePoint import ZcmCamWDGlarePoint

from ZcmService import ZcmService

class ZcmCamWDGlare(object):
    __slots__ = ["service", "all_area", "glare_count", "glares"]

    def __init__(self):
        self.service = ZcmService()
        self.all_area = 0
        self.glare_count = 0
        self.glares = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmCamWDGlare._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">ii", self.all_area, self.glare_count))
        for i0 in range(self.glare_count):
            assert self.glares[i0]._get_packed_fingerprint() == ZcmCamWDGlarePoint._get_packed_fingerprint()
            self.glares[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmCamWDGlare._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmCamWDGlare._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmCamWDGlare()
        self.service = ZcmService._decode_one(buf)
        self.all_area, self.glare_count = struct.unpack(">ii", buf.read(8))
        self.glares = []
        for i0 in range(self.glare_count):
            self.glares.append(ZcmCamWDGlarePoint._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmCamWDGlare in parents: return 0
        newparents = parents + [ZcmCamWDGlare]
        tmphash = (0x3c88e95286e72fce+ ZcmService._get_hash_recursive(newparents)+ ZcmCamWDGlarePoint._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmCamWDGlare._packed_fingerprint is None:
            ZcmCamWDGlare._packed_fingerprint = struct.pack(">Q", ZcmCamWDGlare._get_hash_recursive([]))
        return ZcmCamWDGlare._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
