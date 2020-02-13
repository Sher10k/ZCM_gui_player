// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmFusionZonePredictedObstacle.h"

static int __ZcmFusionZonePredictedObstacle_hash_computed;
static uint64_t __ZcmFusionZonePredictedObstacle_hash;

uint64_t __ZcmFusionZonePredictedObstacle_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmFusionZonePredictedObstacle_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmFusionZonePredictedObstacle_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xebccf9b94aa4d5edLL
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmFusionZonePredictedObstacle_get_hash(void)
{
    if (!__ZcmFusionZonePredictedObstacle_hash_computed) {
        __ZcmFusionZonePredictedObstacle_hash = (int64_t)__ZcmFusionZonePredictedObstacle_hash_recursive(NULL);
        __ZcmFusionZonePredictedObstacle_hash_computed = 1;
    }

    return __ZcmFusionZonePredictedObstacle_hash;
}

int __ZcmFusionZonePredictedObstacle_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionZonePredictedObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].zone), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].obstacle_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].distance), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmFusionZonePredictedObstacle_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionZonePredictedObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmFusionZonePredictedObstacle_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmFusionZonePredictedObstacle_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmFusionZonePredictedObstacle_encoded_array_size(const ZcmFusionZonePredictedObstacle* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int8_t_encoded_array_size(&(p[element].zone), 1);

        size += __int8_t_encoded_array_size(&(p[element].obstacle_type), 1);

        size += __double_encoded_array_size(&(p[element].distance), 1);

    }
    return size;
}

uint32_t ZcmFusionZonePredictedObstacle_encoded_size(const ZcmFusionZonePredictedObstacle* p)
{
    return 8 + __ZcmFusionZonePredictedObstacle_encoded_array_size(p, 1);
}

uint32_t ZcmFusionZonePredictedObstacle_struct_size(void)
{
    return sizeof(ZcmFusionZonePredictedObstacle);
}

uint32_t ZcmFusionZonePredictedObstacle_num_fields(void)
{
    return 3;
}

int ZcmFusionZonePredictedObstacle_get_field(const ZcmFusionZonePredictedObstacle* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmFusionZonePredictedObstacle_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "zone";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->zone;
            return 0;
        }
        
        case 1: {
            f->name = "obstacle_type";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->obstacle_type;
            return 0;
        }
        
        case 2: {
            f->name = "distance";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->distance;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmFusionZonePredictedObstacle_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmFusionZonePredictedObstacle_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmFusionZonePredictedObstacle_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmFusionZonePredictedObstacle_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmFusionZonePredictedObstacle_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmFusionZonePredictedObstacle_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmFusionZonePredictedObstacle_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmFusionZonePredictedObstacle_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmFusionZonePredictedObstacle_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmFusionZonePredictedObstacle_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionZonePredictedObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].zone), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].obstacle_type), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].distance), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmFusionZonePredictedObstacle_decode_array_cleanup(ZcmFusionZonePredictedObstacle* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int8_t_decode_array_cleanup(&(p[element].zone), 1);

        __int8_t_decode_array_cleanup(&(p[element].obstacle_type), 1);

        __double_decode_array_cleanup(&(p[element].distance), 1);

    }
    return 0;
}

int ZcmFusionZonePredictedObstacle_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionZonePredictedObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmFusionZonePredictedObstacle_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmFusionZonePredictedObstacle_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmFusionZonePredictedObstacle_decode_cleanup(ZcmFusionZonePredictedObstacle* p)
{
    return __ZcmFusionZonePredictedObstacle_decode_array_cleanup(p, 1);
}

uint32_t __ZcmFusionZonePredictedObstacle_clone_array(const ZcmFusionZonePredictedObstacle* p, ZcmFusionZonePredictedObstacle* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int8_t_clone_array(&(p[element].zone), &(q[element].zone), 1);

        n += __int8_t_clone_array(&(p[element].obstacle_type), &(q[element].obstacle_type), 1);

        n += __double_clone_array(&(p[element].distance), &(q[element].distance), 1);

    }
    return n;
}

ZcmFusionZonePredictedObstacle* ZcmFusionZonePredictedObstacle_copy(const ZcmFusionZonePredictedObstacle* p)
{
    ZcmFusionZonePredictedObstacle* q = (ZcmFusionZonePredictedObstacle*) malloc(sizeof(ZcmFusionZonePredictedObstacle));
    __ZcmFusionZonePredictedObstacle_clone_array(p, q, 1);
    return q;
}

void ZcmFusionZonePredictedObstacle_destroy(ZcmFusionZonePredictedObstacle* p)
{
    __ZcmFusionZonePredictedObstacle_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmFusionZonePredictedObstacle_publish(zcm_t* zcm, const char* channel, const ZcmFusionZonePredictedObstacle* p)
{
      uint32_t max_data_size = ZcmFusionZonePredictedObstacle_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmFusionZonePredictedObstacle_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmFusionZonePredictedObstacle_subscription_t {
    ZcmFusionZonePredictedObstacle_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmFusionZonePredictedObstacle_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmFusionZonePredictedObstacle p;
    memset(&p, 0, sizeof(ZcmFusionZonePredictedObstacle));
    status = ZcmFusionZonePredictedObstacle_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmFusionZonePredictedObstacle!!!\n", status);
        return;
    }

    ZcmFusionZonePredictedObstacle_subscription_t* h = (ZcmFusionZonePredictedObstacle_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmFusionZonePredictedObstacle_decode_cleanup (&p);
}

ZcmFusionZonePredictedObstacle_subscription_t* ZcmFusionZonePredictedObstacle_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmFusionZonePredictedObstacle_handler_t f, void* userdata)
{
    ZcmFusionZonePredictedObstacle_subscription_t* n = (ZcmFusionZonePredictedObstacle_subscription_t*)
                       malloc(sizeof(ZcmFusionZonePredictedObstacle_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmFusionZonePredictedObstacle_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmFusionZonePredictedObstacle ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmFusionZonePredictedObstacle_unsubscribe(zcm_t* zcm, ZcmFusionZonePredictedObstacle_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmFusionZonePredictedObstacle_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
