// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmTrackDetectTracksScan_h
#define _ZcmTrackDetectTracksScan_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmTrackDetectTrack.h"
/**
 * @struct ZcmTrackDetectTracksScan
 * @brief Содержит информацию о найденных путях за одно сканирование кадра.
 * Если пути не найдены, то значение поля track_count равняется 0, а поле track[track_count] не заполняется.
 * @var ZcmTrackDetectTracksScan::track_count  
 * @brief - число найденных путей. Принимает значения от 0 до 3
 *
 */
typedef struct _ZcmTrackDetectTracksScan ZcmTrackDetectTracksScan;
struct _ZcmTrackDetectTracksScan
{
    ZcmService service;
    int8_t     track_count;
    ZcmTrackDetectTrack *track;
};

/**
 * Create a deep copy of a ZcmTrackDetectTracksScan.
 * When no longer needed, destroy it with ZcmTrackDetectTracksScan_destroy()
 */
ZcmTrackDetectTracksScan* ZcmTrackDetectTracksScan_copy(const ZcmTrackDetectTracksScan* to_copy);

/**
 * Destroy an instance of ZcmTrackDetectTracksScan created by ZcmTrackDetectTracksScan_copy()
 */
void ZcmTrackDetectTracksScan_destroy(ZcmTrackDetectTracksScan* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmTrackDetectTracksScan_subscription_t ZcmTrackDetectTracksScan_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmTrackDetectTracksScan is received.
 */
typedef void(*ZcmTrackDetectTracksScan_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmTrackDetectTracksScan* msg, void* userdata);

/**
 * Publish a message of type ZcmTrackDetectTracksScan using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmTrackDetectTracksScan_publish(zcm_t* zcm, const char* channel, const ZcmTrackDetectTracksScan* msg);

/**
 * Subscribe to messages of type ZcmTrackDetectTracksScan using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmTrackDetectTracksScan_unsubscribe.
 */
ZcmTrackDetectTracksScan_subscription_t* ZcmTrackDetectTracksScan_subscribe(zcm_t* zcm, const char* channel, ZcmTrackDetectTracksScan_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmTrackDetectTracksScan_subscribe()
 */
int ZcmTrackDetectTracksScan_unsubscribe(zcm_t* zcm, ZcmTrackDetectTracksScan_subscription_t* hid);
/**
 * Encode a message of type ZcmTrackDetectTracksScan into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmTrackDetectTracksScan_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmTrackDetectTracksScan_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTracksScan* p);

/**
 * Decode a message of type ZcmTrackDetectTracksScan from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmTrackDetectTracksScan_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmTrackDetectTracksScan_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTracksScan* msg);

/**
 * Release resources allocated by ZcmTrackDetectTracksScan_decode()
 * @return 0
 */
int ZcmTrackDetectTracksScan_decode_cleanup(ZcmTrackDetectTracksScan* p);

/**
 * Check how many bytes are required to encode a message of type ZcmTrackDetectTracksScan
 */
uint32_t ZcmTrackDetectTracksScan_encoded_size(const ZcmTrackDetectTracksScan* p);
uint32_t ZcmTrackDetectTracksScan_struct_size(void);
uint32_t ZcmTrackDetectTracksScan_num_fields(void);
int      ZcmTrackDetectTracksScan_get_field(const ZcmTrackDetectTracksScan* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmTrackDetectTracksScan_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmTrackDetectTracksScan_get_hash(void);
uint64_t __ZcmTrackDetectTracksScan_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmTrackDetectTracksScan_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTracksScan* p, uint32_t elements);
int      __ZcmTrackDetectTracksScan_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTracksScan* p, uint32_t elements);
int      __ZcmTrackDetectTracksScan_decode_array_cleanup(ZcmTrackDetectTracksScan* p, uint32_t elements);
uint32_t __ZcmTrackDetectTracksScan_encoded_array_size(const ZcmTrackDetectTracksScan* p, uint32_t elements);
uint32_t __ZcmTrackDetectTracksScan_clone_array(const ZcmTrackDetectTracksScan* p, ZcmTrackDetectTracksScan* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
