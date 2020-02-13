/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmNavFilter_hpp__
#define __ZcmNavFilter_hpp__

#include "ZcmService.hpp"
#include "ZcmUtmCoord.hpp"
#include "ZcmGeographicCoord.hpp"
#include "ZcmVelocityVector.hpp"


/**
 * @struct ZcmNavFilter
 * @brief Отфильтрованные данные от навигатора
 * @var ZcmNavFilter::utmCoordinates
 * @brief - координаты в UTM
 * @var ZcmNavFilter::geographicCoordinates
 * @brief - географические координаты
 * @var ZcmNavFilter::velocityVector
 * @brief - вектор скорости
 * @var ZcmNavFilter::speed (м/с)
 * @brief - скорость.
 *          
 * @var ZcmNavFilter::azimuth_calculated (градусы)
 * @brief - азимут вычесленный.
 *          
 * @var ZcmNavFilter::azimuth_measured (градусы)
 * @brief - азимут измеренный.
 *          
 * @var ZcmNavFilter::x         
 * @brief - координата X (метры).
 *          
 * @var ZcmNavFilter::y         
 * @brief - координата Y (метры).
 *          
 * @var ZcmNavFilter::z
 * @brief - координата Z (метры).
 *
 */
class ZcmNavFilter
{
    public:
        ZcmService service;

        ZcmUtmCoord utm_coordinates;

        ZcmGeographicCoord geographic_coordinates;

        ZcmVelocityVector velocity_vector;

        double     speed;

        double     azimuth_calculated;

        double     azimuth_measured;

        double     x;

        double     y;

        double     z;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmNavFilter() {}

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
         * Returns "ZcmNavFilter"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmNavFilter::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmNavFilter::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmNavFilter::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmNavFilter::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmNavFilter::getTypeName()
{
    return "ZcmNavFilter";
}

int ZcmNavFilter::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->utm_coordinates._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->geographic_coordinates._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->velocity_vector._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->speed, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->azimuth_calculated, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->azimuth_measured, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmNavFilter::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->service._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->utm_coordinates._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->geographic_coordinates._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = this->velocity_vector._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->speed, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->azimuth_calculated, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->azimuth_measured, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmNavFilter::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += this->service._getEncodedSizeNoHash();
    enc_size += this->utm_coordinates._getEncodedSizeNoHash();
    enc_size += this->geographic_coordinates._getEncodedSizeNoHash();
    enc_size += this->velocity_vector._getEncodedSizeNoHash();
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t ZcmNavFilter::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ZcmNavFilter::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ZcmNavFilter::getHash };

    uint64_t hash = (uint64_t)0x951f76484d783810LL +
         ZcmService::_computeHash(&cp) +
         ZcmUtmCoord::_computeHash(&cp) +
         ZcmGeographicCoord::_computeHash(&cp) +
         ZcmVelocityVector::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif
