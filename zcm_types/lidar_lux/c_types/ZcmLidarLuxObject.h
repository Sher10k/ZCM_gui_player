// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmLidarLuxObject_h
#define _ZcmLidarLuxObject_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
#include "ZcmLidarLux2DPoint.h"
/**
 * @struct ZcmLidarLuxObject
 * @brief Сообщение содержит информацию об объекте
 * @var ZcmLidarLuxObject::objectId
 * @brief - уникальный идентификатор объекта
 * @var ZcmLidarLuxObject::age
 * @brief - количество сканирований на протяжении которых данный объект отслеживается
 * @var ZcmLidarLuxObject::predictionAge
 * @brief - количество сканирований на протяжении которых данный объект был предсказан, \n
 *          без новых измерений данного объекта. Как только будет получено новое измерение \n
 *          значение predictionAge станет равно 0
 * @var ZcmLidarLuxObject::relativeTimestamp
 * @brief - время с момента начала измерения (мс)
 * @var ZcmLidarLuxObject::refPoint
 * @brief - базовая точка отслеживаемого объекта (м)
 * @var ZcmLidarLuxObject::refPointSigma
 * @brief - погрешность значений базовой точки (м)
 * @var ZcmLidarLuxObject::closestPoint
 * @brief - ближайшая точка объекта (м)
 * @var ZcmLidarLuxObject::boundingBoxCenter
 * @brief - 
 * @var ZcmLidarLuxObject::boundingBoxWidth
 * @brief - 
 * @var ZcmLidarLuxObject::boundingBoxLength
 * @brief - 
 * @var ZcmLidarLuxObject::objectBoxCenter
 * @brief - координата центра объекта (м)
 * @var ZcmLidarLuxObject::objectBoxSizeX
 * @brief - размер объекта по оси X (м)
 * @var ZcmLidarLuxObject::objectBoxSizeY
 * @brief - размер объекта по оси Y (м)
 * @var ZcmLidarLuxObject::objectBoxOrientation
 * @brief - угол поворота объекта (градусы)
 * @var ZcmLidarLuxObject::absVelocity
 * @brief - абсолютное значение скорости по X и Y (м/c)
 * @var ZcmLidarLuxObject::absVelSigmaX
 * @brief - погрешность абсолютного значения скорости по X (м/c)
 * @var ZcmLidarLuxObject::absVelSigmaY
 * @brief - погрешность абсолютного значения скорости по Y (м/c)
 * @var ZcmLidarLuxObject::relVelocity
 * @brief - относительная скорость по оси X и Y (м/с)
 * @var ZcmLidarLuxObject::objectClass
 * @brief - классификация объекта
 * 					0  - Unclassified   \n
 * 					1  - UnknownSmall   \n
 * 					2  - UnknownBig     \n
 * 					3  - Pedestrian    \n
 * 					4  - Bike           \n
 * 					5  - Car            \n
 * 					6  - Truck          \n
 * 					12 - Bicycle        \n
 * @var ZcmLidarLuxObject::classAge
 * @brief - количество сканирований на протяжении которых данный объект относится к этому классу
 * @var ZcmLidarLuxObject::classCertainty
 * @brief - чем выше данное значение, тем вероятнее объект относиться к определенному классу
 * @var ZcmLidarLuxObject::numContourPoints
 * @brief - количество точек контура объекта
 * @var ZcmLidarLuxObject::numContourPointsIsValid
 * @brief - true если numContourPoints содержит валидное значение
 * @var ZcmLidarLuxObject::contourPoints
 * @brief - точки контура объекта
 *
 */
typedef struct _ZcmLidarLuxObject ZcmLidarLuxObject;
struct _ZcmLidarLuxObject
{
    int64_t    objectId;
    int32_t    age;
    int32_t    predictionAge;
    int32_t    relativeTimestamp;
    ZcmLidarLux2DPoint refPoint;
    ZcmLidarLux2DPoint refPointSigma;
    ZcmLidarLux2DPoint closestPoint;
    ZcmLidarLux2DPoint boundingBoxCenter;
    int32_t    boundingBoxWidth;
    int32_t    boundingBoxLength;
    ZcmLidarLux2DPoint objectBoxCenter;
    int32_t    objectBoxSizeX;
    int32_t    objectBoxSizeY;
    int16_t    objectBoxOrientation;
    ZcmLidarLux2DPoint absVelocity;
    int32_t    absVelSigmaX;
    int32_t    absVelSigmaY;
    ZcmLidarLux2DPoint relVelocity;
    int8_t     objectClass;
    int32_t    classAge;
    int32_t    classCertainty;
    int32_t    numContourPoints;
    int8_t     numContourPointsIsValid;
    ZcmLidarLux2DPoint *contourPoints;
};

/**
 * Create a deep copy of a ZcmLidarLuxObject.
 * When no longer needed, destroy it with ZcmLidarLuxObject_destroy()
 */
ZcmLidarLuxObject* ZcmLidarLuxObject_copy(const ZcmLidarLuxObject* to_copy);

/**
 * Destroy an instance of ZcmLidarLuxObject created by ZcmLidarLuxObject_copy()
 */
void ZcmLidarLuxObject_destroy(ZcmLidarLuxObject* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmLidarLuxObject_subscription_t ZcmLidarLuxObject_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmLidarLuxObject is received.
 */
typedef void(*ZcmLidarLuxObject_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmLidarLuxObject* msg, void* userdata);

/**
 * Publish a message of type ZcmLidarLuxObject using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmLidarLuxObject_publish(zcm_t* zcm, const char* channel, const ZcmLidarLuxObject* msg);

/**
 * Subscribe to messages of type ZcmLidarLuxObject using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmLidarLuxObject_unsubscribe.
 */
ZcmLidarLuxObject_subscription_t* ZcmLidarLuxObject_subscribe(zcm_t* zcm, const char* channel, ZcmLidarLuxObject_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmLidarLuxObject_subscribe()
 */
int ZcmLidarLuxObject_unsubscribe(zcm_t* zcm, ZcmLidarLuxObject_subscription_t* hid);
/**
 * Encode a message of type ZcmLidarLuxObject into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmLidarLuxObject_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmLidarLuxObject_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarLuxObject* p);

/**
 * Decode a message of type ZcmLidarLuxObject from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmLidarLuxObject_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmLidarLuxObject_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarLuxObject* msg);

/**
 * Release resources allocated by ZcmLidarLuxObject_decode()
 * @return 0
 */
int ZcmLidarLuxObject_decode_cleanup(ZcmLidarLuxObject* p);

/**
 * Check how many bytes are required to encode a message of type ZcmLidarLuxObject
 */
uint32_t ZcmLidarLuxObject_encoded_size(const ZcmLidarLuxObject* p);
uint32_t ZcmLidarLuxObject_struct_size(void);
uint32_t ZcmLidarLuxObject_num_fields(void);
int      ZcmLidarLuxObject_get_field(const ZcmLidarLuxObject* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmLidarLuxObject_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmLidarLuxObject_get_hash(void);
uint64_t __ZcmLidarLuxObject_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmLidarLuxObject_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarLuxObject* p, uint32_t elements);
int      __ZcmLidarLuxObject_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarLuxObject* p, uint32_t elements);
int      __ZcmLidarLuxObject_decode_array_cleanup(ZcmLidarLuxObject* p, uint32_t elements);
uint32_t __ZcmLidarLuxObject_encoded_array_size(const ZcmLidarLuxObject* p, uint32_t elements);
uint32_t __ZcmLidarLuxObject_clone_array(const ZcmLidarLuxObject* p, ZcmLidarLuxObject* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif