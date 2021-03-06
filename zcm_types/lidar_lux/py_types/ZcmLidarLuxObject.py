"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmLidarLux2DPoint import ZcmLidarLux2DPoint

class ZcmLidarLuxObject(object):
    __slots__ = ["objectId", "age", "predictionAge", "relativeTimestamp", "refPoint", "refPointSigma", "closestPoint", "boundingBoxCenter", "boundingBoxWidth", "boundingBoxLength", "objectBoxCenter", "objectBoxSizeX", "objectBoxSizeY", "objectBoxOrientation", "absVelocity", "absVelSigmaX", "absVelSigmaY", "relVelocity", "objectClass", "classAge", "classCertainty", "numContourPoints", "numContourPointsIsValid", "contourPoints"]

    def __init__(self):
        self.objectId = 0
        self.age = 0
        self.predictionAge = 0
        self.relativeTimestamp = 0
        self.refPoint = ZcmLidarLux2DPoint()
        self.refPointSigma = ZcmLidarLux2DPoint()
        self.closestPoint = ZcmLidarLux2DPoint()
        self.boundingBoxCenter = ZcmLidarLux2DPoint()
        self.boundingBoxWidth = 0
        self.boundingBoxLength = 0
        self.objectBoxCenter = ZcmLidarLux2DPoint()
        self.objectBoxSizeX = 0
        self.objectBoxSizeY = 0
        self.objectBoxOrientation = 0
        self.absVelocity = ZcmLidarLux2DPoint()
        self.absVelSigmaX = 0
        self.absVelSigmaY = 0
        self.relVelocity = ZcmLidarLux2DPoint()
        self.objectClass = 0
        self.classAge = 0
        self.classCertainty = 0
        self.numContourPoints = 0
        self.numContourPointsIsValid = False
        self.contourPoints = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarLuxObject._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">qiii", self.objectId, self.age, self.predictionAge, self.relativeTimestamp))
        assert self.refPoint._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.refPoint._encode_one(buf)
        assert self.refPointSigma._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.refPointSigma._encode_one(buf)
        assert self.closestPoint._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.closestPoint._encode_one(buf)
        assert self.boundingBoxCenter._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.boundingBoxCenter._encode_one(buf)
        buf.write(struct.pack(">ii", self.boundingBoxWidth, self.boundingBoxLength))
        assert self.objectBoxCenter._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.objectBoxCenter._encode_one(buf)
        buf.write(struct.pack(">iih", self.objectBoxSizeX, self.objectBoxSizeY, self.objectBoxOrientation))
        assert self.absVelocity._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.absVelocity._encode_one(buf)
        buf.write(struct.pack(">ii", self.absVelSigmaX, self.absVelSigmaY))
        assert self.relVelocity._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
        self.relVelocity._encode_one(buf)
        buf.write(struct.pack(">biiib", self.objectClass, self.classAge, self.classCertainty, self.numContourPoints, self.numContourPointsIsValid))
        for i0 in range(self.numContourPoints):
            assert self.contourPoints[i0]._get_packed_fingerprint() == ZcmLidarLux2DPoint._get_packed_fingerprint()
            self.contourPoints[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarLuxObject._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarLuxObject._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarLuxObject()
        self.objectId, self.age, self.predictionAge, self.relativeTimestamp = struct.unpack(">qiii", buf.read(20))
        self.refPoint = ZcmLidarLux2DPoint._decode_one(buf)
        self.refPointSigma = ZcmLidarLux2DPoint._decode_one(buf)
        self.closestPoint = ZcmLidarLux2DPoint._decode_one(buf)
        self.boundingBoxCenter = ZcmLidarLux2DPoint._decode_one(buf)
        self.boundingBoxWidth, self.boundingBoxLength = struct.unpack(">ii", buf.read(8))
        self.objectBoxCenter = ZcmLidarLux2DPoint._decode_one(buf)
        self.objectBoxSizeX, self.objectBoxSizeY, self.objectBoxOrientation = struct.unpack(">iih", buf.read(10))
        self.absVelocity = ZcmLidarLux2DPoint._decode_one(buf)
        self.absVelSigmaX, self.absVelSigmaY = struct.unpack(">ii", buf.read(8))
        self.relVelocity = ZcmLidarLux2DPoint._decode_one(buf)
        self.objectClass, self.classAge, self.classCertainty, self.numContourPoints = struct.unpack(">biii", buf.read(13))
        self.numContourPointsIsValid = bool(struct.unpack('b', buf.read(1))[0])
        self.contourPoints = []
        for i0 in range(self.numContourPoints):
            self.contourPoints.append(ZcmLidarLux2DPoint._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarLuxObject in parents: return 0
        newparents = parents + [ZcmLidarLuxObject]
        tmphash = (0x23d1188e545f0b8d+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)+ ZcmLidarLux2DPoint._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarLuxObject._packed_fingerprint is None:
            ZcmLidarLuxObject._packed_fingerprint = struct.pack(">Q", ZcmLidarLuxObject._get_hash_recursive([]))
        return ZcmLidarLuxObject._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

