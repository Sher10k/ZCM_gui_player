// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmLidarLux2DPoint_h
#define _ZcmLidarLux2DPoint_h

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @struct ZcmLidarLux2DPoint
 * @brief Вспомогательная структура описывающая точки объекта
 *
 */
typedef struct _ZcmLidarLux2DPoint ZcmLidarLux2DPoint;
struct _ZcmLidarLux2DPoint
{
    float      posX;
    float      posY;
};

/**
 * Create a deep copy of a ZcmLidarLux2DPoint.
 * When no longer needed, destroy it with ZcmLidarLux2DPoint_destroy()
 */
ZcmLidarLux2DPoint* ZcmLidarLux2DPoint_copy(const ZcmLidarLux2DPoint* to_copy);

/**
 * Destroy an instance of ZcmLidarLux2DPoint created by ZcmLidarLux2DPoint_copy()
 */
void ZcmLidarLux2DPoint_destroy(ZcmLidarLux2DPoint* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmLidarLux2DPoint_subscription_t ZcmLidarLux2DPoint_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmLidarLux2DPoint is received.
 */
typedef void(*ZcmLidarLux2DPoint_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmLidarLux2DPoint* msg, void* userdata);

/**
 * Publish a message of type ZcmLidarLux2DPoint using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmLidarLux2DPoint_publish(zcm_t* zcm, const char* channel, const ZcmLidarLux2DPoint* msg);

/**
 * Subscribe to messages of type ZcmLidarLux2DPoint using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmLidarLux2DPoint_unsubscribe.
 */
ZcmLidarLux2DPoint_subscription_t* ZcmLidarLux2DPoint_subscribe(zcm_t* zcm, const char* channel, ZcmLidarLux2DPoint_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmLidarLux2DPoint_subscribe()
 */
int ZcmLidarLux2DPoint_unsubscribe(zcm_t* zcm, ZcmLidarLux2DPoint_subscription_t* hid);
/**
 * Encode a message of type ZcmLidarLux2DPoint into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmLidarLux2DPoint_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmLidarLux2DPoint_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarLux2DPoint* p);

/**
 * Decode a message of type ZcmLidarLux2DPoint from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmLidarLux2DPoint_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmLidarLux2DPoint_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarLux2DPoint* msg);

/**
 * Release resources allocated by ZcmLidarLux2DPoint_decode()
 * @return 0
 */
int ZcmLidarLux2DPoint_decode_cleanup(ZcmLidarLux2DPoint* p);

/**
 * Check how many bytes are required to encode a message of type ZcmLidarLux2DPoint
 */
uint32_t ZcmLidarLux2DPoint_encoded_size(const ZcmLidarLux2DPoint* p);
uint32_t ZcmLidarLux2DPoint_struct_size(void);
uint32_t ZcmLidarLux2DPoint_num_fields(void);
int      ZcmLidarLux2DPoint_get_field(const ZcmLidarLux2DPoint* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmLidarLux2DPoint_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmLidarLux2DPoint_get_hash(void);
uint64_t __ZcmLidarLux2DPoint_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmLidarLux2DPoint_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarLux2DPoint* p, uint32_t elements);
int      __ZcmLidarLux2DPoint_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarLux2DPoint* p, uint32_t elements);
int      __ZcmLidarLux2DPoint_decode_array_cleanup(ZcmLidarLux2DPoint* p, uint32_t elements);
uint32_t __ZcmLidarLux2DPoint_encoded_array_size(const ZcmLidarLux2DPoint* p, uint32_t elements);
uint32_t __ZcmLidarLux2DPoint_clone_array(const ZcmLidarLux2DPoint* p, ZcmLidarLux2DPoint* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
