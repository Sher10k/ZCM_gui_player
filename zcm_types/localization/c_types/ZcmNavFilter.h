// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmNavFilter_h
#define _ZcmNavFilter_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmService.h"
#include "ZcmUtmCoord.h"
#include "ZcmGeographicCoord.h"
#include "ZcmVelocityVector.h"
/**
 * @struct ZcmNavFilter
 * @brief Отфильтрованные данные от навигатора
 * @var ZcmNavFilter::utmCoordinates
 * @brief - координаты в UTM
 * @var ZcmNavFilter::geographicCoordinates
 * @brief - географические координаты
 * @var ZcmNavFilter::velocityVector
 * @brief - вектор скорости
 * @var ZcmNavFilter::speed (м/с)
 * @brief - скорость.
 *          
 * @var ZcmNavFilter::azimuth_calculated (градусы)
 * @brief - азимут вычесленный.
 *          
 * @var ZcmNavFilter::azimuth_measured (градусы)
 * @brief - азимут измеренный.
 *          
 * @var ZcmNavFilter::x         
 * @brief - координата X (метры).
 *          
 * @var ZcmNavFilter::y         
 * @brief - координата Y (метры).
 *          
 * @var ZcmNavFilter::z
 * @brief - координата Z (метры).
 *
 */
typedef struct _ZcmNavFilter ZcmNavFilter;
struct _ZcmNavFilter
{
    ZcmService service;
    ZcmUtmCoord utm_coordinates;
    ZcmGeographicCoord geographic_coordinates;
    ZcmVelocityVector velocity_vector;
    double     speed;
    double     azimuth_calculated;
    double     azimuth_measured;
    double     x;
    double     y;
    double     z;
};

/**
 * Create a deep copy of a ZcmNavFilter.
 * When no longer needed, destroy it with ZcmNavFilter_destroy()
 */
ZcmNavFilter* ZcmNavFilter_copy(const ZcmNavFilter* to_copy);

/**
 * Destroy an instance of ZcmNavFilter created by ZcmNavFilter_copy()
 */
void ZcmNavFilter_destroy(ZcmNavFilter* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmNavFilter_subscription_t ZcmNavFilter_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmNavFilter is received.
 */
typedef void(*ZcmNavFilter_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmNavFilter* msg, void* userdata);

/**
 * Publish a message of type ZcmNavFilter using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmNavFilter_publish(zcm_t* zcm, const char* channel, const ZcmNavFilter* msg);

/**
 * Subscribe to messages of type ZcmNavFilter using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmNavFilter_unsubscribe.
 */
ZcmNavFilter_subscription_t* ZcmNavFilter_subscribe(zcm_t* zcm, const char* channel, ZcmNavFilter_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmNavFilter_subscribe()
 */
int ZcmNavFilter_unsubscribe(zcm_t* zcm, ZcmNavFilter_subscription_t* hid);
/**
 * Encode a message of type ZcmNavFilter into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmNavFilter_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmNavFilter_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmNavFilter* p);

/**
 * Decode a message of type ZcmNavFilter from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmNavFilter_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmNavFilter_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmNavFilter* msg);

/**
 * Release resources allocated by ZcmNavFilter_decode()
 * @return 0
 */
int ZcmNavFilter_decode_cleanup(ZcmNavFilter* p);

/**
 * Check how many bytes are required to encode a message of type ZcmNavFilter
 */
uint32_t ZcmNavFilter_encoded_size(const ZcmNavFilter* p);
uint32_t ZcmNavFilter_struct_size(void);
uint32_t ZcmNavFilter_num_fields(void);
int      ZcmNavFilter_get_field(const ZcmNavFilter* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmNavFilter_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmNavFilter_get_hash(void);
uint64_t __ZcmNavFilter_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmNavFilter_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmNavFilter* p, uint32_t elements);
int      __ZcmNavFilter_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmNavFilter* p, uint32_t elements);
int      __ZcmNavFilter_decode_array_cleanup(ZcmNavFilter* p, uint32_t elements);
uint32_t __ZcmNavFilter_encoded_array_size(const ZcmNavFilter* p, uint32_t elements);
uint32_t __ZcmNavFilter_clone_array(const ZcmNavFilter* p, ZcmNavFilter* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif
