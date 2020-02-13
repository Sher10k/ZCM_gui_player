// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmSauglOduCar_h
#define _ZcmSauglOduCar_h

#ifdef __cplusplus
extern "C" {
#endif

#define ZCMSAUGLODUCAR_DISTANCE_NOT_SET 0xfff

/**
 * @struct ZcmSauglOduCar
 * @brief Информация блока обнаружения препятствий о вагоне
 * @var ZcmSauglOduCar::is_car
 * @brief - признак обнаружения вагона
 * @var ZcmSauglOduCar::distance_capote
 * @brief - расстояние до вагонов (со стороны капота), от 0 до 4094, 4095 (0xfff) - не установлено, дециметр
 * @var ZcmSauglOduCar::distance_cabin
 * @brief - расстояние до вагонов (со стороны кабины), от 0 до 4094, 4095 (0xfff) - не установлено, дециметр
 *
 */
typedef struct _ZcmSauglOduCar ZcmSauglOduCar;
struct _ZcmSauglOduCar
{
    int8_t     is_car;
    int32_t    distance_capote;
    int32_t    distance_cabin;
};

/**
 * Create a deep copy of a ZcmSauglOduCar.
 * When no longer needed, destroy it with ZcmSauglOduCar_destroy()
 */
ZcmSauglOduCar* ZcmSauglOduCar_copy(const ZcmSauglOduCar* to_copy);

/**
 * Destroy an instance of ZcmSauglOduCar created by ZcmSauglOduCar_copy()
 */
void ZcmSauglOduCar_destroy(ZcmSauglOduCar* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmSauglOduCar_subscription_t ZcmSauglOduCar_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmSauglOduCar is received.
 */
typedef void(*ZcmSauglOduCar_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmSauglOduCar* msg, void* userdata);

/**
 * Publish a message of type ZcmSauglOduCar using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmSauglOduCar_publish(zcm_t* zcm, const char* channel, const ZcmSauglOduCar* msg);

/**
 * Subscribe to messages of type ZcmSauglOduCar using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmSauglOduCar_unsubscribe.
 */
ZcmSauglOduCar_subscription_t* ZcmSauglOduCar_subscribe(zcm_t* zcm, const char* channel, ZcmSauglOduCar_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmSauglOduCar_subscribe()
 */
int ZcmSauglOduCar_unsubscribe(zcm_t* zcm, ZcmSauglOduCar_subscription_t* hid);
/**
 * Encode a message of type ZcmSauglOduCar into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmSauglOduCar_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmSauglOduCar_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglOduCar* p);

/**
 * Decode a message of type ZcmSauglOduCar from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmSauglOduCar_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmSauglOduCar_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglOduCar* msg);

/**
 * Release resources allocated by ZcmSauglOduCar_decode()
 * @return 0
 */
int ZcmSauglOduCar_decode_cleanup(ZcmSauglOduCar* p);

/**
 * Check how many bytes are required to encode a message of type ZcmSauglOduCar
 */
uint32_t ZcmSauglOduCar_encoded_size(const ZcmSauglOduCar* p);
uint32_t ZcmSauglOduCar_struct_size(void);
uint32_t ZcmSauglOduCar_num_fields(void);
int      ZcmSauglOduCar_get_field(const ZcmSauglOduCar* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmSauglOduCar_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmSauglOduCar_get_hash(void);
uint64_t __ZcmSauglOduCar_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmSauglOduCar_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglOduCar* p, uint32_t elements);
int      __ZcmSauglOduCar_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglOduCar* p, uint32_t elements);
int      __ZcmSauglOduCar_decode_array_cleanup(ZcmSauglOduCar* p, uint32_t elements);
uint32_t __ZcmSauglOduCar_encoded_array_size(const ZcmSauglOduCar* p, uint32_t elements);
uint32_t __ZcmSauglOduCar_clone_array(const ZcmSauglOduCar* p, ZcmSauglOduCar* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
