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

class ZcmImuNXP(object):
    __slots__ = ["service", "acc_x", "acc_y", "acc_z", "magn_x", "magn_y", "magn_z", "has_gyro", "gyro_x", "gyro_y", "gyro_z"]

    def __init__(self):
        self.service = ZcmService()
        self.acc_x = 0.0
        self.acc_y = 0.0
        self.acc_z = 0.0
        self.magn_x = 0.0
        self.magn_y = 0.0
        self.magn_z = 0.0
        self.has_gyro = False
        self.gyro_x = 0.0
        self.gyro_y = 0.0
        self.gyro_z = 0.0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmImuNXP._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">ddddddbddd", self.acc_x, self.acc_y, self.acc_z, self.magn_x, self.magn_y, self.magn_z, self.has_gyro, self.gyro_x, self.gyro_y, self.gyro_z))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmImuNXP._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmImuNXP._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmImuNXP()
        self.service = ZcmService._decode_one(buf)
        self.acc_x, self.acc_y, self.acc_z, self.magn_x, self.magn_y, self.magn_z = struct.unpack(">dddddd", buf.read(48))
        self.has_gyro = bool(struct.unpack('b', buf.read(1))[0])
        self.gyro_x, self.gyro_y, self.gyro_z = struct.unpack(">ddd", buf.read(24))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmImuNXP in parents: return 0
        newparents = parents + [ZcmImuNXP]
        tmphash = (0xeebf38eaa4346fd6+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmImuNXP._packed_fingerprint is None:
            ZcmImuNXP._packed_fingerprint = struct.pack(">Q", ZcmImuNXP._get_hash_recursive([]))
        return ZcmImuNXP._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)
