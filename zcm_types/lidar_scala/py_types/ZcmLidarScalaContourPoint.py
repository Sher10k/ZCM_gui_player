"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmLidarScalaContourPoint(object):
    __slots__ = ["posX", "posY", "posXSigma", "posYSigma", "corrCoeff", "existenceProbability"]

    def __init__(self):
        self.posX = 0.0
        self.posY = 0.0
        self.posXSigma = 0.0
        self.posYSigma = 0.0
        self.corrCoeff = 0
        self.existenceProbability = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmLidarScalaContourPoint._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">ffffbf", self.posX, self.posY, self.posXSigma, self.posYSigma, self.corrCoeff, self.existenceProbability))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmLidarScalaContourPoint._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmLidarScalaContourPoint._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmLidarScalaContourPoint()
        self.posX, self.posY, self.posXSigma, self.posYSigma, self.corrCoeff, self.existenceProbability = struct.unpack(">ffffbf", buf.read(21))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmLidarScalaContourPoint in parents: return 0
        tmphash = (0xae279f219b54a0aa) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmLidarScalaContourPoint._packed_fingerprint is None:
            ZcmLidarScalaContourPoint._packed_fingerprint = struct.pack(">Q", ZcmLidarScalaContourPoint._get_hash_recursive([]))
        return ZcmLidarScalaContourPoint._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

