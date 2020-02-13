"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmObjectStatus(object):
    __slots__ = ["object_name", "object_state"]

    def __init__(self):
        self.object_name = ""
        self.object_state = ""

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmObjectStatus._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        __object_name_encoded = self.object_name.encode('utf-8')
        buf.write(struct.pack('>I', len(__object_name_encoded)+1))
        buf.write(__object_name_encoded)
        buf.write(b"\0")
        __object_state_encoded = self.object_state.encode('utf-8')
        buf.write(struct.pack('>I', len(__object_state_encoded)+1))
        buf.write(__object_state_encoded)
        buf.write(b"\0")

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmObjectStatus._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmObjectStatus._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmObjectStatus()
        __object_name_len = struct.unpack('>I', buf.read(4))[0]
        self.object_name = buf.read(__object_name_len)[:-1].decode('utf-8', 'replace')
        __object_state_len = struct.unpack('>I', buf.read(4))[0]
        self.object_state = buf.read(__object_state_len)[:-1].decode('utf-8', 'replace')
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmObjectStatus in parents: return 0
        tmphash = (0xe313a4fa6dd4985) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmObjectStatus._packed_fingerprint is None:
            ZcmObjectStatus._packed_fingerprint = struct.pack(">Q", ZcmObjectStatus._get_hash_recursive([]))
        return ZcmObjectStatus._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

