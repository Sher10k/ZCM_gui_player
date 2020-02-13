// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmAdcModul.h"

static int __ZcmAdcModul_hash_computed;
static uint64_t __ZcmAdcModul_hash;

uint64_t __ZcmAdcModul_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmAdcModul_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmAdcModul_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x35f57d236cc8c5adLL
         + __ZcmService_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __ZcmObjectValue_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmAdcModul_get_hash(void)
{
    if (!__ZcmAdcModul_hash_computed) {
        __ZcmAdcModul_hash = (int64_t)__ZcmAdcModul_hash_recursive(NULL);
        __ZcmAdcModul_hash_computed = 1;
    }

    return __ZcmAdcModul_hash;
}

int __ZcmAdcModul_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmAdcModul* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].object_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObjectValue_encode_array(buf, offset + pos, maxlen - pos, p[element].object, p[element].object_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmAdcModul_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmAdcModul* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmAdcModul_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmAdcModul_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmAdcModul_encoded_array_size(const ZcmAdcModul* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int8_t_encoded_array_size(&(p[element].object_count), 1);

        size += __ZcmObjectValue_encoded_array_size(p[element].object, p[element].object_count);

    }
    return size;
}

uint32_t ZcmAdcModul_encoded_size(const ZcmAdcModul* p)
{
    return 8 + __ZcmAdcModul_encoded_array_size(p, 1);
}

uint32_t ZcmAdcModul_struct_size(void)
{
    return sizeof(ZcmAdcModul);
}

uint32_t ZcmAdcModul_num_fields(void)
{
    return 3;
}

int ZcmAdcModul_get_field(const ZcmAdcModul* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmAdcModul_num_fields())
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
            f->name = "object_count";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->object_count;
            return 0;
        }
        
        case 2: {
            /* ZcmObjectValue */
            f->name = "object";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObjectValue";
            f->num_dim = 1;
            f->dim_size[0] = p->object_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->object;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmAdcModul_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmAdcModul_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmAdcModul_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmAdcModul_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmAdcModul_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmAdcModul_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmAdcModul_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmAdcModul_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmAdcModul_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmAdcModul_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmAdcModul* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].object_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].object = (ZcmObjectValue*) zcm_malloc(sizeof(ZcmObjectValue) * p[element].object_count);
        thislen = __ZcmObjectValue_decode_array(buf, offset + pos, maxlen - pos, p[element].object, p[element].object_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmAdcModul_decode_array_cleanup(ZcmAdcModul* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int8_t_decode_array_cleanup(&(p[element].object_count), 1);

        __ZcmObjectValue_decode_array_cleanup(p[element].object, p[element].object_count);
        if (p[element].object) free(p[element].object);

    }
    return 0;
}

int ZcmAdcModul_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmAdcModul* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmAdcModul_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmAdcModul_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmAdcModul_decode_cleanup(ZcmAdcModul* p)
{
    return __ZcmAdcModul_decode_array_cleanup(p, 1);
}

uint32_t __ZcmAdcModul_clone_array(const ZcmAdcModul* p, ZcmAdcModul* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int8_t_clone_array(&(p[element].object_count), &(q[element].object_count), 1);

        q[element].object = (ZcmObjectValue*) zcm_malloc(sizeof(ZcmObjectValue) * q[element].object_count);
        n += __ZcmObjectValue_clone_array(p[element].object, q[element].object, p[element].object_count);

    }
    return n;
}

ZcmAdcModul* ZcmAdcModul_copy(const ZcmAdcModul* p)
{
    ZcmAdcModul* q = (ZcmAdcModul*) malloc(sizeof(ZcmAdcModul));
    __ZcmAdcModul_clone_array(p, q, 1);
    return q;
}

void ZcmAdcModul_destroy(ZcmAdcModul* p)
{
    __ZcmAdcModul_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmAdcModul_publish(zcm_t* zcm, const char* channel, const ZcmAdcModul* p)
{
      uint32_t max_data_size = ZcmAdcModul_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmAdcModul_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmAdcModul_subscription_t {
    ZcmAdcModul_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmAdcModul_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmAdcModul p;
    memset(&p, 0, sizeof(ZcmAdcModul));
    status = ZcmAdcModul_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmAdcModul!!!\n", status);
        return;
    }

    ZcmAdcModul_subscription_t* h = (ZcmAdcModul_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmAdcModul_decode_cleanup (&p);
}

ZcmAdcModul_subscription_t* ZcmAdcModul_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmAdcModul_handler_t f, void* userdata)
{
    ZcmAdcModul_subscription_t* n = (ZcmAdcModul_subscription_t*)
                       malloc(sizeof(ZcmAdcModul_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmAdcModul_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmAdcModul ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmAdcModul_unsubscribe(zcm_t* zcm, ZcmAdcModul_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmAdcModul_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
