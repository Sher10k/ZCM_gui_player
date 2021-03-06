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

class LidarSickSensorInfo(object):
    __slots__ = ["service", "version", "related_scan_num", "temperature", "apd_voltage", "apd_voltage_reduction", "rotation_duration_ms", "operating_hours", "scanner_blind", "noise_reduction_active", "range_estimation", "contact_support", "buffer_transferred_incompletely", "buffer_overflow", "under_temperature", "over_temperature", "temp_sensor_defect", "dsp_not_receiving_data", "dsp_not_communicate_fpga", "dsp_communication_timeout", "incorrect_configuration_data", "incorrect_configuration_param", "data_processing_timeout", "can_message_lost", "severe_deviation", "motor_blocked", "low_temperature", "high_temperature", "check_sync_scan_freq", "startpulse_not_detected_1", "startpulse_not_detected_2", "can_blocked", "eth_blocked", "check_eth_data", "incorrect_command_received", "memory_access_failure", "segment_overflow", "ego_motion", "mounting_pos", "calc_freq", "no_ntp_time", "no_time_sync_pps", "no_time_sync_command", "no_time_sync", "slight_deviation"]

    def __init__(self):
        self.service = ZcmService()
        self.version = 0
        self.related_scan_num = 0
        self.temperature = 0
        self.apd_voltage = 0
        self.apd_voltage_reduction = 0
        self.rotation_duration_ms = 0
        self.operating_hours = 0
        self.scanner_blind = False
        self.noise_reduction_active = False
        self.range_estimation = 0
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
        self.low_temperature = False
        self.high_temperature = False
        self.check_sync_scan_freq = False
        self.startpulse_not_detected_1 = False
        self.startpulse_not_detected_2 = False
        self.can_blocked = False
        self.eth_blocked = False
        self.check_eth_data = False
        self.incorrect_command_received = False
        self.memory_access_failure = False
        self.segment_overflow = False
        self.ego_motion = False
        self.mounting_pos = False
        self.calc_freq = False
        self.no_ntp_time = False
        self.no_time_sync_pps = False
        self.no_time_sync_command = False
        self.no_time_sync = False
        self.slight_deviation = False

    def encode(self):
        buf = BytesIO()
        buf.write(LidarSickSensorInfo._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        assert self.service._get_packed_fingerprint() == ZcmService._get_packed_fingerprint()
        self.service._encode_one(buf)
        buf.write(struct.pack(">hhhhhiibbhbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", self.version, self.related_scan_num, self.temperature, self.apd_voltage, self.apd_voltage_reduction, self.rotation_duration_ms, self.operating_hours, self.scanner_blind, self.noise_reduction_active, self.range_estimation, self.contact_support, self.buffer_transferred_incompletely, self.buffer_overflow, self.under_temperature, self.over_temperature, self.temp_sensor_defect, self.dsp_not_receiving_data, self.dsp_not_communicate_fpga, self.dsp_communication_timeout, self.incorrect_configuration_data, self.incorrect_configuration_param, self.data_processing_timeout, self.can_message_lost, self.severe_deviation, self.motor_blocked, self.low_temperature, self.high_temperature, self.check_sync_scan_freq, self.startpulse_not_detected_1, self.startpulse_not_detected_2, self.can_blocked, self.eth_blocked, self.check_eth_data, self.incorrect_command_received, self.memory_access_failure, self.segment_overflow, self.ego_motion, self.mounting_pos, self.calc_freq, self.no_ntp_time, self.no_time_sync_pps, self.no_time_sync_command, self.no_time_sync, self.slight_deviation))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != LidarSickSensorInfo._get_packed_fingerprint():
            raise ValueError("Decode error")
        return LidarSickSensorInfo._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = LidarSickSensorInfo()
        self.service = ZcmService._decode_one(buf)
        self.version, self.related_scan_num, self.temperature, self.apd_voltage, self.apd_voltage_reduction, self.rotation_duration_ms, self.operating_hours = struct.unpack(">hhhhhii", buf.read(18))
        self.scanner_blind = bool(struct.unpack('b', buf.read(1))[0])
        self.noise_reduction_active = bool(struct.unpack('b', buf.read(1))[0])
        self.range_estimation = struct.unpack(">h", buf.read(2))[0]
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
        self.low_temperature = bool(struct.unpack('b', buf.read(1))[0])
        self.high_temperature = bool(struct.unpack('b', buf.read(1))[0])
        self.check_sync_scan_freq = bool(struct.unpack('b', buf.read(1))[0])
        self.startpulse_not_detected_1 = bool(struct.unpack('b', buf.read(1))[0])
        self.startpulse_not_detected_2 = bool(struct.unpack('b', buf.read(1))[0])
        self.can_blocked = bool(struct.unpack('b', buf.read(1))[0])
        self.eth_blocked = bool(struct.unpack('b', buf.read(1))[0])
        self.check_eth_data = bool(struct.unpack('b', buf.read(1))[0])
        self.incorrect_command_received = bool(struct.unpack('b', buf.read(1))[0])
        self.memory_access_failure = bool(struct.unpack('b', buf.read(1))[0])
        self.segment_overflow = bool(struct.unpack('b', buf.read(1))[0])
        self.ego_motion = bool(struct.unpack('b', buf.read(1))[0])
        self.mounting_pos = bool(struct.unpack('b', buf.read(1))[0])
        self.calc_freq = bool(struct.unpack('b', buf.read(1))[0])
        self.no_ntp_time = bool(struct.unpack('b', buf.read(1))[0])
        self.no_time_sync_pps = bool(struct.unpack('b', buf.read(1))[0])
        self.no_time_sync_command = bool(struct.unpack('b', buf.read(1))[0])
        self.no_time_sync = bool(struct.unpack('b', buf.read(1))[0])
        self.slight_deviation = bool(struct.unpack('b', buf.read(1))[0])
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if LidarSickSensorInfo in parents: return 0
        newparents = parents + [LidarSickSensorInfo]
        tmphash = (0xdf80f09c82044329+ ZcmService._get_hash_recursive(newparents)) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if LidarSickSensorInfo._packed_fingerprint is None:
            LidarSickSensorInfo._packed_fingerprint = struct.pack(">Q", LidarSickSensorInfo._get_hash_recursive([]))
        return LidarSickSensorInfo._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

