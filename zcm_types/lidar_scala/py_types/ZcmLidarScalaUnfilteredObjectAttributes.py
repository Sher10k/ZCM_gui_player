"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

from ZcmLidarScalaContourPoint import ZcmLidarScalaContourPoint

class ZcmLidarScalaUnfilteredObjectAttributes(object):
    __slots__ = ["relativeTimeOfMeasure", "positionClosestObjectPointX", "positionClosestObjectPointY", "objectBoxSizeX", "objectBoxSizeY", "objectBoxSizeSigmaX", "objectBoxSizeSigmaY", "objectBoxOrientation", "objectBoxOrientationSigma", "objectBoxHeight", "referencePointLocation", "referencePointCoordX", "referencePointCoordY", "referencePointCoordSigmaX", "referencePointCoordSigmaY", "referencePointPositionCorrCoeff", "existenceProbaility", "possibleNbOfContourPoints", "contourPoints"]

    def __init__(self):
        self.relativeTimeOfMeasure = 0
        self.positionClosestObjectPointX = 0.0
        self.positionClosestObjectPointY = 0.0
        self.objectBoxSizeX = 0.0
        self.objectBoxSizeY = 0.0
        self.objectBoxSizeSigmaX = 0.0
        self.objectBoxSizeSigmaY = 0.0
        self.objectBoxOrientation = 0.0
        self.objectBoxOrientationSigma = 0.0
        self.objectBoxHeight = 0.0
        self.referencePointLocation = 0
        self.referencePointCoordX = 0.0
        self.referencePointCoordY = 0.0
        self.referencePointCoordSigmaX = 0.0
        self.referencePointCoordSigmaY = 0.0
        self.referencePointPositionCorrCoeff = 0
        self.existenceProbaility = 0.0
        self.possibleNbOfContourPoints = 0
        self.contourPoints = []

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarScalaUnfilteredObjectAttributes._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ifffffffffhffffhfh", self.relativeTimeOfMeasure, self.positionClosestObjectPointX, self.positionClosestObjectPointY, self.objectBoxSizeX, self.objectBoxSizeY, self.objectBoxSizeSigmaX, self.objectBoxSizeSigmaY, self.objectBoxOrientation, self.objectBoxOrientationSigma, self.objectBoxHeight, self.referencePointLocation, self.referencePointCoordX, self.referencePointCoordY, self.referencePointCoordSigmaX, self.referencePointCoordSigmaY, self.referencePointPositionCorrCoeff, self.existenceProbaility, self.possibleNbOfContourPoints))
        for i0 in range(self.possibleNbOfContourPoints):
            assert self.contourPoints[i0]._get_packed_fingerprint() == ZcmLidarScalaContourPoint._get_packed_fingerprint()
            self.contourPoints[i0]._encode_one(buf)

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarScalaUnfilteredObjectAttributes._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarScalaUnfilteredObjectAttributes._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarScalaUnfilteredObjectAttributes()
        self.relativeTimeOfMeasure, self.positionClosestObjectPointX, self.positionClosestObjectPointY, self.objectBoxSizeX, self.objectBoxSizeY, self.objectBoxSizeSigmaX, self.objectBoxSizeSigmaY, self.objectBoxOrientation, self.objectBoxOrientationSigma, self.objectBoxHeight, self.referencePointLocation, self.referencePointCoordX, self.referencePointCoordY, self.referencePointCoordSigmaX, self.referencePointCoordSigmaY, self.referencePointPositionCorrCoeff, self.existenceProbaility, self.possibleNbOfContourPoints = struct.unpack(">ifffffffffhffffhfh", buf.read(66))
        self.contourPoints = []
        for i0 in range(self.possibleNbOfContourPoints):
            self.contourPoints.append(ZcmLidarScalaContourPoint._decode_one(buf))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarScalaUnfilteredObjectAttributes in parents: return 0
        newparents = parents + [ZcmLidarScalaUnfilteredObjectAttributes]
        tmphash = (0xcd5ea924fe640766+ ZcmLidarScalaContourPoint._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarScalaUnfilteredObjectAttributes._packed_fingerprint is None:
            ZcmLidarScalaUnfilteredObjectAttributes._packed_fingerprint = struct.pack(">Q", ZcmLidarScalaUnfilteredObjectAttributes._get_hash_recursive([]))
        return ZcmLidarScalaUnfilteredObjectAttributes._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

