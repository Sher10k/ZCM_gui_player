// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmCameraBaslerFrame_h
#define _ZcmCameraBaslerFrame_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmCameraBaslerInformation.h"
#include "ZcmCameraBaslerImagePresentation.h"
#include "ZcmService.h"
/**
 * =======================================================================================
 * @struct ZcmCameraBaslerFrame
 * @brief Принятый от камеры фрейм.
 *
 *
 * @var ZcmCameraBaslerJpegFrame::synchronized
 * @brief Флаг, подтверждающий попадание фрейма (с небольшой погрешностью) 
 * на "временную сетку".
 *
 * @var ZcmCameraBaslerJpegFrame::timestamp_ns
 * @brief Метка времени, установленная камерой. Если PTP не "прогрелся", будет в
 * районе 70-го года.
 *
 *
 */
typedef struct _ZcmCameraBaslerFrame ZcmCameraBaslerFrame;
struct _ZcmCameraBaslerFrame
{
    ZcmCameraBaslerInformation info;
    ZcmCameraBaslerImagePresentation image;
    int8_t     synchronized;
    int64_t    timestamp_ns;
    ZcmService service;
};

/**
 * Create a deep copy of a ZcmCameraBaslerFrame.
 * When no longer needed, destroy it with ZcmCameraBaslerFrame_destroy()
 */
ZcmCameraBaslerFrame* ZcmCameraBaslerFrame_copy(const ZcmCameraBaslerFrame* to_copy);

/**
 * Destroy an instance of ZcmCameraBaslerFrame created by ZcmCameraBaslerFrame_copy()
 */
void ZcmCameraBaslerFrame_destroy(ZcmCameraBaslerFrame* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmCameraBaslerFrame_subscription_t ZcmCameraBaslerFrame_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmCameraBaslerFrame is received.
 */
typedef void(*ZcmCameraBaslerFrame_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmCameraBaslerFrame* msg, void* userdata);

/**
 * Publish a message of type ZcmCameraBaslerFrame using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmCameraBaslerFrame_publish(zcm_t* zcm, const char* channel, const ZcmCameraBaslerFrame* msg);

/**
 * Subscribe to messages of type ZcmCameraBaslerFrame using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmCameraBaslerFrame_unsubscribe.
 */
ZcmCameraBaslerFrame_subscription_t* ZcmCameraBaslerFrame_subscribe(zcm_t* zcm, const char* channel, ZcmCameraBaslerFrame_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmCameraBaslerFrame_subscribe()
 */
int ZcmCameraBaslerFrame_unsubscribe(zcm_t* zcm, ZcmCameraBaslerFrame_subscription_t* hid);
/**
 * Encode a message of type ZcmCameraBaslerFrame into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmCameraBaslerFrame_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmCameraBaslerFrame_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCameraBaslerFrame* p);

/**
 * Decode a message of type ZcmCameraBaslerFrame from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmCameraBaslerFrame_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmCameraBaslerFrame_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCameraBaslerFrame* msg);

/**
 * Release resources allocated by ZcmCameraBaslerFrame_decode()
 * @return 0
 */
int ZcmCameraBaslerFrame_decode_cleanup(ZcmCameraBaslerFrame* p);

/**
 * Check how many bytes are required to encode a message of type ZcmCameraBaslerFrame
 */
uint32_t ZcmCameraBaslerFrame_encoded_size(const ZcmCameraBaslerFrame* p);
uint32_t ZcmCameraBaslerFrame_struct_size(void);
uint32_t ZcmCameraBaslerFrame_num_fields(void);
int      ZcmCameraBaslerFrame_get_field(const ZcmCameraBaslerFrame* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmCameraBaslerFrame_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmCameraBaslerFrame_get_hash(void);
uint64_t __ZcmCameraBaslerFrame_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmCameraBaslerFrame_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCameraBaslerFrame* p, uint32_t elements);
int      __ZcmCameraBaslerFrame_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCameraBaslerFrame* p, uint32_t elements);
int      __ZcmCameraBaslerFrame_decode_array_cleanup(ZcmCameraBaslerFrame* p, uint32_t elements);
uint32_t __ZcmCameraBaslerFrame_encoded_array_size(const ZcmCameraBaslerFrame* p, uint32_t elements);
uint32_t __ZcmCameraBaslerFrame_clone_array(const ZcmCameraBaslerFrame* p, ZcmCameraBaslerFrame* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
