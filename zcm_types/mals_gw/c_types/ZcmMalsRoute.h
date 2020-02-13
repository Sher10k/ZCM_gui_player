// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmMalsRoute_h
#define _ZcmMalsRoute_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmMalsSwitch.h"
#define ZCMMALSROUTE_SWITCH_STATE_UNKNOWN 0
#define ZCMMALSROUTE_SWITCH_STATE_PLUS 1
#define ZCMMALSROUTE_SWITCH_STATE_MINUS 2

/**
 * @struct ZcmMalsRoute
 * @brief информация от MAЛС о текущем пути
 * @var ZcmMalsRoute::count
 * @brief - количество стрелок
 *          
 * @var ZcmMalsRoute::switches  
 * @brief - массив стрелок
 *          
 * @var ZcmMalsRoute::current_section         
 * @brief - имя текущей секции занимаемой локомотивом
 * @var ZcmMalsRoute::border1/border2
 * @brief - начало/конец маршрута                  
 *
 */
typedef struct _ZcmMalsRoute ZcmMalsRoute;
struct _ZcmMalsRoute
{
    ZcmService service;
    int16_t    count;
    ZcmMalsSwitch *switches;
    char*      current_section;
    char*      border1;
    char*      border2;
};

/**
 * Create a deep copy of a ZcmMalsRoute.
 * When no longer needed, destroy it with ZcmMalsRoute_destroy()
 */
ZcmMalsRoute* ZcmMalsRoute_copy(const ZcmMalsRoute* to_copy);

/**
 * Destroy an instance of ZcmMalsRoute created by ZcmMalsRoute_copy()
 */
void ZcmMalsRoute_destroy(ZcmMalsRoute* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmMalsRoute_subscription_t ZcmMalsRoute_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmMalsRoute is received.
 */
typedef void(*ZcmMalsRoute_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmMalsRoute* msg, void* userdata);

/**
 * Publish a message of type ZcmMalsRoute using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmMalsRoute_publish(zcm_t* zcm, const char* channel, const ZcmMalsRoute* msg);

/**
 * Subscribe to messages of type ZcmMalsRoute using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmMalsRoute_unsubscribe.
 */
ZcmMalsRoute_subscription_t* ZcmMalsRoute_subscribe(zcm_t* zcm, const char* channel, ZcmMalsRoute_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmMalsRoute_subscribe()
 */
int ZcmMalsRoute_unsubscribe(zcm_t* zcm, ZcmMalsRoute_subscription_t* hid);
/**
 * Encode a message of type ZcmMalsRoute into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmMalsRoute_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmMalsRoute_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmMalsRoute* p);

/**
 * Decode a message of type ZcmMalsRoute from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmMalsRoute_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmMalsRoute_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmMalsRoute* msg);

/**
 * Release resources allocated by ZcmMalsRoute_decode()
 * @return 0
 */
int ZcmMalsRoute_decode_cleanup(ZcmMalsRoute* p);

/**
 * Check how many bytes are required to encode a message of type ZcmMalsRoute
 */
uint32_t ZcmMalsRoute_encoded_size(const ZcmMalsRoute* p);
uint32_t ZcmMalsRoute_struct_size(void);
uint32_t ZcmMalsRoute_num_fields(void);
int      ZcmMalsRoute_get_field(const ZcmMalsRoute* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmMalsRoute_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmMalsRoute_get_hash(void);
uint64_t __ZcmMalsRoute_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmMalsRoute_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmMalsRoute* p, uint32_t elements);
int      __ZcmMalsRoute_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmMalsRoute* p, uint32_t elements);
int      __ZcmMalsRoute_decode_array_cleanup(ZcmMalsRoute* p, uint32_t elements);
uint32_t __ZcmMalsRoute_encoded_array_size(const ZcmMalsRoute* p, uint32_t elements);
uint32_t __ZcmMalsRoute_clone_array(const ZcmMalsRoute* p, ZcmMalsRoute* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
