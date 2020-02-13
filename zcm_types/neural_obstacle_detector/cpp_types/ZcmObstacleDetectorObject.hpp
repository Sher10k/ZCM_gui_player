/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmObstacleDetectorObject_hpp__
#define __ZcmObstacleDetectorObject_hpp__

#include <string>
#include "ZcmObstacleDetectorPoint2D.hpp"


/**
 * @struct ZcmObstacleDetectorObject
 * @brief Сообщение содержит координаты объекта в системе координат лидара
 * @var ZcmObstacleDetectorObject::generalPoint
 * @brief - средняя точка нижней части bounding box'a
 * @var ZcmObstacleDetectorObject::obstacle_type
 * @brief - класс объекта: \n
 *                  1 - person \n
 *                  2 - traffic_light \n
 *                  3 - car \n
 * 					4 - railway_switch
 * @var ZcmObstacleDetectorObject::label
 * @brief - строка, характеризующая класс объекта
 * @var ZcmObstacleDetectorObject::probability
 * @brief - вероятностная характеристика принадлежности препятствия к опознанному классу, принимает значения от 0 до 1
 *
 */
class ZcmObstacleDetectorObject
{
    public:
        ZcmObstacleDetectorPoint2D generalPoint;

        int8_t     obstacle_type;

        std::string label;

        double     probability;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmObstacleDetectorObject() {}

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
         * Returns "ZcmObstacleDetectorObject"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmObstacleDetectorObject::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmObstacleDetectorObject::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmObstacleDetectorObject::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmObstacleDetectorObject::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmObstacleDetectorObject::getTypeName()
{
    return "ZcmObstacleDetectorObject";
}

int ZcmObstacleDetectorObject::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->generalPoint._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->obstacle_type, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    char* label_cstr = (char*) this->label.c_str();
    thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &label_cstr, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->probability, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmObstacleDetectorObject::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = this->generalPoint._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->obstacle_type, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    int32_t __label_len__;
    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__label_len__, 1);
    if(thislen < 0) return thislen; else pos += thislen;
    if((uint32_t)__label_len__ > maxlen - pos) return -1;
    this->label.assign(((const char*)buf) + offset + pos, __label_len__ - 1);
    pos += __label_len__;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->probability, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmObstacleDetectorObject::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += this->generalPoint._getEncodedSizeNoHash();
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += this->label.size() + 4 + 1;
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t ZcmObstacleDetectorObject::_computeHash(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == ZcmObstacleDetectorObject::getHash)
            return 0;
    const __zcm_hash_ptr cp = { p, (void*)ZcmObstacleDetectorObject::getHash };

    uint64_t hash = (uint64_t)0x7f032abf00541459LL +
         ZcmObstacleDetectorPoint2D::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

#endif