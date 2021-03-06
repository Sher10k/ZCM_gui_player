// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmLidarVuScan_h
#define _ZcmLidarVuScan_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmLidarVuPoint.h"
/**
 * @struct ZcmLidarVuScan
 * @brief Все сообщения полученные на одно сканирование
 *
 */
typedef struct _ZcmLidarVuScan ZcmLidarVuScan;
struct _ZcmLidarVuScan
{
    ZcmService service;
    int16_t    scan_size;
    ZcmLidarVuPoint *points;
};

/**
 * Create a deep copy of a ZcmLidarVuScan.
 * When no longer needed, destroy it with ZcmLidarVuScan_destroy()
 */
ZcmLidarVuScan* ZcmLidarVuScan_copy(const ZcmLidarVuScan* to_copy);

/**
 * Destroy an instance of ZcmLidarVuScan created by ZcmLidarVuScan_copy()
 */
void ZcmLidarVuScan_destroy(ZcmLidarVuScan* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmLidarVuScan_subscription_t ZcmLidarVuScan_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmLidarVuScan is received.
 */
typedef void(*ZcmLidarVuScan_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmLidarVuScan* msg, void* userdata);

/**
 * Publish a message of type ZcmLidarVuScan using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmLidarVuScan_publish(zcm_t* zcm, const char* channel, const ZcmLidarVuScan* msg);

/**
 * Subscribe to messages of type ZcmLidarVuScan using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmLidarVuScan_unsubscribe.
 */
ZcmLidarVuScan_subscription_t* ZcmLidarVuScan_subscribe(zcm_t* zcm, const char* channel, ZcmLidarVuScan_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmLidarVuScan_subscribe()
 */
int ZcmLidarVuScan_unsubscribe(zcm_t* zcm, ZcmLidarVuScan_subscription_t* hid);
/**
 * Encode a message of type ZcmLidarVuScan into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmLidarVuScan_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmLidarVuScan_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarVuScan* p);

/**
 * Decode a message of type ZcmLidarVuScan from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmLidarVuScan_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmLidarVuScan_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarVuScan* msg);

/**
 * Release resources allocated by ZcmLidarVuScan_decode()
 * @return 0
 */
int ZcmLidarVuScan_decode_cleanup(ZcmLidarVuScan* p);

/**
 * Check how many bytes are required to encode a message of type ZcmLidarVuScan
 */
uint32_t ZcmLidarVuScan_encoded_size(const ZcmLidarVuScan* p);
uint32_t ZcmLidarVuScan_struct_size(void);
uint32_t ZcmLidarVuScan_num_fields(void);
int      ZcmLidarVuScan_get_field(const ZcmLidarVuScan* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmLidarVuScan_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmLidarVuScan_get_hash(void);
uint64_t __ZcmLidarVuScan_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmLidarVuScan_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarVuScan* p, uint32_t elements);
int      __ZcmLidarVuScan_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarVuScan* p, uint32_t elements);
int      __ZcmLidarVuScan_decode_array_cleanup(ZcmLidarVuScan* p, uint32_t elements);
uint32_t __ZcmLidarVuScan_encoded_array_size(const ZcmLidarVuScan* p, uint32_t elements);
uint32_t __ZcmLidarVuScan_clone_array(const ZcmLidarVuScan* p, ZcmLidarVuScan* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
