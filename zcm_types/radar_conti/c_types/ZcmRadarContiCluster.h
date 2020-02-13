// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmRadarContiCluster_h
#define _ZcmRadarContiCluster_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmRadarContiClusterGeneral.h"
#include "ZcmRadarContiClusterQualityInfo.h"
typedef struct _ZcmRadarContiCluster ZcmRadarContiCluster;
struct _ZcmRadarContiCluster
{
    int16_t    id;
    ZcmRadarContiClusterGeneral general;
    ZcmRadarContiClusterQualityInfo quality;
};

/**
 * Create a deep copy of a ZcmRadarContiCluster.
 * When no longer needed, destroy it with ZcmRadarContiCluster_destroy()
 */
ZcmRadarContiCluster* ZcmRadarContiCluster_copy(const ZcmRadarContiCluster* to_copy);

/**
 * Destroy an instance of ZcmRadarContiCluster created by ZcmRadarContiCluster_copy()
 */
void ZcmRadarContiCluster_destroy(ZcmRadarContiCluster* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmRadarContiCluster_subscription_t ZcmRadarContiCluster_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmRadarContiCluster is received.
 */
typedef void(*ZcmRadarContiCluster_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmRadarContiCluster* msg, void* userdata);

/**
 * Publish a message of type ZcmRadarContiCluster using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmRadarContiCluster_publish(zcm_t* zcm, const char* channel, const ZcmRadarContiCluster* msg);

/**
 * Subscribe to messages of type ZcmRadarContiCluster using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmRadarContiCluster_unsubscribe.
 */
ZcmRadarContiCluster_subscription_t* ZcmRadarContiCluster_subscribe(zcm_t* zcm, const char* channel, ZcmRadarContiCluster_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmRadarContiCluster_subscribe()
 */
int ZcmRadarContiCluster_unsubscribe(zcm_t* zcm, ZcmRadarContiCluster_subscription_t* hid);
/**
 * Encode a message of type ZcmRadarContiCluster into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmRadarContiCluster_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmRadarContiCluster_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiCluster* p);

/**
 * Decode a message of type ZcmRadarContiCluster from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmRadarContiCluster_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmRadarContiCluster_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiCluster* msg);

/**
 * Release resources allocated by ZcmRadarContiCluster_decode()
 * @return 0
 */
int ZcmRadarContiCluster_decode_cleanup(ZcmRadarContiCluster* p);

/**
 * Check how many bytes are required to encode a message of type ZcmRadarContiCluster
 */
uint32_t ZcmRadarContiCluster_encoded_size(const ZcmRadarContiCluster* p);
uint32_t ZcmRadarContiCluster_struct_size(void);
uint32_t ZcmRadarContiCluster_num_fields(void);
int      ZcmRadarContiCluster_get_field(const ZcmRadarContiCluster* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmRadarContiCluster_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmRadarContiCluster_get_hash(void);
uint64_t __ZcmRadarContiCluster_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmRadarContiCluster_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiCluster* p, uint32_t elements);
int      __ZcmRadarContiCluster_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiCluster* p, uint32_t elements);
int      __ZcmRadarContiCluster_decode_array_cleanup(ZcmRadarContiCluster* p, uint32_t elements);
uint32_t __ZcmRadarContiCluster_encoded_array_size(const ZcmRadarContiCluster* p, uint32_t elements);
uint32_t __ZcmRadarContiCluster_clone_array(const ZcmRadarContiCluster* p, ZcmRadarContiCluster* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
