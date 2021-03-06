// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmImuNXP_h
#define _ZcmImuNXP_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
/**
 * @struct ZcmImuNXP
 * @brief Информация от акселерометра
 * @var ZcmImuNXP::acc_x
 * @brief -ускорение по оси X в g
 *          
 * @var ZcmImuNXP::acc_y  
 * @brief - ускорение по оси Y в g
 *          
 * @var ZcmImuNXP::acc_z         
 * @brief - ускорение по оси Z в g
 * @var ZcmImuNXP::magn_x
 * @brief -магнитуда по оси X в T
 *          
 * @var ZcmImuNXP::magn_y  
 * @brief - магнитуда по оси Y в T
 *          
 * @var ZcmImuNXP::_z         
 * @brief - магнитуда по оси Z в T
 * @var ZcmImuNXP::gyro_x
 * @brief -угловая скорость по оси X в градусы/сек
 *          
 * @var ZcmImuNXP::gyro_y  
 * @brief - угловая скорость по оси Y в градусы/сек
 *          
 * @var ZcmImuNXP::gyro_z         
 * @brief - угловая скорость по оси Z в градусы/сек
 *             
 *
 */
typedef struct _ZcmImuNXP ZcmImuNXP;
struct _ZcmImuNXP
{
    ZcmService service;
    double     acc_x;
    double     acc_y;
    double     acc_z;
    double     magn_x;
    double     magn_y;
    double     magn_z;
    int8_t     has_gyro;
    double     gyro_x;
    double     gyro_y;
    double     gyro_z;
};

/**
 * Create a deep copy of a ZcmImuNXP.
 * When no longer needed, destroy it with ZcmImuNXP_destroy()
 */
ZcmImuNXP* ZcmImuNXP_copy(const ZcmImuNXP* to_copy);

/**
 * Destroy an instance of ZcmImuNXP created by ZcmImuNXP_copy()
 */
void ZcmImuNXP_destroy(ZcmImuNXP* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmImuNXP_subscription_t ZcmImuNXP_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmImuNXP is received.
 */
typedef void(*ZcmImuNXP_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmImuNXP* msg, void* userdata);

/**
 * Publish a message of type ZcmImuNXP using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmImuNXP_publish(zcm_t* zcm, const char* channel, const ZcmImuNXP* msg);

/**
 * Subscribe to messages of type ZcmImuNXP using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmImuNXP_unsubscribe.
 */
ZcmImuNXP_subscription_t* ZcmImuNXP_subscribe(zcm_t* zcm, const char* channel, ZcmImuNXP_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmImuNXP_subscribe()
 */
int ZcmImuNXP_unsubscribe(zcm_t* zcm, ZcmImuNXP_subscription_t* hid);
/**
 * Encode a message of type ZcmImuNXP into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmImuNXP_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmImuNXP_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmImuNXP* p);

/**
 * Decode a message of type ZcmImuNXP from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmImuNXP_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmImuNXP_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmImuNXP* msg);

/**
 * Release resources allocated by ZcmImuNXP_decode()
 * @return 0
 */
int ZcmImuNXP_decode_cleanup(ZcmImuNXP* p);

/**
 * Check how many bytes are required to encode a message of type ZcmImuNXP
 */
uint32_t ZcmImuNXP_encoded_size(const ZcmImuNXP* p);
uint32_t ZcmImuNXP_struct_size(void);
uint32_t ZcmImuNXP_num_fields(void);
int      ZcmImuNXP_get_field(const ZcmImuNXP* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmImuNXP_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmImuNXP_get_hash(void);
uint64_t __ZcmImuNXP_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmImuNXP_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmImuNXP* p, uint32_t elements);
int      __ZcmImuNXP_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmImuNXP* p, uint32_t elements);
int      __ZcmImuNXP_decode_array_cleanup(ZcmImuNXP* p, uint32_t elements);
uint32_t __ZcmImuNXP_encoded_array_size(const ZcmImuNXP* p, uint32_t elements);
uint32_t __ZcmImuNXP_clone_array(const ZcmImuNXP* p, ZcmImuNXP* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
