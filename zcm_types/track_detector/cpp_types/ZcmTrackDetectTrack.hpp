/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmTrackDetectTrack_hpp__
#define __ZcmTrackDetectTrack_hpp__

#include <vector>
#include "ZcmTrackDetectTrackPoint.hpp"


/**
 * @struct ZcmTrackDetectTrack
 * @brief Информация о пути с оценкой точности соответствия линии найденным точкам.
 * @var ZcmTrackDetectTrack::point_count  
 * @brief - число точек, описывающих кривую пути
 * @var ZcmTrackDetectTrack::quality  
 * @brief - качественная оценка соответствия линии, описывающей кривую пути, найденным точкам на изображении (м)
 * @var ZcmTrackDetectTrack::coefficients
 * @brief - коэффициенты линии, описывающей траекторию движения
 * Если линия не обнаружена, значениям коэффициентов присваивается NAN
 * Модель линии определена формулой \f$f(x) = a_2x^2 + a_1x + a_0\f$
 *
 */
class ZcmTrackDetectTrack
{
    public:
        int16_t    point_count;

        std::vector< ZcmTrackDetectTrackPoint > point;

        float      quality;

        double     coefficients[3];

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmTrackDetectTrack() {}

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
         * Returns "ZcmTrackDetectTrack"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmTrackDetectTrack::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmTrackDetectTrack::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmTrackDetectTrack::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmTrackDetectTrack::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmTrackDetectTrack::getTypeName()
{
    return "ZcmTrackDetectTrack";
}

int ZcmTrackDetectTrack::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->point_count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    for (int a0 = 0; a0 < this->point_count; ++a0) {
        thislen = this->point[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->quality, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->coefficients[0], 3);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmTrackDetectTrack::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->point_count, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    this->point.resize(this->point_count);
    for (int a0 = 0; a0 < this->point_count; ++a0) {
        thislen = this->point[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(thislen < 0) return thislen; else pos += thislen;
    }

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->quality, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->coefficients[0], 3);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmTrackDetectTrack::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->point_count; ++a0) {
        enc_size += this->point[a0]._getEncodedSizeNoHash();
    }
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 3);
    return enc_size;
}

uint64_t ZcmTrackDetectTrack::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ZcmTrackDetectTrack::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ZcmTrackDetectTrack::getHash };

    uint64_t hash = (uint64_t)0xa27be5e1729c31e1LL +
         ZcmTrackDetectTrackPoint::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif
