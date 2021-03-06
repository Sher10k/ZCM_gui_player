"""ZCM type definitions
This file automatically generated by zcm.
DO NOT MODIFY BY HAND!!!!
"""

try:
    import cStringIO.StringIO as BytesIO
except ImportError:
    from io import BytesIO
import struct

class ZcmCameraBaslerImagePresentation(object):
    __slots__ = ["width", "height", "bytes_per_line", "format", "data_size", "data"]

    def __init__(self):
        self.width = 0
        self.height = 0
        self.bytes_per_line = 0
        self.format = ""
        self.data_size = 0
        self.data = ""

    def encode(self):
        buf = BytesIO()
        buf.write(ZcmCameraBaslerImagePresentation._get_packed_fingerprint())
        self._encode_one(buf)
        return buf.getvalue()

    def _encode_one(self, buf):
        buf.write(struct.pack(">iii", self.width, self.height, self.bytes_per_line))
        __format_encoded = self.format.encode('utf-8')
        buf.write(struct.pack('>I', len(__format_encoded)+1))
        buf.write(__format_encoded)
        buf.write(b"\0")
        buf.write(struct.pack(">i", self.data_size))
        buf.write(bytearray(self.data[:self.data_size]))

    def decode(data):
        if hasattr(data, 'read'):
            buf = data
        else:
            buf = BytesIO(data)
        if buf.read(8) != ZcmCameraBaslerImagePresentation._get_packed_fingerprint():
            raise ValueError("Decode error")
        return ZcmCameraBaslerImagePresentation._decode_one(buf)
    decode = staticmethod(decode)

    def _decode_one(buf):
        self = ZcmCameraBaslerImagePresentation()
        self.width, self.height, self.bytes_per_line = struct.unpack(">iii", buf.read(12))
        __format_len = struct.unpack('>I', buf.read(4))[0]
        self.format = buf.read(__format_len)[:-1].decode('utf-8', 'replace')
        self.data_size = struct.unpack(">i", buf.read(4))[0]
        self.data = buf.read(self.data_size)
        return self
    _decode_one = staticmethod(_decode_one)

    _hash = None
    def _get_hash_recursive(parents):
        if ZcmCameraBaslerImagePresentation in parents: return 0
        tmphash = (0xd9af91e2fd9d4b64) & 0xffffffffffffffff
        tmphash  = (((tmphash<<1)&0xffffffffffffffff)  + ((tmphash>>63)&0x1)) & 0xffffffffffffffff
        return tmphash
    _get_hash_recursive = staticmethod(_get_hash_recursive)
    _packed_fingerprint = None

    def _get_packed_fingerprint():
        if ZcmCameraBaslerImagePresentation._packed_fingerprint is None:
            ZcmCameraBaslerImagePresentation._packed_fingerprint = struct.pack(">Q", ZcmCameraBaslerImagePresentation._get_hash_recursive([]))
        return ZcmCameraBaslerImagePresentation._packed_fingerprint
    _get_packed_fingerprint = staticmethod(_get_packed_fingerprint)

