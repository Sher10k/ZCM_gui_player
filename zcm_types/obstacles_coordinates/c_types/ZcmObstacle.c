// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmObstacle.h"

static int __ZcmObstacle_hash_computed;
static uint64_t __ZcmObstacle_hash;

uint64_t __ZcmObstacle_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmObstacle_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmObstacle_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xbd77d4f68b2e8a0fLL
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmObstacleProperties_hash_recursive(&cp)
         + __ZcmObstacleLocalCoordinates_hash_recursive(&cp)
         + __ZcmObstacleUtmCoordinates_hash_recursive(&cp)
         + __ZcmObstacleGeoCoordinates_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmObstacle_get_hash(void)
{
    if (!__ZcmObstacle_hash_computed) {
        __ZcmObstacle_hash = (int64_t)__ZcmObstacle_hash_recursive(NULL);
        __ZcmObstacle_hash_computed = 1;
    }

    return __ZcmObstacle_hash;
}

int __ZcmObstacle_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].cluster_id), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].object_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleProperties_encode_array(buf, offset + pos, maxlen - pos, &(p[element].object_properies), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleLocalCoordinates_encode_array(buf, offset + pos, maxlen - pos, &(p[element].local_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleUtmCoordinates_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utm_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleGeoCoordinates_encode_array(buf, offset + pos, maxlen - pos, &(p[element].geo_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmObstacle_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacle_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmObstacle_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmObstacle_encoded_array_size(const ZcmObstacle* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int32_t_encoded_array_size(&(p[element].cluster_id), 1);

        size += __int32_t_encoded_array_size(&(p[element].object_type), 1);

        size += __ZcmObstacleProperties_encoded_array_size(&(p[element].object_properies), 1);

        size += __ZcmObstacleLocalCoordinates_encoded_array_size(&(p[element].local_coordinates), 1);

        size += __ZcmObstacleUtmCoordinates_encoded_array_size(&(p[element].utm_coordinates), 1);

        size += __ZcmObstacleGeoCoordinates_encoded_array_size(&(p[element].geo_coordinates), 1);

    }
    return size;
}

uint32_t ZcmObstacle_encoded_size(const ZcmObstacle* p)
{
    return 8 + __ZcmObstacle_encoded_array_size(p, 1);
}

uint32_t ZcmObstacle_struct_size(void)
{
    return sizeof(ZcmObstacle);
}

uint32_t ZcmObstacle_num_fields(void)
{
    return 6;
}

int ZcmObstacle_get_field(const ZcmObstacle* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmObstacle_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "cluster_id";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->cluster_id;
            return 0;
        }
        
        case 1: {
            f->name = "object_type";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->object_type;
            return 0;
        }
        
        case 2: {
            /* ZcmObstacleProperties */
            f->name = "object_properies";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObstacleProperties";
            f->num_dim = 0;
            f->data = (void*) &p->object_properies;
            return 0;
        }
        
        case 3: {
            /* ZcmObstacleLocalCoordinates */
            f->name = "local_coordinates";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObstacleLocalCoordinates";
            f->num_dim = 0;
            f->data = (void*) &p->local_coordinates;
            return 0;
        }
        
        case 4: {
            /* ZcmObstacleUtmCoordinates */
            f->name = "utm_coordinates";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObstacleUtmCoordinates";
            f->num_dim = 0;
            f->data = (void*) &p->utm_coordinates;
            return 0;
        }
        
        case 5: {
            /* ZcmObstacleGeoCoordinates */
            f->name = "geo_coordinates";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObstacleGeoCoordinates";
            f->num_dim = 0;
            f->data = (void*) &p->geo_coordinates;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmObstacle_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmObstacle_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmObstacle_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmObstacle_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmObstacle_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmObstacle_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmObstacle_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmObstacle_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmObstacle_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmObstacle_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].cluster_id), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].object_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleProperties_decode_array(buf, offset + pos, maxlen - pos, &(p[element].object_properies), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleLocalCoordinates_decode_array(buf, offset + pos, maxlen - pos, &(p[element].local_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleUtmCoordinates_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utm_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObstacleGeoCoordinates_decode_array(buf, offset + pos, maxlen - pos, &(p[element].geo_coordinates), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmObstacle_decode_array_cleanup(ZcmObstacle* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int32_t_decode_array_cleanup(&(p[element].cluster_id), 1);

        __int32_t_decode_array_cleanup(&(p[element].object_type), 1);

        __ZcmObstacleProperties_decode_array_cleanup(&(p[element].object_properies), 1);

        __ZcmObstacleLocalCoordinates_decode_array_cleanup(&(p[element].local_coordinates), 1);

        __ZcmObstacleUtmCoordinates_decode_array_cleanup(&(p[element].utm_coordinates), 1);

        __ZcmObstacleGeoCoordinates_decode_array_cleanup(&(p[element].geo_coordinates), 1);

    }
    return 0;
}

int ZcmObstacle_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacle_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmObstacle_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmObstacle_decode_cleanup(ZcmObstacle* p)
{
    return __ZcmObstacle_decode_array_cleanup(p, 1);
}

uint32_t __ZcmObstacle_clone_array(const ZcmObstacle* p, ZcmObstacle* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int32_t_clone_array(&(p[element].cluster_id), &(q[element].cluster_id), 1);

        n += __int32_t_clone_array(&(p[element].object_type), &(q[element].object_type), 1);

        n += __ZcmObstacleProperties_clone_array(&(p[element].object_properies), &(q[element].object_properies), 1);

        n += __ZcmObstacleLocalCoordinates_clone_array(&(p[element].local_coordinates), &(q[element].local_coordinates), 1);

        n += __ZcmObstacleUtmCoordinates_clone_array(&(p[element].utm_coordinates), &(q[element].utm_coordinates), 1);

        n += __ZcmObstacleGeoCoordinates_clone_array(&(p[element].geo_coordinates), &(q[element].geo_coordinates), 1);

    }
    return n;
}

ZcmObstacle* ZcmObstacle_copy(const ZcmObstacle* p)
{
    ZcmObstacle* q = (ZcmObstacle*) malloc(sizeof(ZcmObstacle));
    __ZcmObstacle_clone_array(p, q, 1);
    return q;
}

void ZcmObstacle_destroy(ZcmObstacle* p)
{
    __ZcmObstacle_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmObstacle_publish(zcm_t* zcm, const char* channel, const ZcmObstacle* p)
{
      uint32_t max_data_size = ZcmObstacle_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmObstacle_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmObstacle_subscription_t {
    ZcmObstacle_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmObstacle_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmObstacle p;
    memset(&p, 0, sizeof(ZcmObstacle));
    status = ZcmObstacle_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmObstacle!!!\n", status);
        return;
    }

    ZcmObstacle_subscription_t* h = (ZcmObstacle_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmObstacle_decode_cleanup (&p);
}

ZcmObstacle_subscription_t* ZcmObstacle_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmObstacle_handler_t f, void* userdata)
{
    ZcmObstacle_subscription_t* n = (ZcmObstacle_subscription_t*)
                       malloc(sizeof(ZcmObstacle_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmObstacle_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmObstacle ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmObstacle_unsubscribe(zcm_t* zcm, ZcmObstacle_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmObstacle_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
