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

class LidarSickErrors(object):
    __slots__ = ["service", "contact_support", "buffer_transferred_incompletely", "buffer_overflow", "under_temperature", "over_temperature", "temp_sensor_defect", "dsp_not_receiving_data", "dsp_not_communicate_fpga", "dsp_communication_timeout", "incorrect_configuration_data", "incorrect_configuration_param", "data_processing_timeout", "can_message_lost", "severe_deviation", "motor_blocked"]

    def __init__(self):
        self.service = ZcmService()
        self.contact_support = False
        self.buffer_transferred_incompletely = False
        self.buffer_overflow = False
        self.under_temperature = False
        self.over_temperature = False
        self.temp_sensor_defect = False
        self.dsp_not_receiving_data = False
        self.dsp_not_communicate_fpga = False
        self.dsp_communication_timeout = False
        self.incorrect_configuration_data = False
        self.incorrect_configuration_param = False
        self.data_processing_timeout = False
        self.can_message_lost = False
        self.severe_deviation = False
        self.motor_blocked = False

    def encode(self):
        buf = BytesIO()
        buf.write(LidarSickErrors._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">bbbbbbbbbbbbbbb", self.contact_support, self.buffer_transferred_incompletely, self.buffer_overflow, self.under_temperature, self.over_temperature, self.temp_sensor_defect, self.dsp_not_receiving_data, self.dsp_not_communicate_fpga, self.dsp_communication_timeout, self.incorrect_configuration_data, self.incorrect_configuration_param, self.data_processing_timeout, self.can_message_lost, self.severe_deviation, self.motor_blocked))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != LidarSickErrors._get_packed_fingerprint():
            raise ValueError("Decode error")
        return LidarSickErrors._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = LidarSickErrors()
        self.service = ZcmService._decode_one(buf)
        self.contact_support = bool(struct.unpack('b', buf.read(1))[0])
        self.buffer_transferred_incompletely = bool(struct.unpack('b', buf.read(1))[0])
        self.buffer_overflow = bool(struct.unpack('b', buf.read(1))[0])
        self.under_temperature = bool(struct.unpack('b', buf.read(1))[0])
        self.over_temperature = bool(struct.unpack('b', buf.read(1))[0])
        self.temp_sensor_defect = bool(struct.unpack('b', buf.read(1))[0])
        self.dsp_not_receiving_data = bool(struct.unpack('b', buf.read(1))[0])
        self.dsp_not_communicate_fpga = bool(struct.unpack('b', buf.read(1))[0])
        self.dsp_communication_timeout = bool(struct.unpack('b', buf.read(1))[0])
        self.incorrect_configuration_data = bool(struct.unpack('b', buf.read(1))[0])
        self.incorrect_configuration_param = bool(struct.unpack('b', buf.read(1))[0])
        self.data_processing_timeout = bool(struct.unpack('b', buf.read(1))[0])
        self.can_message_lost = bool(struct.unpack('b', buf.read(1))[0])
        self.severe_deviation = bool(struct.unpack('b', buf.read(1))[0])
        self.motor_blocked = bool(struct.unpack('b', buf.read(1))[0])
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if LidarSickErrors in parents: return 0
        newparents = parents + [LidarSickErrors]
        tmphash = (0xaae5f84d16c4acc+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if LidarSickErrors._packed_fingerprint is None:
            LidarSickErrors._packed_fingerprint = struct.pack(">Q", LidarSickErrors._get_hash_recursive([]))
        return LidarSickErrors._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

