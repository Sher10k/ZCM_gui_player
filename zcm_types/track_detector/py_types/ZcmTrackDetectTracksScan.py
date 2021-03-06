"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmTrackDetectTrack import ZcmTrackDetectTrack

from ZcmService import ZcmService

class ZcmTrackDetectTracksScan(object):
    __slots__ = ["service", "track_count", "track"]

    def __init__(self):
        self.service = ZcmService()
        self.track_count = 0
        self.track = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmTrackDetectTracksScan._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">b", self.track_count))
        for i0 in range(self.track_count):
            assert self.track[i0]._get_packed_fingerprint() == ZcmTrackDetectTrack._get_packed_fingerprint()
            self.track[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmTrackDetectTracksScan._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmTrackDetectTracksScan._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmTrackDetectTracksScan()
        self.service = ZcmService._decode_one(buf)
        self.track_count = struct.unpack(">b", buf.read(1))[0]
        self.track = []
        for i0 in range(self.track_count):
            self.track.append(ZcmTrackDetectTrack._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmTrackDetectTracksScan in parents: return 0
        newparents = parents + [ZcmTrackDetectTracksScan]
        tmphash = (0xb8daa3a8b4dd62ea+ ZcmService._get_hash_recursive(newparents)+ ZcmTrackDetectTrack._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmTrackDetectTracksScan._packed_fingerprint is None:
            ZcmTrackDetectTracksScan._packed_fingerprint = struct.pack(">Q", ZcmTrackDetectTracksScan._get_hash_recursive([]))
        return ZcmTrackDetectTracksScan._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

