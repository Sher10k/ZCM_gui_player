/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmStereoPairReconstruction_hpp__
#define __ZcmStereoPairReconstruction_hpp__

#include <vector>
#include "ZcmService.hpp"
#include "ZcmStereoPairPoint3D.hpp"
#include "ZcmCameraBaslerJpegFrame.hpp"


/**
 * @struct ZcmStereoPairReconstruction
 * @brief Сообщение содержит координаты реконструированных точек в трёхмерном пространстве
 * @var ZcmStereoPairReconstruction::service
 * @brief - сообщение с временем получения данных и временем их обработки
 * @var ZcmStereoPairReconstruction::count
 * @brief - количество реконструированных точек
 * @var ZcmStereoPairReconstruction::points
 * @brief - реконструированные точки
 * @var ZcmStereoPairReconstruction::jpeg_frame
 * @brief - кадр, реконструкция которого приведена
 *
 */
class ZcmStereoPairReconstruction
{
    public:
        ZcmService service;

        int32_t    count;

        std::vector< ZcmStereoPairPoint3D > points;

        ZcmCameraBaslerJpegFrame jpeg_frame;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmStereoPairReconstruction() {}

        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void* buf, uint32_t offset, uint32_t maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline uint32_t getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void* buf, uint32_t offset, uint32_t maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "ZcmStereoPairReconstruction"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmStereoPairReconstruction::encode(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = (int64_t)getHash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmStereoPairReconstruction::decode(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmStereoPairReconstruction::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmStereoPairReconstruction::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmStereoPairReconstruction::getTypeName()
{
    return "ZcmStereoPairReconstruction";
}

int ZcmStereoPairReconstruction::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    for (int a0 = 0; a0 < this->count; ++a0) {
        thislen = this->points[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    thislen = this->jpeg_frame._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmStereoPairReconstruction::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    this->points.resize(this->count);
    for (int a0 = 0; a0 < this->count; ++a0) {
        thislen = this->points[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    thislen = this->jpeg_frame._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmStereoPairReconstruction::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += this->service._getEncodedSizeNoHash();
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->count; ++a0) {
        enc_size += this->points[a0]._getEncodedSizeNoHash();
    }
    enc_size += this->jpeg_frame._getEncodedSizeNoHash();
    return enc_size;
}

uint64_t ZcmStereoPairReconstruction::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ZcmStereoPairReconstruction::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ZcmStereoPairReconstruction::getHash };

    uint64_t hash = (uint64_t)0x440ea1890c9d4121LL +
         ZcmService::_computeHash(&cp) +
         ZcmStereoPairPoint3D::_computeHash(&cp) +
         ZcmCameraBaslerJpegFrame::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif
