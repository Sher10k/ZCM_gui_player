// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmLidarScalaUnfilteredObjectAttributes_h
#define _ZcmLidarScalaUnfilteredObjectAttributes_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmLidarScalaContourPoint.h"
/**
 * @struct ZcmLidarScalaUnfilteredObjectAttributes
 * @brief Сырые не отфильтрованные параметры
 * @var ZcmLidarScalaUnfilteredObjectAttributes::relativeTimeOfMeasure
 * @brief - время с момента начала измерения (мс)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::positionClosestObjectPointX
 * @brief - ближайшая точка объекта по оси X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::positionClosestObjectPointY
 * @brief - ближайшая точка объекта по оси Y (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeX
 * @brief - расстояние до объекта по оси X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeY
 * @brief - расстояние до объекта по оси Y (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeWidth
 * @brief - ширина объекта (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeLength
 * @brief - длина объекта (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeSigmaX
 * @brief - погрешность размера объекта по X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxSizeSigmaY
 * @brief - погрешность размера объекта по Y (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxOrientation
 * @brief - Угол поворота объекта (градусы)
 *  
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxOrientationSigma
 * @brief - Погрешность угла поворота объекта (градусы)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::objectBoxHeight
 * @brief - высота объекта (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointLocation 
 * @brief - расположение базовой точки объекта \n
 * 				0x0 - CenterOfGravity \n
 * 				0x1 - FrontLeft       \n 
 * 				0x2 - FrontRight      \n 
 * 				0x3 - RearRight       \n
 * 				0x4 - RearLeft        \n
 * 				0x5 - FrontCenter     \n
 * 				0x6 - RightCenter     \n
 * 				0x7 - RearCenter      \n
 * 				0x8 - LeftCenter      \n
 * 				0x9 - ObjectCenter    \n
 * 				0xff - Unknown         
 *  
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointCoordX
 * @brief - расстояние до базовой точки по оси X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointCoordY
 * @brief - расстояние до базовой точки по оси Y (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointCoordSigmaX
 * @brief - погрешность расстояния до базовой точки по оси X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointCoordSigmaY
 * @brief - погрешность Расстояние до базовой точки по оси X (м)
 * @var ZcmLidarScalaUnfilteredObjectAttributes::referencePointPositionCorrCoeff
 * @brief - ???
 * @var ZcmLidarScalaUnfilteredObjectAttributes::existenceProbaility
 * @brief - вероятность существования
 * @var ZcmLidarScalaUnfilteredObjectAttributes::possibleNbOfContourPoints
 * @brief - количество точек контура объекта
 * @var ZcmLidarScalaUnfilteredObjectAttributes::contourPoints
 * @brief - точки контура объекта
 *
 */
typedef struct _ZcmLidarScalaUnfilteredObjectAttributes ZcmLidarScalaUnfilteredObjectAttributes;
struct _ZcmLidarScalaUnfilteredObjectAttributes
{
    int32_t    relativeTimeOfMeasure;
    float      positionClosestObjectPointX;
    float      positionClosestObjectPointY;
    float      objectBoxSizeX;
    float      objectBoxSizeY;
    float      objectBoxSizeSigmaX;
    float      objectBoxSizeSigmaY;
    float      objectBoxOrientation;
    float      objectBoxOrientationSigma;
    float      objectBoxHeight;
    int16_t    referencePointLocation;
    float      referencePointCoordX;
    float      referencePointCoordY;
    float      referencePointCoordSigmaX;
    float      referencePointCoordSigmaY;
    int16_t    referencePointPositionCorrCoeff;
    float      existenceProbaility;
    int16_t    possibleNbOfContourPoints;
    ZcmLidarScalaContourPoint *contourPoints;
};

/**
 * Create a deep copy of a ZcmLidarScalaUnfilteredObjectAttributes.
 * When no longer needed, destroy it with ZcmLidarScalaUnfilteredObjectAttributes_destroy()
 */
ZcmLidarScalaUnfilteredObjectAttributes* ZcmLidarScalaUnfilteredObjectAttributes_copy(const ZcmLidarScalaUnfilteredObjectAttributes* to_copy);

/**
 * Destroy an instance of ZcmLidarScalaUnfilteredObjectAttributes created by ZcmLidarScalaUnfilteredObjectAttributes_copy()
 */
void ZcmLidarScalaUnfilteredObjectAttributes_destroy(ZcmLidarScalaUnfilteredObjectAttributes* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmLidarScalaUnfilteredObjectAttributes_subscription_t ZcmLidarScalaUnfilteredObjectAttributes_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmLidarScalaUnfilteredObjectAttributes is received.
 */
typedef void(*ZcmLidarScalaUnfilteredObjectAttributes_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmLidarScalaUnfilteredObjectAttributes* msg, void* userdata);

/**
 * Publish a message of type ZcmLidarScalaUnfilteredObjectAttributes using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmLidarScalaUnfilteredObjectAttributes_publish(zcm_t* zcm, const char* channel, const ZcmLidarScalaUnfilteredObjectAttributes* msg);

/**
 * Subscribe to messages of type ZcmLidarScalaUnfilteredObjectAttributes using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmLidarScalaUnfilteredObjectAttributes_unsubscribe.
 */
ZcmLidarScalaUnfilteredObjectAttributes_subscription_t* ZcmLidarScalaUnfilteredObjectAttributes_subscribe(zcm_t* zcm, const char* channel, ZcmLidarScalaUnfilteredObjectAttributes_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmLidarScalaUnfilteredObjectAttributes_subscribe()
 */
int ZcmLidarScalaUnfilteredObjectAttributes_unsubscribe(zcm_t* zcm, ZcmLidarScalaUnfilteredObjectAttributes_subscription_t* hid);
/**
 * Encode a message of type ZcmLidarScalaUnfilteredObjectAttributes into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmLidarScalaUnfilteredObjectAttributes_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmLidarScalaUnfilteredObjectAttributes_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaUnfilteredObjectAttributes* p);

/**
 * Decode a message of type ZcmLidarScalaUnfilteredObjectAttributes from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmLidarScalaUnfilteredObjectAttributes_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmLidarScalaUnfilteredObjectAttributes_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaUnfilteredObjectAttributes* msg);

/**
 * Release resources allocated by ZcmLidarScalaUnfilteredObjectAttributes_decode()
 * @return 0
 */
int ZcmLidarScalaUnfilteredObjectAttributes_decode_cleanup(ZcmLidarScalaUnfilteredObjectAttributes* p);

/**
 * Check how many bytes are required to encode a message of type ZcmLidarScalaUnfilteredObjectAttributes
 */
uint32_t ZcmLidarScalaUnfilteredObjectAttributes_encoded_size(const ZcmLidarScalaUnfilteredObjectAttributes* p);
uint32_t ZcmLidarScalaUnfilteredObjectAttributes_struct_size(void);
uint32_t ZcmLidarScalaUnfilteredObjectAttributes_num_fields(void);
int      ZcmLidarScalaUnfilteredObjectAttributes_get_field(const ZcmLidarScalaUnfilteredObjectAttributes* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmLidarScalaUnfilteredObjectAttributes_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmLidarScalaUnfilteredObjectAttributes_get_hash(void);
uint64_t __ZcmLidarScalaUnfilteredObjectAttributes_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmLidarScalaUnfilteredObjectAttributes_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaUnfilteredObjectAttributes* p, uint32_t elements);
int      __ZcmLidarScalaUnfilteredObjectAttributes_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaUnfilteredObjectAttributes* p, uint32_t elements);
int      __ZcmLidarScalaUnfilteredObjectAttributes_decode_array_cleanup(ZcmLidarScalaUnfilteredObjectAttributes* p, uint32_t elements);
uint32_t __ZcmLidarScalaUnfilteredObjectAttributes_encoded_array_size(const ZcmLidarScalaUnfilteredObjectAttributes* p, uint32_t elements);
uint32_t __ZcmLidarScalaUnfilteredObjectAttributes_clone_array(const ZcmLidarScalaUnfilteredObjectAttributes* p, ZcmLidarScalaUnfilteredObjectAttributes* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
