// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <stdint.h>
#include <stdlib.h>
#include <zcm/zcm_coretypes.h>
#include <zcm/zcm.h>

#ifndef _ZcmLidarCluster_h
#define _ZcmLidarCluster_h

#ifdef __cplusplus
extern "C" {
#endif

#include "ZcmLidarScalaPoint.h"
#include "ZcmLidarClusterMediumPoint.h"
#include "ZcmLidarClusterBoundRect.h"
/**
 * @struct ZcmLidarCluster
 * @brief Сообщение содержит информацию о всех точках кластера
 * @var ZcmLidarCluster::clusterID
 * @brief - уникальный номер кластера
 * @var ZcmLidarCluster::pointsCount
 * @brief - кол-во точек в кластере
 * @var ZcmLidarCluster::scanPoints
 * @brief - список точек в кластере
 * @var ZcmLidarCluster::medium_point
 * @brief - центр масс кластера
 * @var ZcmLidarCluster::bounding_rect
 * @brief - прямоугольник описывающий точки кластера
 *
 */
typedef struct _ZcmLidarCluster ZcmLidarCluster;
struct _ZcmLidarCluster
{
    int32_t    clusterID;
    int32_t    pointsCount;
    ZcmLidarScalaPoint *scanPoints;
    ZcmLidarClusterMediumPoint medium_point;
    ZcmLidarClusterBoundRect bounding_rect;
};

/**
 * Create a deep copy of a ZcmLidarCluster.
 * When no longer needed, destroy it with ZcmLidarCluster_destroy()
 */
ZcmLidarCluster* ZcmLidarCluster_copy(const ZcmLidarCluster* to_copy);

/**
 * Destroy an instance of ZcmLidarCluster created by ZcmLidarCluster_copy()
 */
void ZcmLidarCluster_destroy(ZcmLidarCluster* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _ZcmLidarCluster_subscription_t ZcmLidarCluster_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * ZcmLidarCluster is received.
 */
typedef void(*ZcmLidarCluster_handler_t)(const zcm_recv_buf_t* rbuf,
             const char* channel, const ZcmLidarCluster* msg, void* userdata);

/**
 * Publish a message of type ZcmLidarCluster using ZCM.
 *
 * @param zcm The ZCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means ZCM has transferred
 * responsibility of the message data to the OS.
 */
int ZcmLidarCluster_publish(zcm_t* zcm, const char* channel, const ZcmLidarCluster* msg);

/**
 * Subscribe to messages of type ZcmLidarCluster using ZCM.
 *
 * @param zcm The ZCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by ZCM when a message is received.
 *                This function is invoked by ZCM during calls to zcm_handle() and
 *                zcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return pointer to subscription type, NULL if failure. Must clean up
 *         dynamic memory by passing the pointer to ZcmLidarCluster_unsubscribe.
 */
ZcmLidarCluster_subscription_t* ZcmLidarCluster_subscribe(zcm_t* zcm, const char* channel, ZcmLidarCluster_handler_t handler, void* userdata);

/**
 * Removes and destroys a subscription created by ZcmLidarCluster_subscribe()
 */
int ZcmLidarCluster_unsubscribe(zcm_t* zcm, ZcmLidarCluster_subscription_t* hid);
/**
 * Encode a message of type ZcmLidarCluster into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to ZcmLidarCluster_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int ZcmLidarCluster_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarCluster* p);

/**
 * Decode a message of type ZcmLidarCluster from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with ZcmLidarCluster_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int ZcmLidarCluster_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarCluster* msg);

/**
 * Release resources allocated by ZcmLidarCluster_decode()
 * @return 0
 */
int ZcmLidarCluster_decode_cleanup(ZcmLidarCluster* p);

/**
 * Check how many bytes are required to encode a message of type ZcmLidarCluster
 */
uint32_t ZcmLidarCluster_encoded_size(const ZcmLidarCluster* p);
uint32_t ZcmLidarCluster_struct_size(void);
uint32_t ZcmLidarCluster_num_fields(void);
int      ZcmLidarCluster_get_field(const ZcmLidarCluster* p, uint32_t i, zcm_field_t* f);
const zcm_type_info_t* ZcmLidarCluster_get_type_info(void);

// ZCM support functions. Users should not call these
int64_t  __ZcmLidarCluster_get_hash(void);
uint64_t __ZcmLidarCluster_hash_recursive(const __zcm_hash_ptr* p);
int      __ZcmLidarCluster_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarCluster* p, uint32_t elements);
int      __ZcmLidarCluster_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarCluster* p, uint32_t elements);
int      __ZcmLidarCluster_decode_array_cleanup(ZcmLidarCluster* p, uint32_t elements);
uint32_t __ZcmLidarCluster_encoded_array_size(const ZcmLidarCluster* p, uint32_t elements);
uint32_t __ZcmLidarCluster_clone_array(const ZcmLidarCluster* p, ZcmLidarCluster* q, uint32_t elements);

#ifdef __cplusplus
}
#endif

#endif