"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmCamWDRaindropPoint import ZcmCamWDRaindropPoint

from ZcmService import ZcmService

class ZcmCamWDRaindrop(object):
    __slots__ = ["service", "all_area", "drop_count", "raindrops"]

    def __init__(self):
        self.service = ZcmService()
        self.all_area = 0
        self.drop_count = 0
        self.raindrops = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmCamWDRaindrop._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">ii", self.all_area, self.drop_count))
        for i0 in range(self.drop_count):
            assert self.raindrops[i0]._get_packed_fingerprint() == ZcmCamWDRaindropPoint._get_packed_fingerprint()
            self.raindrops[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmCamWDRaindrop._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmCamWDRaindrop._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmCamWDRaindrop()
        self.service = ZcmService._decode_one(buf)
        self.all_area, self.drop_count = struct.unpack(">ii", buf.read(8))
        self.raindrops = []
        for i0 in range(self.drop_count):
            self.raindrops.append(ZcmCamWDRaindropPoint._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmCamWDRaindrop in parents: return 0
        newparents = parents + [ZcmCamWDRaindrop]
        tmphash = (0x14654c3e241396e3+ ZcmService._get_hash_recursive(newparents)+ ZcmCamWDRaindropPoint._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmCamWDRaindrop._packed_fingerprint is None:
            ZcmCamWDRaindrop._packed_fingerprint = struct.pack(">Q", ZcmCamWDRaindrop._get_hash_recursive([]))
        return ZcmCamWDRaindrop._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

