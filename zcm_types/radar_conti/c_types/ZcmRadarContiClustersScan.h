// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmRadarContiClustersScan_h
#define _ZcmRadarContiClustersScan_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmRadarContiCluster.h"
/**
 * @struct ZcmRadarContiClustersScan
 * @brief Все сообщения полученные за одно сканирование в режиме кластеров
 *
 */
typedef struct _ZcmRadarContiClustersScan ZcmRadarContiClustersScan;
struct _ZcmRadarContiClustersScan
{
    ZcmService service;
    int16_t    scan_size;
    ZcmRadarContiCluster *clusters;
};

/**
 * Create a deep copy of a ZcmRadarContiClustersScan.
 * When no longer needed, destroy it with ZcmRadarContiClustersScan_destroy()
 */
ZcmRadarContiClustersScan* ZcmRadarContiClustersScan_copy(const ZcmRadarContiClustersScan* to_copy);

/**
 * Destroy an instance of ZcmRadarContiClustersScan created by ZcmRadarContiClustersScan_copy()
 */
void ZcmRadarContiClustersScan_destroy(ZcmRadarContiClustersScan* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmRadarContiClustersScan_subscription_t ZcmRadarContiClustersScan_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmRadarContiClustersScan is received.
 */
typedef void(*ZcmRadarContiClustersScan_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmRadarContiClustersScan* msg, void* userdata);

/**
 * Publish a message of type ZcmRadarContiClustersScan using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmRadarContiClustersScan_publish(zcm_t* zcm, const char* channel, const ZcmRadarContiClustersScan* msg);

/**
 * Subscribe to messages of type ZcmRadarContiClustersScan using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmRadarContiClustersScan_unsubscribe.
 */
ZcmRadarContiClustersScan_subscription_t* ZcmRadarContiClustersScan_subscribe(zcm_t* zcm, const char* channel, ZcmRadarContiClustersScan_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmRadarContiClustersScan_subscribe()
 */
int ZcmRadarContiClustersScan_unsubscribe(zcm_t* zcm, ZcmRadarContiClustersScan_subscription_t* hid);
/**
 * Encode a message of type ZcmRadarContiClustersScan into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmRadarContiClustersScan_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmRadarContiClustersScan_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiClustersScan* p);

/**
 * Decode a message of type ZcmRadarContiClustersScan from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmRadarContiClustersScan_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmRadarContiClustersScan_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiClustersScan* msg);

/**
 * Release resources allocated by ZcmRadarContiClustersScan_decode()
 * @return 0
 */
int ZcmRadarContiClustersScan_decode_cleanup(ZcmRadarContiClustersScan* p);

/**
 * Check how many bytes are required to encode a message of type ZcmRadarContiClustersScan
 */
uint32_t ZcmRadarContiClustersScan_encoded_size(const ZcmRadarContiClustersScan* p);
uint32_t ZcmRadarContiClustersScan_struct_size(void);
uint32_t ZcmRadarContiClustersScan_num_fields(void);
int      ZcmRadarContiClustersScan_get_field(const ZcmRadarContiClustersScan* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmRadarContiClustersScan_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmRadarContiClustersScan_get_hash(void);
uint64_t __ZcmRadarContiClustersScan_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmRadarContiClustersScan_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRadarContiClustersScan* p, uint32_t elements);
int      __ZcmRadarContiClustersScan_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRadarContiClustersScan* p, uint32_t elements);
int      __ZcmRadarContiClustersScan_decode_array_cleanup(ZcmRadarContiClustersScan* p, uint32_t elements);
uint32_t __ZcmRadarContiClustersScan_encoded_array_size(const ZcmRadarContiClustersScan* p, uint32_t elements);
uint32_t __ZcmRadarContiClustersScan_clone_array(const ZcmRadarContiClustersScan* p, ZcmRadarContiClustersScan* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
