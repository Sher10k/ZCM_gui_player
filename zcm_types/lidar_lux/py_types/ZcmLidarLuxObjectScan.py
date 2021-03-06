"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmLidarLuxObject import ZcmLidarLuxObject

from ZcmService import ZcmService

class ZcmLidarLuxObjectScan(object):
    __slots__ = ["service", "nbOfObjects", "objects"]

    def __init__(self):
        self.service = ZcmService()
        self.nbOfObjects = 0
        self.objects = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarLuxObjectScan._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">i", self.nbOfObjects))
        for i0 in range(self.nbOfObjects):
            assert self.objects[i0]._get_packed_fingerprint() == ZcmLidarLuxObject._get_packed_fingerprint()
            self.objects[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarLuxObjectScan._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarLuxObjectScan._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarLuxObjectScan()
        self.service = ZcmService._decode_one(buf)
        self.nbOfObjects = struct.unpack(">i", buf.read(4))[0]
        self.objects = []
        for i0 in range(self.nbOfObjects):
            self.objects.append(ZcmLidarLuxObject._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarLuxObjectScan in parents: return 0
        newparents = parents + [ZcmLidarLuxObjectScan]
        tmphash = (0x3b10daadb53e6d81+ ZcmService._get_hash_recursive(newparents)+ ZcmLidarLuxObject._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarLuxObjectScan._packed_fingerprint is None:
            ZcmLidarLuxObjectScan._packed_fingerprint = struct.pack(">Q", ZcmLidarLuxObjectScan._get_hash_recursive([]))
        return ZcmLidarLuxObjectScan._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

