// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmObstacleCoordinates_h
#define _ZcmObstacleCoordinates_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmObstacle.h"
/**
 * @struct ZcmObstacleCoordinates
 * @brief Данные о координатах объектов обнаруженных лидаром
 * @var ZcmObstacleCoordinates::objectsCount
 * @brief - кол-во объектов
 * @var ZcmObstacleCoordinates::objects
 * @brief - список объектов
 *
 */
typedef struct _ZcmObstacleCoordinates ZcmObstacleCoordinates;
struct _ZcmObstacleCoordinates
{
    ZcmService service;
    int32_t    objects_count;
    ZcmObstacle *objects;
};

/**
 * Create a deep copy of a ZcmObstacleCoordinates.
 * When no longer needed, destroy it with ZcmObstacleCoordinates_destroy()
 */
ZcmObstacleCoordinates* ZcmObstacleCoordinates_copy(const ZcmObstacleCoordinates* to_copy);

/**
 * Destroy an instance of ZcmObstacleCoordinates created by ZcmObstacleCoordinates_copy()
 */
void ZcmObstacleCoordinates_destroy(ZcmObstacleCoordinates* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmObstacleCoordinates_subscription_t ZcmObstacleCoordinates_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmObstacleCoordinates is received.
 */
typedef void(*ZcmObstacleCoordinates_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmObstacleCoordinates* msg, void* userdata);

/**
 * Publish a message of type ZcmObstacleCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmObstacleCoordinates_publish(zcm_t* zcm, const char* channel, const ZcmObstacleCoordinates* msg);

/**
 * Subscribe to messages of type ZcmObstacleCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmObstacleCoordinates_unsubscribe.
 */
ZcmObstacleCoordinates_subscription_t* ZcmObstacleCoordinates_subscribe(zcm_t* zcm, const char* channel, ZcmObstacleCoordinates_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmObstacleCoordinates_subscribe()
 */
int ZcmObstacleCoordinates_unsubscribe(zcm_t* zcm, ZcmObstacleCoordinates_subscription_t* hid);
/**
 * Encode a message of type ZcmObstacleCoordinates into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmObstacleCoordinates_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmObstacleCoordinates_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleCoordinates* p);

/**
 * Decode a message of type ZcmObstacleCoordinates from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmObstacleCoordinates_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmObstacleCoordinates_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleCoordinates* msg);

/**
 * Release resources allocated by ZcmObstacleCoordinates_decode()
 * @return 0
 */
int ZcmObstacleCoordinates_decode_cleanup(ZcmObstacleCoordinates* p);

/**
 * Check how many bytes are required to encode a message of type ZcmObstacleCoordinates
 */
uint32_t ZcmObstacleCoordinates_encoded_size(const ZcmObstacleCoordinates* p);
uint32_t ZcmObstacleCoordinates_struct_size(void);
uint32_t ZcmObstacleCoordinates_num_fields(void);
int      ZcmObstacleCoordinates_get_field(const ZcmObstacleCoordinates* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmObstacleCoordinates_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmObstacleCoordinates_get_hash(void);
uint64_t __ZcmObstacleCoordinates_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmObstacleCoordinates_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleCoordinates* p, uint32_t elements);
int      __ZcmObstacleCoordinates_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleCoordinates* p, uint32_t elements);
int      __ZcmObstacleCoordinates_decode_array_cleanup(ZcmObstacleCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleCoordinates_encoded_array_size(const ZcmObstacleCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleCoordinates_clone_array(const ZcmObstacleCoordinates* p, ZcmObstacleCoordinates* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif