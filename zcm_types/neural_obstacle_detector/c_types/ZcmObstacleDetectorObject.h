// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmObstacleDetectorObject_h
#define _ZcmObstacleDetectorObject_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmObstacleDetectorPoint2D.h"
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
typedef struct _ZcmObstacleDetectorObject ZcmObstacleDetectorObject;
struct _ZcmObstacleDetectorObject
{
    ZcmObstacleDetectorPoint2D generalPoint;
    int8_t     obstacle_type;
    char*      label;
    double     probability;
};

/**
 * Create a deep copy of a ZcmObstacleDetectorObject.
 * When no longer needed, destroy it with ZcmObstacleDetectorObject_destroy()
 */
ZcmObstacleDetectorObject* ZcmObstacleDetectorObject_copy(const ZcmObstacleDetectorObject* to_copy);

/**
 * Destroy an instance of ZcmObstacleDetectorObject created by ZcmObstacleDetectorObject_copy()
 */
void ZcmObstacleDetectorObject_destroy(ZcmObstacleDetectorObject* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmObstacleDetectorObject_subscription_t ZcmObstacleDetectorObject_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmObstacleDetectorObject is received.
 */
typedef void(*ZcmObstacleDetectorObject_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmObstacleDetectorObject* msg, void* userdata);

/**
 * Publish a message of type ZcmObstacleDetectorObject using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmObstacleDetectorObject_publish(zcm_t* zcm, const char* channel, const ZcmObstacleDetectorObject* msg);

/**
 * Subscribe to messages of type ZcmObstacleDetectorObject using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmObstacleDetectorObject_unsubscribe.
 */
ZcmObstacleDetectorObject_subscription_t* ZcmObstacleDetectorObject_subscribe(zcm_t* zcm, const char* channel, ZcmObstacleDetectorObject_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmObstacleDetectorObject_subscribe()
 */
int ZcmObstacleDetectorObject_unsubscribe(zcm_t* zcm, ZcmObstacleDetectorObject_subscription_t* hid);
/**
 * Encode a message of type ZcmObstacleDetectorObject into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmObstacleDetectorObject_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmObstacleDetectorObject_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleDetectorObject* p);

/**
 * Decode a message of type ZcmObstacleDetectorObject from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmObstacleDetectorObject_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmObstacleDetectorObject_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleDetectorObject* msg);

/**
 * Release resources allocated by ZcmObstacleDetectorObject_decode()
 * @return 0
 */
int ZcmObstacleDetectorObject_decode_cleanup(ZcmObstacleDetectorObject* p);

/**
 * Check how many bytes are required to encode a message of type ZcmObstacleDetectorObject
 */
uint32_t ZcmObstacleDetectorObject_encoded_size(const ZcmObstacleDetectorObject* p);
uint32_t ZcmObstacleDetectorObject_struct_size(void);
uint32_t ZcmObstacleDetectorObject_num_fields(void);
int      ZcmObstacleDetectorObject_get_field(const ZcmObstacleDetectorObject* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmObstacleDetectorObject_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmObstacleDetectorObject_get_hash(void);
uint64_t __ZcmObstacleDetectorObject_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmObstacleDetectorObject_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleDetectorObject* p, uint32_t elements);
int      __ZcmObstacleDetectorObject_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleDetectorObject* p, uint32_t elements);
int      __ZcmObstacleDetectorObject_decode_array_cleanup(ZcmObstacleDetectorObject* p, uint32_t elements);
uint32_t __ZcmObstacleDetectorObject_encoded_array_size(const ZcmObstacleDetectorObject* p, uint32_t elements);
uint32_t __ZcmObstacleDetectorObject_clone_array(const ZcmObstacleDetectorObject* p, ZcmObstacleDetectorObject* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
