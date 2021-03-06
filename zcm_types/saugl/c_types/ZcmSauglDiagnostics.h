// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmSauglDiagnostics_h
#define _ZcmSauglDiagnostics_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#define ZCMSAUGLDIAGNOSTICS_MODE_DISTANT_CONTROL_OFF 0
#define ZCMSAUGLDIAGNOSTICS_MODE_DISTANT_CONTROL 3

/**
 * @struct ZcmSauglDiagnostics
 * @brief Диагностика САУ-ГЛ
 * @var ZcmSauglDiagnostics::power
 * @brief - Позиция контроллера машиниста в режиме тяги либо электро-динамического торможения (ЭДТ)
 * @var ZcmSauglDiagnostics::is_power_brake
 * @brief - Режим электро-динамического торможения (ЭДТ)
 * @var ZcmSauglDiagnostics::is_hold_speed
 * @brief - Поддержание скорости
 * @var ZcmSauglDiagnostics::is_reversor_forward
 * @brief - Фактическое положение реверсора - вперед
 * @var ZcmSauglDiagnostics::is_reversor_backward
 * @brief - Фактическое положение реверсора - назад
 * @var ZcmSauglDiagnostics::mode
 * @brief - Режим управления
 * @var ZcmSauglDiagnostics::hold_speed
 * @brief - Значение поддерживаемой скорости, 0.5 км/ч
 * @var ZcmSauglDiagnostics::speed
 * @brief - Фактическая скорость, 0.1 км/ч
 * @var ZcmSauglDiagnostics::MODE_DISTANT_CONTROL_OFF
 * @brief - Константа, режим управления - дистанционное управление не активно
 * @var ZcmSauglDiagnostics::MODE_DISTANT_CONTROL
 * @brief - Константа, режим управления - локомотив находится в режиме дистанционного управления
 *
 */
typedef struct _ZcmSauglDiagnostics ZcmSauglDiagnostics;
struct _ZcmSauglDiagnostics
{
    ZcmService service;
    int8_t     power;
    int8_t     is_power_brake;
    int8_t     is_hold_speed;
    int8_t     is_reversor_forward;
    int8_t     is_reversor_backward;
    int16_t    mode;
    int8_t     is_test_request;
    int16_t    hold_speed;
    int32_t    speed;
};

/**
 * Create a deep copy of a ZcmSauglDiagnostics.
 * When no longer needed, destroy it with ZcmSauglDiagnostics_destroy()
 */
ZcmSauglDiagnostics* ZcmSauglDiagnostics_copy(const ZcmSauglDiagnostics* to_copy);

/**
 * Destroy an instance of ZcmSauglDiagnostics created by ZcmSauglDiagnostics_copy()
 */
void ZcmSauglDiagnostics_destroy(ZcmSauglDiagnostics* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmSauglDiagnostics_subscription_t ZcmSauglDiagnostics_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmSauglDiagnostics is received.
 */
typedef void(*ZcmSauglDiagnostics_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmSauglDiagnostics* msg, void* userdata);

/**
 * Publish a message of type ZcmSauglDiagnostics using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmSauglDiagnostics_publish(zcm_t* zcm, const char* channel, const ZcmSauglDiagnostics* msg);

/**
 * Subscribe to messages of type ZcmSauglDiagnostics using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmSauglDiagnostics_unsubscribe.
 */
ZcmSauglDiagnostics_subscription_t* ZcmSauglDiagnostics_subscribe(zcm_t* zcm, const char* channel, ZcmSauglDiagnostics_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmSauglDiagnostics_subscribe()
 */
int ZcmSauglDiagnostics_unsubscribe(zcm_t* zcm, ZcmSauglDiagnostics_subscription_t* hid);
/**
 * Encode a message of type ZcmSauglDiagnostics into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmSauglDiagnostics_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmSauglDiagnostics_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglDiagnostics* p);

/**
 * Decode a message of type ZcmSauglDiagnostics from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmSauglDiagnostics_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmSauglDiagnostics_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglDiagnostics* msg);

/**
 * Release resources allocated by ZcmSauglDiagnostics_decode()
 * @return 0
 */
int ZcmSauglDiagnostics_decode_cleanup(ZcmSauglDiagnostics* p);

/**
 * Check how many bytes are required to encode a message of type ZcmSauglDiagnostics
 */
uint32_t ZcmSauglDiagnostics_encoded_size(const ZcmSauglDiagnostics* p);
uint32_t ZcmSauglDiagnostics_struct_size(void);
uint32_t ZcmSauglDiagnostics_num_fields(void);
int      ZcmSauglDiagnostics_get_field(const ZcmSauglDiagnostics* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmSauglDiagnostics_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmSauglDiagnostics_get_hash(void);
uint64_t __ZcmSauglDiagnostics_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmSauglDiagnostics_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglDiagnostics* p, uint32_t elements);
int      __ZcmSauglDiagnostics_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglDiagnostics* p, uint32_t elements);
int      __ZcmSauglDiagnostics_decode_array_cleanup(ZcmSauglDiagnostics* p, uint32_t elements);
uint32_t __ZcmSauglDiagnostics_encoded_array_size(const ZcmSauglDiagnostics* p, uint32_t elements);
uint32_t __ZcmSauglDiagnostics_clone_array(const ZcmSauglDiagnostics* p, ZcmSauglDiagnostics* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
