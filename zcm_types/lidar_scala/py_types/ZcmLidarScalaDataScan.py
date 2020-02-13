"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmLidarScalaPoint import ZcmLidarScalaPoint

from ZcmService import ZcmService

class ZcmLidarScalaDataScan(object):
    __slots__ = ["service", "scanNumber", "rotatingDirection", "scannerHeight", "nbOfPoints", "scanPoints"]

    anglePerTick = 0.03125
    anglePerLayer = 0.8

    def __init__(self):
        self.service = ZcmService()
        self.scanNumber = 0
        self.rotatingDirection = 0
        self.scannerHeight = 0.0
        self.nbOfPoints = 0
        self.scanPoints = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarScalaDataScan._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">iifi", self.scanNumber, self.rotatingDirection, self.scannerHeight, self.nbOfPoints))
        for i0 in range(self.nbOfPoints):
            assert self.scanPoints[i0]._get_packed_fingerprint() == ZcmLidarScalaPoint._get_packed_fingerprint()
            self.scanPoints[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarScalaDataScan._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarScalaDataScan._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarScalaDataScan()
        self.service = ZcmService._decode_one(buf)
        self.scanNumber, self.rotatingDirection, self.scannerHeight, self.nbOfPoints = struct.unpack(">iifi", buf.read(16))
        self.scanPoints = []
        for i0 in range(self.nbOfPoints):
            self.scanPoints.append(ZcmLidarScalaPoint._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarScalaDataScan in parents: return 0
        newparents = parents + [ZcmLidarScalaDataScan]
        tmphash = (0x5cec064a23c21efd+ ZcmService._get_hash_recursive(newparents)+ ZcmLidarScalaPoint._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarScalaDataScan._packed_fingerprint is None:
            ZcmLidarScalaDataScan._packed_fingerprint = struct.pack(">Q", ZcmLidarScalaDataScan._get_hash_recursive([]))
        return ZcmLidarScalaDataScan._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

