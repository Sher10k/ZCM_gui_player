// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmObstacleUtmCoordinates_h
#define _ZcmObstacleUtmCoordinates_h

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @struct ZcmObstacleUtmCoordinates
 * @brief Данные о координатах объектов обнаруженных лидаром в UTM
 * @var ZcmObstacleUtmCoordinates::zone
 * @brief - номер зоны UTM
 * @var ZcmObstacleUtmCoordinates::zone_letter
 * @brief - буква зоны UTM
 * @var ZcmObstacleUtmCoordinates::easting
 * @brief - координата x в UTM
 * @var ZcmObstacleUtmCoordinates::northing
 * @brief - координата y в UTM
 *
 */
typedef struct _ZcmObstacleUtmCoordinates ZcmObstacleUtmCoordinates;
struct _ZcmObstacleUtmCoordinates
{
    int32_t    zone;
    char*      zone_letter;
    double     easting;
    double     northing;
};

/**
 * Create a deep copy of a ZcmObstacleUtmCoordinates.
 * When no longer needed, destroy it with ZcmObstacleUtmCoordinates_destroy()
 */
ZcmObstacleUtmCoordinates* ZcmObstacleUtmCoordinates_copy(const ZcmObstacleUtmCoordinates* to_copy);

/**
 * Destroy an instance of ZcmObstacleUtmCoordinates created by ZcmObstacleUtmCoordinates_copy()
 */
void ZcmObstacleUtmCoordinates_destroy(ZcmObstacleUtmCoordinates* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmObstacleUtmCoordinates_subscription_t ZcmObstacleUtmCoordinates_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmObstacleUtmCoordinates is received.
 */
typedef void(*ZcmObstacleUtmCoordinates_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmObstacleUtmCoordinates* msg, void* userdata);

/**
 * Publish a message of type ZcmObstacleUtmCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmObstacleUtmCoordinates_publish(zcm_t* zcm, const char* channel, const ZcmObstacleUtmCoordinates* msg);

/**
 * Subscribe to messages of type ZcmObstacleUtmCoordinates using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmObstacleUtmCoordinates_unsubscribe.
 */
ZcmObstacleUtmCoordinates_subscription_t* ZcmObstacleUtmCoordinates_subscribe(zcm_t* zcm, const char* channel, ZcmObstacleUtmCoordinates_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmObstacleUtmCoordinates_subscribe()
 */
int ZcmObstacleUtmCoordinates_unsubscribe(zcm_t* zcm, ZcmObstacleUtmCoordinates_subscription_t* hid);
/**
 * Encode a message of type ZcmObstacleUtmCoordinates into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmObstacleUtmCoordinates_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmObstacleUtmCoordinates_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleUtmCoordinates* p);

/**
 * Decode a message of type ZcmObstacleUtmCoordinates from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmObstacleUtmCoordinates_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmObstacleUtmCoordinates_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleUtmCoordinates* msg);

/**
 * Release resources allocated by ZcmObstacleUtmCoordinates_decode()
 * @return 0
 */
int ZcmObstacleUtmCoordinates_decode_cleanup(ZcmObstacleUtmCoordinates* p);

/**
 * Check how many bytes are required to encode a message of type ZcmObstacleUtmCoordinates
 */
uint32_t ZcmObstacleUtmCoordinates_encoded_size(const ZcmObstacleUtmCoordinates* p);
uint32_t ZcmObstacleUtmCoordinates_struct_size(void);
uint32_t ZcmObstacleUtmCoordinates_num_fields(void);
int      ZcmObstacleUtmCoordinates_get_field(const ZcmObstacleUtmCoordinates* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmObstacleUtmCoordinates_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmObstacleUtmCoordinates_get_hash(void);
uint64_t __ZcmObstacleUtmCoordinates_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmObstacleUtmCoordinates_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleUtmCoordinates* p, uint32_t elements);
int      __ZcmObstacleUtmCoordinates_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleUtmCoordinates* p, uint32_t elements);
int      __ZcmObstacleUtmCoordinates_decode_array_cleanup(ZcmObstacleUtmCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleUtmCoordinates_encoded_array_size(const ZcmObstacleUtmCoordinates* p, uint32_t elements);
uint32_t __ZcmObstacleUtmCoordinates_clone_array(const ZcmObstacleUtmCoordinates* p, ZcmObstacleUtmCoordinates* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
