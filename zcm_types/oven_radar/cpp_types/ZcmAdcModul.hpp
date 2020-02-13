/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmAdcModul_hpp__
#define __ZcmAdcModul_hpp__

#include <vector>
#include "ZcmService.hpp"
#include "ZcmObjectValue.hpp"


/**
 * @struct ZcmAdcModul 
 * @brief - Значение АЦП
 * @struct ZcmAdcModul::service
 * @brief - Время последнего обновление измерения объекта
 *  
 * @var ZcmAdcModul::object_count
 * @brief - Количество котролируемых объектов(токовых петель)
 * @struct ZcmAdcModul::object
 * @brief - Значение объекта
 *
 */
class ZcmAdcModul
{
    public:
        ZcmService service;

        int8_t     object_count;

        std::vector< ZcmObjectValue > object;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmAdcModul() {}

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
         * Returns "ZcmAdcModul"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmAdcModul::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmAdcModul::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmAdcModul::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmAdcModul::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmAdcModul::getTypeName()
{
    return "ZcmAdcModul";
}

int ZcmAdcModul::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->object_count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    for (int a0 = 0; a0 < this->object_count; ++a0) {
        thislen = this->object[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    return pos;
}

int ZcmAdcModul::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->object_count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    this->object.resize(this->object_count);
    for (int a0 = 0; a0 < this->object_count; ++a0) {
        thislen = this->object[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    return pos;
}

uint32_t ZcmAdcModul::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += this->service._getEncodedSizeNoHash();
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->object_count; ++a0) {
        enc_size += this->object[a0]._getEncodedSizeNoHash();
    }
    return enc_size;
}

uint64_t ZcmAdcModul::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ZcmAdcModul::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ZcmAdcModul::getHash };

    uint64_t hash = (uint64_t)0x35f57d236cc8c5adLL +
         ZcmService::_computeHash(&cp) +
         ZcmObjectValue::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif
