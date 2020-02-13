/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmLidarVuPoint_hpp__
#define __ZcmLidarVuPoint_hpp__



/**
 * @mainpage Сообщения от Lidar Vu
 * Данный документ содержит описание сообщений для работы
 * с лидаром Lidar Vu8.
 *
 * @struct ZcmLidarVuPoint
 * @brief Содержит информацию о точке(объекте) обнаруженном устройством.
 * @var ZcmLidarVuPoint::channel        
 * @brief - номер канала (от 0 до 7)
 * @var ZcmLidarVuPoint::x  
 * @brief - координата по оси X (м) 
 * @var ZcmLidarVuPoint::y
 * @brief - координата по оси Y (м) 
 * @var ZcmLidarVuPoint::z
 * @brief - высота установки (м) 
 * @var ZcmLidarVuPoint::amplitude
 * @brief - характеристика. Чем больше тем сильнее отраженный сигнал
 * @var ZcmLidarVuPoint::flag_info
 * @brief - Информация о измерении: \n
 *                  0 - The detection is valid \n
 *                  1 - The detection is the result of object demerging \n
 *                  2 - The detection is saturated. \n 
 *                  
 *
 */
class ZcmLidarVuPoint
{
    public:
        int8_t     channel;

        float      x;

        float      y;

        float      z;

        float      amplitude;

        int8_t     flag_info;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmLidarVuPoint() {}

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
         * Returns "ZcmLidarVuPoint"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmLidarVuPoint::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmLidarVuPoint::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmLidarVuPoint::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmLidarVuPoint::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmLidarVuPoint::getTypeName()
{
    return "ZcmLidarVuPoint";
}

int ZcmLidarVuPoint::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->channel, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->amplitude, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->flag_info, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmLidarVuPoint::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->channel, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->amplitude, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->flag_info, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmLidarVuPoint::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t ZcmLidarVuPoint::_computeHash(const __zcm_hash_ptr*)
{
    uint64_t hash = (uint64_t)0xd58291ae7847d379LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif