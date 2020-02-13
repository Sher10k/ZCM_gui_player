// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmRadarContiObject_h
#define _ZcmRadarContiObject_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmRadarContiObjectGeneralInfo.h"
#include "ZcmRadarContiObjectQualityInfo.h"
#include "ZcmRadarContiObjectExtendedInfo.h"
typedef struct _ZcmRadarContiObject ZcmRadarContiObject;
struct _ZcmRadarContiObject
{
    int16_t    id;
    ZcmRadarContiObjectGeneralInfo general;
    ZcmRadarContiObjectQualityInfo quality;
    ZcmRadarContiObjectExtendedInfo extended;
};

/**
 * Create a deep copy of a ZcmRadarContiObject.
 * When no longer needed, destroy it with ZcmRadarContiObject_destroy()
 */
ZcmRadarContiObject* ZcmRadarContiObject_copy(const ZcmRadarContiObject* to_copy);

/**
 * Destroy an instance of ZcmRadarContiObject created by ZcmRadarContiObject_copy()
 */
void ZcmRadarContiObject_destroy(ZcmRadarContiObject* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmRadarContiObject_subscription_t ZcmRadarContiObject_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmRadarContiObject is received.
 */
typedef void(*ZcmRadarContiObject_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmRadarContiObject* msg, void* userdata);

/**
 * Publish a message of type ZcmRadarContiObject using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmRadarContiObject_publish(zcm_t* zcm, const char* channel, const ZcmRadarContiObject* msg);

/**
 * Subscribe to messages of type ZcmRadarContiObject using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmRadarContiObject_unsubscribe.
 */
ZcmRadarContiObject_subscription_t* ZcmRadarContiObject_subscribe(zcm_t* zcm, const char* channel, ZcmRadarContiObject_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmRadarContiObject_subscribe()
 */
int ZcmRadarContiObject_unsubscribe(zcm_t* zcm, ZcmRadarContiObject_subscription_t* hid);
/**
 * Encode a message of type ZcmRadarContiObject into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmRadarContiObject_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmRadarContiObject_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiObject* p);

/**
 * Decode a message of type ZcmRadarContiObject from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmRadarContiObject_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmRadarContiObject_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiObject* msg);

/**
 * Release resources allocated by ZcmRadarContiObject_decode()
 * @return 0
 */
int ZcmRadarContiObject_decode_cleanup(ZcmRadarContiObject* p);

/**
 * Check how many bytes are required to encode a message of type ZcmRadarContiObject
 */
uint32_t ZcmRadarContiObject_encoded_size(const ZcmRadarContiObject* p);
uint32_t ZcmRadarContiObject_struct_size(void);
uint32_t ZcmRadarContiObject_num_fields(void);
int      ZcmRadarContiObject_get_field(const ZcmRadarContiObject* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmRadarContiObject_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmRadarContiObject_get_hash(void);
uint64_t __ZcmRadarContiObject_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmRadarContiObject_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiObject* p, uint32_t elements);
int      __ZcmRadarContiObject_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiObject* p, uint32_t elements);
int      __ZcmRadarContiObject_decode_array_cleanup(ZcmRadarContiObject* p, uint32_t elements);
uint32_t __ZcmRadarContiObject_encoded_array_size(const ZcmRadarContiObject* p, uint32_t elements);
uint32_t __ZcmRadarContiObject_clone_array(const ZcmRadarContiObject* p, ZcmRadarContiObject* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
