// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmReleDriver_h
#define _ZcmReleDriver_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
/**
 * @struct ZcmReleDriver
 * @brief Сообщение для управления реле
 * @var ZcmReleDriver::rele_name
 * @brief - уникальное имя реле
 * @var ZcmReleDriver::rele_is_on
 * @brief - состояние в которое необходимо перевести реле \n
 * 			true - включить \n
 * 			false - выключить
 *
 */
typedef struct _ZcmReleDriver ZcmReleDriver;
struct _ZcmReleDriver
{
    ZcmService service;
    char*      rele_name;
    int8_t     rele_is_on;
};

/**
 * Create a deep copy of a ZcmReleDriver.
 * When no longer needed, destroy it with ZcmReleDriver_destroy()
 */
ZcmReleDriver* ZcmReleDriver_copy(const ZcmReleDriver* to_copy);

/**
 * Destroy an instance of ZcmReleDriver created by ZcmReleDriver_copy()
 */
void ZcmReleDriver_destroy(ZcmReleDriver* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmReleDriver_subscription_t ZcmReleDriver_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmReleDriver is received.
 */
typedef void(*ZcmReleDriver_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmReleDriver* msg, void* userdata);

/**
 * Publish a message of type ZcmReleDriver using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmReleDriver_publish(zcm_t* zcm, const char* channel, const ZcmReleDriver* msg);

/**
 * Subscribe to messages of type ZcmReleDriver using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmReleDriver_unsubscribe.
 */
ZcmReleDriver_subscription_t* ZcmReleDriver_subscribe(zcm_t* zcm, const char* channel, ZcmReleDriver_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmReleDriver_subscribe()
 */
int ZcmReleDriver_unsubscribe(zcm_t* zcm, ZcmReleDriver_subscription_t* hid);
/**
 * Encode a message of type ZcmReleDriver into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmReleDriver_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmReleDriver_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmReleDriver* p);

/**
 * Decode a message of type ZcmReleDriver from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmReleDriver_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmReleDriver_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmReleDriver* msg);

/**
 * Release resources allocated by ZcmReleDriver_decode()
 * @return 0
 */
int ZcmReleDriver_decode_cleanup(ZcmReleDriver* p);

/**
 * Check how many bytes are required to encode a message of type ZcmReleDriver
 */
uint32_t ZcmReleDriver_encoded_size(const ZcmReleDriver* p);
uint32_t ZcmReleDriver_struct_size(void);
uint32_t ZcmReleDriver_num_fields(void);
int      ZcmReleDriver_get_field(const ZcmReleDriver* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmReleDriver_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmReleDriver_get_hash(void);
uint64_t __ZcmReleDriver_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmReleDriver_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmReleDriver* p, uint32_t elements);
int      __ZcmReleDriver_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmReleDriver* p, uint32_t elements);
int      __ZcmReleDriver_decode_array_cleanup(ZcmReleDriver* p, uint32_t elements);
uint32_t __ZcmReleDriver_encoded_array_size(const ZcmReleDriver* p, uint32_t elements);
uint32_t __ZcmReleDriver_clone_array(const ZcmReleDriver* p, ZcmReleDriver* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
