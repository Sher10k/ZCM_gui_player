// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmStereoPairFoundedObstacles.h"

static int __ZcmStereoPairFoundedObstacles_hash_computed;
static uint64_t __ZcmStereoPairFoundedObstacles_hash;

uint64_t __ZcmStereoPairFoundedObstacles_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmStereoPairFoundedObstacles_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmStereoPairFoundedObstacles_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x588b10b81047736eLL
         + __ZcmService_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmStereoPairObstacleObject_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmStereoPairFoundedObstacles_get_hash(void)
{
    if (!__ZcmStereoPairFoundedObstacles_hash_computed) {
        __ZcmStereoPairFoundedObstacles_hash = (int64_t)__ZcmStereoPairFoundedObstacles_hash_recursive(NULL);
        __ZcmStereoPairFoundedObstacles_hash_computed = 1;
    }

    return __ZcmStereoPairFoundedObstacles_hash;
}

int __ZcmStereoPairFoundedObstacles_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoPairFoundedObstacles* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmStereoPairObstacleObject_encode_array(buf, offset + pos, maxlen - pos, p[element].obstacles, p[element].count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmStereoPairFoundedObstacles_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoPairFoundedObstacles* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoPairFoundedObstacles_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmStereoPairFoundedObstacles_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmStereoPairFoundedObstacles_encoded_array_size(const ZcmStereoPairFoundedObstacles* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int32_t_encoded_array_size(&(p[element].count), 1);

        size += __ZcmStereoPairObstacleObject_encoded_array_size(p[element].obstacles, p[element].count);

    }
    return size;
}

uint32_t ZcmStereoPairFoundedObstacles_encoded_size(const ZcmStereoPairFoundedObstacles* p)
{
    return 8 + __ZcmStereoPairFoundedObstacles_encoded_array_size(p, 1);
}

uint32_t ZcmStereoPairFoundedObstacles_struct_size(void)
{
    return sizeof(ZcmStereoPairFoundedObstacles);
}

uint32_t ZcmStereoPairFoundedObstacles_num_fields(void)
{
    return 3;
}

int ZcmStereoPairFoundedObstacles_get_field(const ZcmStereoPairFoundedObstacles* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmStereoPairFoundedObstacles_num_fields())
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
            f->name = "count";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->count;
            return 0;
        }
        
        case 2: {
            /* ZcmStereoPairObstacleObject */
            f->name = "obstacles";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmStereoPairObstacleObject";
            f->num_dim = 1;
            f->dim_size[0] = p->count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->obstacles;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmStereoPairFoundedObstacles_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmStereoPairFoundedObstacles_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmStereoPairFoundedObstacles_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmStereoPairFoundedObstacles_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmStereoPairFoundedObstacles_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmStereoPairFoundedObstacles_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmStereoPairFoundedObstacles_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmStereoPairFoundedObstacles_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmStereoPairFoundedObstacles_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmStereoPairFoundedObstacles_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoPairFoundedObstacles* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].obstacles = (ZcmStereoPairObstacleObject*) zcm_malloc(sizeof(ZcmStereoPairObstacleObject) * p[element].count);
        thislen = __ZcmStereoPairObstacleObject_decode_array(buf, offset + pos, maxlen - pos, p[element].obstacles, p[element].count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmStereoPairFoundedObstacles_decode_array_cleanup(ZcmStereoPairFoundedObstacles* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int32_t_decode_array_cleanup(&(p[element].count), 1);

        __ZcmStereoPairObstacleObject_decode_array_cleanup(p[element].obstacles, p[element].count);
        if (p[element].obstacles) free(p[element].obstacles);

    }
    return 0;
}

int ZcmStereoPairFoundedObstacles_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoPairFoundedObstacles* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoPairFoundedObstacles_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmStereoPairFoundedObstacles_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmStereoPairFoundedObstacles_decode_cleanup(ZcmStereoPairFoundedObstacles* p)
{
    return __ZcmStereoPairFoundedObstacles_decode_array_cleanup(p, 1);
}

uint32_t __ZcmStereoPairFoundedObstacles_clone_array(const ZcmStereoPairFoundedObstacles* p, ZcmStereoPairFoundedObstacles* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int32_t_clone_array(&(p[element].count), &(q[element].count), 1);

        q[element].obstacles = (ZcmStereoPairObstacleObject*) zcm_malloc(sizeof(ZcmStereoPairObstacleObject) * q[element].count);
        n += __ZcmStereoPairObstacleObject_clone_array(p[element].obstacles, q[element].obstacles, p[element].count);

    }
    return n;
}

ZcmStereoPairFoundedObstacles* ZcmStereoPairFoundedObstacles_copy(const ZcmStereoPairFoundedObstacles* p)
{
    ZcmStereoPairFoundedObstacles* q = (ZcmStereoPairFoundedObstacles*) malloc(sizeof(ZcmStereoPairFoundedObstacles));
    __ZcmStereoPairFoundedObstacles_clone_array(p, q, 1);
    return q;
}

void ZcmStereoPairFoundedObstacles_destroy(ZcmStereoPairFoundedObstacles* p)
{
    __ZcmStereoPairFoundedObstacles_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmStereoPairFoundedObstacles_publish(zcm_t* zcm, const char* channel, const ZcmStereoPairFoundedObstacles* p)
{
      uint32_t max_data_size = ZcmStereoPairFoundedObstacles_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmStereoPairFoundedObstacles_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmStereoPairFoundedObstacles_subscription_t {
    ZcmStereoPairFoundedObstacles_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmStereoPairFoundedObstacles_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmStereoPairFoundedObstacles p;
    memset(&p, 0, sizeof(ZcmStereoPairFoundedObstacles));
    status = ZcmStereoPairFoundedObstacles_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmStereoPairFoundedObstacles!!!\n", status);
        return;
    }

    ZcmStereoPairFoundedObstacles_subscription_t* h = (ZcmStereoPairFoundedObstacles_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmStereoPairFoundedObstacles_decode_cleanup (&p);
}

ZcmStereoPairFoundedObstacles_subscription_t* ZcmStereoPairFoundedObstacles_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmStereoPairFoundedObstacles_handler_t f, void* userdata)
{
    ZcmStereoPairFoundedObstacles_subscription_t* n = (ZcmStereoPairFoundedObstacles_subscription_t*)
                       malloc(sizeof(ZcmStereoPairFoundedObstacles_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmStereoPairFoundedObstacles_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmStereoPairFoundedObstacles ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmStereoPairFoundedObstacles_unsubscribe(zcm_t* zcm, ZcmStereoPairFoundedObstacles_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmStereoPairFoundedObstacles_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

