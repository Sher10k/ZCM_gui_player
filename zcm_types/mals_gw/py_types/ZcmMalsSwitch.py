"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmMalsSwitch(object):
    __slots__ = ["state", "name"]

    def __init__(self):
        self.state = 0
        self.name = ""

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmMalsSwitch._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">b", self.state))
        __name_encoded = self.name.encode('utf-8')
        buf.write(struct.pack('>I', len(__name_encoded)+1))
        buf.write(__name_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmMalsSwitch._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmMalsSwitch._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmMalsSwitch()
        self.state = struct.unpack(">b", buf.read(1))[0]
        __name_len = struct.unpack('>I', buf.read(4))[0]
        self.name = buf.read(__name_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmMalsSwitch in parents: return 0
        tmphash = (0x521308f3c88f660e) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmMalsSwitch._packed_fingerprint is None:
            ZcmMalsSwitch._packed_fingerprint = struct.pack(">Q", ZcmMalsSwitch._get_hash_recursive([]))
        return ZcmMalsSwitch._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

