/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by zcm-gen
 **/

#include <zcm/zcm_coretypes.h>

#ifndef __ZcmLidarLuxPoint_hpp__
#define __ZcmLidarLuxPoint_hpp__



/**
 * @mainpage Сообщения от лидара Lux
 * Данный документ содержит описание сообщений для работы
 * с лидаром Ibeo Lux.
 *
 * @struct ZcmLidarLuxPoint
 * @brief Сообщение содержит информацию о всех точках полученных за одно сканирование
 * @var ZcmLidarLuxPoint::echoId
 * @brief - номер переотражения данной точки. От 0 до 2
 * @var ZcmLidarLuxPoint::layerId
 * @brief - номер сканирующего луча. О - 3
 * @var ZcmLidarLuxPoint::flags
 * @brief - тип точки: \n
 * 				0x1 - transparent \n
 * 				0x2 - осадки\n
 * 				0x4 - земля\n
 * 				0x8 - грязь\n
 * @var ZcmLidarLuxPoint::horizontalAngle
 * @brief - значение угла в полярной системе координат (тики). \n
 * 			Тик = ZcmLidarLuxDataScan::anglePerTick градусов 
 * 		 
 * @var ZcmLidarLuxPoint::radialDistance
 * @brief - значение расстояния в полярной системе координат (м)
 * @var ZcmLidarLuxPoint::x
 * @brief - расстояние до точки по оси Х в декартовой системе координат (м)
 * @var ZcmLidarLuxPoint::y
 * @brief - расстояние до точки по оси Y в декартовой системе координат (м)
 * @var ZcmLidarLuxPoint::z
 * @brief - расстояние до точки по оси Z в декартовой системе координат (м)
 * @var ZcmLidarLuxPoint::echoPulseWidth
 * @brief - ширина импульса переотражения (м)
 *
 */
class ZcmLidarLuxPoint
{
    public:
        int16_t    echoId;

        int16_t    layerId;

        int32_t    flags;

        int32_t    horizontalAngle;

        float      radialDistance;

        float      x;

        float      y;

        float      z;

        float      echoPulseWidth;

    public:
        /**
         * Destructs a message properly if anything inherits from it
        */
        virtual ~ZcmLidarLuxPoint() {}

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
         * Returns "ZcmLidarLuxPoint"
         */
        inline static const char* getTypeName();

        // ZCM support functions. Users should not call these
        inline int      _encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const;
        inline uint32_t _getEncodedSizeNoHash() const;
        inline int      _decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen);
        inline static uint64_t _computeHash(const __zcm_hash_ptr* p);
};

int ZcmLidarLuxPoint::encode(void* buf, uint32_t offset, uint32_t maxlen) const
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

int ZcmLidarLuxPoint::decode(const void* buf, uint32_t offset, uint32_t maxlen)
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

uint32_t ZcmLidarLuxPoint::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t ZcmLidarLuxPoint::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* ZcmLidarLuxPoint::getTypeName()
{
    return "ZcmLidarLuxPoint";
}

int ZcmLidarLuxPoint::_encodeNoHash(void* buf, uint32_t offset, uint32_t maxlen) const
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->echoId, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &this->layerId, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->flags, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->horizontalAngle, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->radialDistance, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &this->echoPulseWidth, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmLidarLuxPoint::_decodeNoHash(const void* buf, uint32_t offset, uint32_t maxlen)
{
    uint32_t pos = 0;
    int thislen;

    thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->echoId, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &this->layerId, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->flags, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->horizontalAngle, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->radialDistance, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->x, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->y, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->z, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &this->echoPulseWidth, 1);
    if(thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t ZcmLidarLuxPoint::_getEncodedSizeNoHash() const
{
    uint32_t enc_size = 0;
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    enc_size += __int16_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    enc_size += __float_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t ZcmLidarLuxPoint::_computeHash(const __zcm_hash_ptr*)
{
    uint64_t hash = (uint64_t)0x493f18b3d477330cLL;
    return (hash<<1) + ((hash>>63)&1);
}

#endif
