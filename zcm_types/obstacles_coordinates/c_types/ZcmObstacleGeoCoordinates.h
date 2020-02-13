// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmObstacleGeoCoordinates_h
#define _ZcmObstacleGeoCoordinates_h

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @struct ZcmObstacleGeoCoordinates
 * @brief Данные о координатах объектов обнаруженных лидаром в локальной системе
 * @var ZcmObstacleGeoCoordinates::lat (градусы)
 * @brief - широта
 * @var ZcmObstacleGeoCoordinates::lon (градусы)
 * @brief - долгота
 *
 */
typedef struct _ZcmObstacleGeoCoordinates ZcmObstacleGeoCoordinates;
struct _ZcmObstacleGeoCoordinates
{
    double     lat;
    double     lon;
};

/**
 * Create a deep copy of a ZcmObstacleGeoCoordinates.
 * When no longer needed, destroy it with ZcmObstacleGeoCoordinates_destroy()
 */
ZcmObstacleGeoCoordinates* ZcmObstacleGeoCoordinates_copy(const ZcmObstacleGeoCoordinates* to_copy);

/**
 * Destroy an instance of ZcmObstacleGeoCoordinates created by ZcmObstacleGeoCoordinates_copy()
 */
void ZcmObstacleGeoCoordinates_destroy(ZcmObstacleGeoCoordinates* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmObstacleGeoCoordinates_subscription_t ZcmObstacleGeoCoordinates_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmObstacleGeoCoordinates is received.
 */
typedef void(*ZcmObstacleGeoCoordinates_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmObstacleGeoCoordinates* msg, void* userdata);

/**
 * Publish a message of type ZcmObstacleGeoCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmObstacleGeoCoordinates_publish(zcm_t* zcm, const char* channel, const ZcmObstacleGeoCoordinates* msg);

/**
 * Subscribe to messages of type ZcmObstacleGeoCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmObstacleGeoCoordinates_unsubscribe.
 */
ZcmObstacleGeoCoordinates_subscription_t* ZcmObstacleGeoCoordinates_subscribe(zcm_t* zcm, const char* channel, ZcmObstacleGeoCoordinates_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmObstacleGeoCoordinates_subscribe()
 */
int ZcmObstacleGeoCoordinates_unsubscribe(zcm_t* zcm, ZcmObstacleGeoCoordinates_subscription_t* hid);
/**
 * Encode a message of type ZcmObstacleGeoCoordinates into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmObstacleGeoCoordinates_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmObstacleGeoCoordinates_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleGeoCoordinates* p);

/**
 * Decode a message of type ZcmObstacleGeoCoordinates from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmObstacleGeoCoordinates_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmObstacleGeoCoordinates_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleGeoCoordinates* msg);

/**
 * Release resources allocated by ZcmObstacleGeoCoordinates_decode()
 * @return 0
 */
int ZcmObstacleGeoCoordinates_decode_cleanup(ZcmObstacleGeoCoordinates* p);

/**
 * Check how many bytes are required to encode a message of type ZcmObstacleGeoCoordinates
 */
uint32_t ZcmObstacleGeoCoordinates_encoded_size(const ZcmObstacleGeoCoordinates* p);
uint32_t ZcmObstacleGeoCoordinates_struct_size(void);
uint32_t ZcmObstacleGeoCoordinates_num_fields(void);
int      ZcmObstacleGeoCoordinates_get_field(const ZcmObstacleGeoCoordinates* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmObstacleGeoCoordinates_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmObstacleGeoCoordinates_get_hash(void);
uint64_t __ZcmObstacleGeoCoordinates_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmObstacleGeoCoordinates_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleGeoCoordinates* p, uint32_t elements);
int      __ZcmObstacleGeoCoordinates_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleGeoCoordinates* p, uint32_t elements);
int      __ZcmObstacleGeoCoordinates_decode_array_cleanup(ZcmObstacleGeoCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleGeoCoordinates_encoded_array_size(const ZcmObstacleGeoCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleGeoCoordinates_clone_array(const ZcmObstacleGeoCoordinates* p, ZcmObstacleGeoCoordinates* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
