// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmFusionPredictedObstacle.h"

static int __ZcmFusionPredictedObstacle_hash_computed;
static uint64_t __ZcmFusionPredictedObstacle_hash;

uint64_t __ZcmFusionPredictedObstacle_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmFusionPredictedObstacle_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmFusionPredictedObstacle_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x9d14204a56ec6ebcLL
         + __ZcmService_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __ZcmFusionZonePredictedObstacle_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmFusionPredictedObstacle_get_hash(void)
{
    if (!__ZcmFusionPredictedObstacle_hash_computed) {
        __ZcmFusionPredictedObstacle_hash = (int64_t)__ZcmFusionPredictedObstacle_hash_recursive(NULL);
        __ZcmFusionPredictedObstacle_hash_computed = 1;
    }

    return __ZcmFusionPredictedObstacle_hash;
}

int __ZcmFusionPredictedObstacle_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionPredictedObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].obstacles_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmFusionZonePredictedObstacle_encode_array(buf, offset + pos, maxlen - pos, p[element].obstacles, p[element].obstacles_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmFusionPredictedObstacle_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmFusionPredictedObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmFusionPredictedObstacle_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmFusionPredictedObstacle_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmFusionPredictedObstacle_encoded_array_size(const ZcmFusionPredictedObstacle* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int8_t_encoded_array_size(&(p[element].obstacles_count), 1);

        size += __ZcmFusionZonePredictedObstacle_encoded_array_size(p[element].obstacles, p[element].obstacles_count);

    }
    return size;
}

uint32_t ZcmFusionPredictedObstacle_encoded_size(const ZcmFusionPredictedObstacle* p)
{
    return 8 + __ZcmFusionPredictedObstacle_encoded_array_size(p, 1);
}

uint32_t ZcmFusionPredictedObstacle_struct_size(void)
{
    return sizeof(ZcmFusionPredictedObstacle);
}

uint32_t ZcmFusionPredictedObstacle_num_fields(void)
{
    return 3;
}

int ZcmFusionPredictedObstacle_get_field(const ZcmFusionPredictedObstacle* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmFusionPredictedObstacle_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            /* ZcmService */
            f->name = "service";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmService";
            f->num_dim = 0;
            f->data = (void*) &p->service;
            return 0;
        }
        
        case 1: {
            f->name = "obstacles_count";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->obstacles_count;
            return 0;
        }
        
        case 2: {
            /* ZcmFusionZonePredictedObstacle */
            f->name = "obstacles";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmFusionZonePredictedObstacle";
            f->num_dim = 1;
            f->dim_size[0] = p->obstacles_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->obstacles;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmFusionPredictedObstacle_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmFusionPredictedObstacle_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmFusionPredictedObstacle_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmFusionPredictedObstacle_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmFusionPredictedObstacle_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmFusionPredictedObstacle_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmFusionPredictedObstacle_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmFusionPredictedObstacle_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmFusionPredictedObstacle_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmFusionPredictedObstacle_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionPredictedObstacle* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].obstacles_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].obstacles = (ZcmFusionZonePredictedObstacle*) zcm_malloc(sizeof(ZcmFusionZonePredictedObstacle) * p[element].obstacles_count);
        thislen = __ZcmFusionZonePredictedObstacle_decode_array(buf, offset + pos, maxlen - pos, p[element].obstacles, p[element].obstacles_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmFusionPredictedObstacle_decode_array_cleanup(ZcmFusionPredictedObstacle* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int8_t_decode_array_cleanup(&(p[element].obstacles_count), 1);

        __ZcmFusionZonePredictedObstacle_decode_array_cleanup(p[element].obstacles, p[element].obstacles_count);
        if (p[element].obstacles) free(p[element].obstacles);

    }
    return 0;
}

int ZcmFusionPredictedObstacle_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmFusionPredictedObstacle* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmFusionPredictedObstacle_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmFusionPredictedObstacle_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmFusionPredictedObstacle_decode_cleanup(ZcmFusionPredictedObstacle* p)
{
    return __ZcmFusionPredictedObstacle_decode_array_cleanup(p, 1);
}

uint32_t __ZcmFusionPredictedObstacle_clone_array(const ZcmFusionPredictedObstacle* p, ZcmFusionPredictedObstacle* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int8_t_clone_array(&(p[element].obstacles_count), &(q[element].obstacles_count), 1);

        q[element].obstacles = (ZcmFusionZonePredictedObstacle*) zcm_malloc(sizeof(ZcmFusionZonePredictedObstacle) * q[element].obstacles_count);
        n += __ZcmFusionZonePredictedObstacle_clone_array(p[element].obstacles, q[element].obstacles, p[element].obstacles_count);

    }
    return n;
}

ZcmFusionPredictedObstacle* ZcmFusionPredictedObstacle_copy(const ZcmFusionPredictedObstacle* p)
{
    ZcmFusionPredictedObstacle* q = (ZcmFusionPredictedObstacle*) malloc(sizeof(ZcmFusionPredictedObstacle));
    __ZcmFusionPredictedObstacle_clone_array(p, q, 1);
    return q;
}

void ZcmFusionPredictedObstacle_destroy(ZcmFusionPredictedObstacle* p)
{
    __ZcmFusionPredictedObstacle_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmFusionPredictedObstacle_publish(zcm_t* zcm, const char* channel, const ZcmFusionPredictedObstacle* p)
{
      uint32_t max_data_size = ZcmFusionPredictedObstacle_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmFusionPredictedObstacle_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmFusionPredictedObstacle_subscription_t {
    ZcmFusionPredictedObstacle_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmFusionPredictedObstacle_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmFusionPredictedObstacle p;
    memset(&p, 0, sizeof(ZcmFusionPredictedObstacle));
    status = ZcmFusionPredictedObstacle_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmFusionPredictedObstacle!!!\n", status);
        return;
    }

    ZcmFusionPredictedObstacle_subscription_t* h = (ZcmFusionPredictedObstacle_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmFusionPredictedObstacle_decode_cleanup (&p);
}

ZcmFusionPredictedObstacle_subscription_t* ZcmFusionPredictedObstacle_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmFusionPredictedObstacle_handler_t f, void* userdata)
{
    ZcmFusionPredictedObstacle_subscription_t* n = (ZcmFusionPredictedObstacle_subscription_t*)
                       malloc(sizeof(ZcmFusionPredictedObstacle_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmFusionPredictedObstacle_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmFusionPredictedObstacle ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmFusionPredictedObstacle_unsubscribe(zcm_t* zcm, ZcmFusionPredictedObstacle_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmFusionPredictedObstacle_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

