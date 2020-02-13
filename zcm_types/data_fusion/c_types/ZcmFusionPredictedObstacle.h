// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmFusionPredictedObstacle_h
#define _ZcmFusionPredictedObstacle_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmFusionZonePredictedObstacle.h"
#define ZCMFUSIONPREDICTEDOBSTACLE_ZONE_RED 1
#define ZCMFUSIONPREDICTEDOBSTACLE_ZONE_YELLOW 2
#define ZCMFUSIONPREDICTEDOBSTACLE_ZONE_BROWN 3
#define ZCMFUSIONPREDICTEDOBSTACLE_OBSTACLE_TYPE_UNKNOWN 0
#define ZCMFUSIONPREDICTEDOBSTACLE_OBSTACLE_TYPE_HUMAN 1
#define ZCMFUSIONPREDICTEDOBSTACLE_OBSTACLE_TYPE_TRAFFIC_LIGHT 2
#define ZCMFUSIONPREDICTEDOBSTACLE_OBSTACLE_TYPE_CAR 3

/**
 * @struct ZcmFusionPredictedObstacle
 * @brief Препятствия во всех зонах контроля
 * @var ZcmFusionPredictedObstacle::service
 * @brief - служебное сообщение
 * @var ZcmFusionPredictedObstacle::ZONE_RED
 * @brief - идентификатор "красной" зоны (габарит подвижного состава)
 * @var ZcmFusionPredictedObstacle::ZONE_YELLOW
 * @brief - идентификатор "желтой" зоны (зона повышенного внимания со снижением скорости)
 * @var ZcmFusionPredictedObstacle::ZONE_BROWN
 * @brief - идентификатор "коричневой" зоны (зона отслеживания объектов)
 * @var ZcmFusionPredictedObstacle::OBSTACLE_TYPE_UNKNOWN
 * @brief - класс объекта - неизвестный
 * @var ZcmFusionPredictedObstacle::OBSTACLE_TYPE_HUMAN
 * @brief - класс объекта - человек
 * @var ZcmFusionPredictedObstacle::OBSTACLE_TYPE_TRAFFIC_LIGHT
 * @brief - класс объекта - светофор
 * @var ZcmFusionPredictedObstacle::OBSTACLE_TYPE_CAR
 * @brief - класс объекта - вагон
 * @var ZcmFusionPredictedObstacle::obstacles_count
 * @brief - количество препятствий
 * @var ZcmFusionPredictedObstacle::obstacles
 * @brief - препятствия
 *
 */
typedef struct _ZcmFusionPredictedObstacle ZcmFusionPredictedObstacle;
struct _ZcmFusionPredictedObstacle
{
    ZcmService service;
    int8_t     obstacles_count;
    ZcmFusionZonePredictedObstacle *obstacles;
};

/**
 * Create a deep copy of a ZcmFusionPredictedObstacle.
 * When no longer needed, destroy it with ZcmFusionPredictedObstacle_destroy()
 */
ZcmFusionPredictedObstacle* ZcmFusionPredictedObstacle_copy(const ZcmFusionPredictedObstacle* to_copy);

/**
 * Destroy an instance of ZcmFusionPredictedObstacle created by ZcmFusionPredictedObstacle_copy()
 */
void ZcmFusionPredictedObstacle_destroy(ZcmFusionPredictedObstacle* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmFusionPredictedObstacle_subscription_t ZcmFusionPredictedObstacle_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmFusionPredictedObstacle is received.
 */
typedef void(*ZcmFusionPredictedObstacle_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmFusionPredictedObstacle* msg, void* userdata);

/**
 * Publish a message of type ZcmFusionPredictedObstacle using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmFusionPredictedObstacle_publish(zcm_t* zcm, const char* channel, const ZcmFusionPredictedObstacle* msg);

/**
 * Subscribe to messages of type ZcmFusionPredictedObstacle using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmFusionPredictedObstacle_unsubscribe.
 */
ZcmFusionPredictedObstacle_subscription_t* ZcmFusionPredictedObstacle_subscribe(zcm_t* zcm, const char* channel, ZcmFusionPredictedObstacle_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmFusionPredictedObstacle_subscribe()
 */
int ZcmFusionPredictedObstacle_unsubscribe(zcm_t* zcm, ZcmFusionPredictedObstacle_subscription_t* hid);
/**
 * Encode a message of type ZcmFusionPredictedObstacle into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmFusionPredictedObstacle_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmFusionPredictedObstacle_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionPredictedObstacle* p);

/**
 * Decode a message of type ZcmFusionPredictedObstacle from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmFusionPredictedObstacle_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmFusionPredictedObstacle_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionPredictedObstacle* msg);

/**
 * Release resources allocated by ZcmFusionPredictedObstacle_decode()
 * @return 0
 */
int ZcmFusionPredictedObstacle_decode_cleanup(ZcmFusionPredictedObstacle* p);

/**
 * Check how many bytes are required to encode a message of type ZcmFusionPredictedObstacle
 */
uint32_t ZcmFusionPredictedObstacle_encoded_size(const ZcmFusionPredictedObstacle* p);
uint32_t ZcmFusionPredictedObstacle_struct_size(void);
uint32_t ZcmFusionPredictedObstacle_num_fields(void);
int      ZcmFusionPredictedObstacle_get_field(const ZcmFusionPredictedObstacle* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmFusionPredictedObstacle_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmFusionPredictedObstacle_get_hash(void);
uint64_t __ZcmFusionPredictedObstacle_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmFusionPredictedObstacle_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionPredictedObstacle* p, uint32_t elements);
int      __ZcmFusionPredictedObstacle_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionPredictedObstacle* p, uint32_t elements);
int      __ZcmFusionPredictedObstacle_decode_array_cleanup(ZcmFusionPredictedObstacle* p, uint32_t elements);
uint32_t __ZcmFusionPredictedObstacle_encoded_array_size(const ZcmFusionPredictedObstacle* p, uint32_t elements);
uint32_t __ZcmFusionPredictedObstacle_clone_array(const ZcmFusionPredictedObstacle* p, ZcmFusionPredictedObstacle* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif