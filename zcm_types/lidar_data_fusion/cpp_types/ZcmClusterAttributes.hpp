/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmClusterAttributes_hpp__
#define __ZcmClusterAttributes_hpp__

#include <string>


/**
 * @struct ZcmClusterAttributes
 * @brief Сообщение содержит координаты объекта относительно лидара
 * @var ZcmClusterAttributes::obstacle_type
 * @brief - класс объекта:
 *                  OBSTACLE_TYPE_UNKNOWN
 *                  OBSTACLE_TYPE_HUMAN
 *                  OBSTACLE_TYPE_TRAFFIC_LIGHT
 *                  OBSTACLE_TYPE_CAR
 * @var ZcmClusterAttributes::label
 * @brief - строка, характеризующая класс объекта
 * @var ZcmClusterAttributes::probability
 * @brief - вероятностная характеристика принадлежности препятствия к опознанному классу, принимает значения от 0 до 1
 * @var ZcmClusterAttributes::zone
 * @brief - идентификатор зоны
 * @var ZcmClusterAttributes::distance
 * @brief - расстояние до препятствия, метр
 *
 */
class ZcmClusterAttributes
{
    public:
        int8_t     obstacle_type;

        int8_t     zone;

        std::string label;

        double     probability;

        double     distance;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmClusterAttributes() {}

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
         * Returns "ZcmClusterAttributes"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmClusterAttributes::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmClusterAttributes::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmClusterAttributes::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmClusterAttributes::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmClusterAttributes::getTypeName()
{
    return "ZcmClusterAttributes";
}

int ZcmClusterAttributes::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->obstacle_type, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->zone, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    char* label_cstr = (char*) this->label.c_str();
    thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &label_cstr, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->probability, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->distance, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmClusterAttributes::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->obstacle_type, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->zone, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    int32_t __label_len__;
    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__label_len__, 1);
    if(thislen < 0) return thislen; else pos += thislen;
    if((uint32_t)__label_len__ > maxlen - pos) return -1;
    this->label.assign(((const char*)buf) + offset + pos, __label_len__ - 1);
    pos += __label_len__;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->probability, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->distance, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmClusterAttributes::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += this->label.size() + 4 + 1;
    enc_size += __double_encoded_array_size(NULL, 1);
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t ZcmClusterAttributes::_computeHash(const __zcm_hash_ptr*)
{
    uint64_t hash = (uint64_t)0x5e937f69cd7db5f6LL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
