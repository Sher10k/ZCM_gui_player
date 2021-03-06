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

class ZcmSauglDiagnostics(object):
    __slots__ = ["service", "power", "is_power_brake", "is_hold_speed", "is_reversor_forward", "is_reversor_backward", "mode", "is_test_request", "hold_speed", "speed"]

    MODE_DISTANT_CONTROL_OFF = 0
    MODE_DISTANT_CONTROL = 3

    def __init__(self):
        self.service = ZcmService()
        self.power = 0
        self.is_power_brake = False
        self.is_hold_speed = False
        self.is_reversor_forward = False
        self.is_reversor_backward = False
        self.mode = 0
        self.is_test_request = False
        self.hold_speed = 0
        self.speed = 0

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmSauglDiagnostics._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">bbbbbhbhi", self.power, self.is_power_brake, self.is_hold_speed, self.is_reversor_forward, self.is_reversor_backward, self.mode, self.is_test_request, self.hold_speed, self.speed))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmSauglDiagnostics._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmSauglDiagnostics._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmSauglDiagnostics()
        self.service = ZcmService._decode_one(buf)
        self.power = struct.unpack(">b", buf.read(1))[0]
        self.is_power_brake = bool(struct.unpack('b', buf.read(1))[0])
        self.is_hold_speed = bool(struct.unpack('b', buf.read(1))[0])
        self.is_reversor_forward = bool(struct.unpack('b', buf.read(1))[0])
        self.is_reversor_backward = bool(struct.unpack('b', buf.read(1))[0])
        self.mode = struct.unpack(">h", buf.read(2))[0]
        self.is_test_request = bool(struct.unpack('b', buf.read(1))[0])
        self.hold_speed, self.speed = struct.unpack(">hi", buf.read(6))
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmSauglDiagnostics in parents: return 0
        newparents = parents + [ZcmSauglDiagnostics]
        tmphash = (0x873ef9bafbc56b95+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmSauglDiagnostics._packed_fingerprint is None:
            ZcmSauglDiagnostics._packed_fingerprint = struct.pack(">Q", ZcmSauglDiagnostics._get_hash_recursive([]))
        return ZcmSauglDiagnostics._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

