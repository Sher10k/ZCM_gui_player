// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmDiscretModul.h"

static int __ZcmDiscretModul_hash_computed;
static uint64_t __ZcmDiscretModul_hash;

uint64_t __ZcmDiscretModul_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmDiscretModul_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmDiscretModul_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x2a55714c79ca3fa8LL
         + __ZcmService_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __ZcmObjectStatus_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmDiscretModul_get_hash(void)
{
    if (!__ZcmDiscretModul_hash_computed) {
        __ZcmDiscretModul_hash = (int64_t)__ZcmDiscretModul_hash_recursive(NULL);
        __ZcmDiscretModul_hash_computed = 1;
    }

    return __ZcmDiscretModul_hash;
}

int __ZcmDiscretModul_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmDiscretModul* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].object_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmObjectStatus_encode_array(buf, offset + pos, maxlen - pos, p[element].object, p[element].object_count);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].object_rw), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmDiscretModul_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmDiscretModul* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmDiscretModul_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmDiscretModul_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmDiscretModul_encoded_array_size(const ZcmDiscretModul* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int8_t_encoded_array_size(&(p[element].object_count), 1);

        size += __ZcmObjectStatus_encoded_array_size(p[element].object, p[element].object_count);

        size += __boolean_encoded_array_size(&(p[element].object_rw), 1);

    }
    return size;
}

uint32_t ZcmDiscretModul_encoded_size(const ZcmDiscretModul* p)
{
    return 8 + __ZcmDiscretModul_encoded_array_size(p, 1);
}

uint32_t ZcmDiscretModul_struct_size(void)
{
    return sizeof(ZcmDiscretModul);
}

uint32_t ZcmDiscretModul_num_fields(void)
{
    return 4;
}

int ZcmDiscretModul_get_field(const ZcmDiscretModul* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmDiscretModul_num_fields())
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
            /* ZcmObjectStatus */
            f->name = "object";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmObjectStatus";
            f->num_dim = 1;
            f->dim_size[0] = p->object_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->object;
            return 0;
        }
        
        case 3: {
            f->name = "object_rw";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->object_rw;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmDiscretModul_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmDiscretModul_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmDiscretModul_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmDiscretModul_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmDiscretModul_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmDiscretModul_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmDiscretModul_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmDiscretModul_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmDiscretModul_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmDiscretModul_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmDiscretModul* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].object_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].object = (ZcmObjectStatus*) zcm_malloc(sizeof(ZcmObjectStatus) * p[element].object_count);
        thislen = __ZcmObjectStatus_decode_array(buf, offset + pos, maxlen - pos, p[element].object, p[element].object_count);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].object_rw), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmDiscretModul_decode_array_cleanup(ZcmDiscretModul* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int8_t_decode_array_cleanup(&(p[element].object_count), 1);

        __ZcmObjectStatus_decode_array_cleanup(p[element].object, p[element].object_count);
        if (p[element].object) free(p[element].object);

        __boolean_decode_array_cleanup(&(p[element].object_rw), 1);

    }
    return 0;
}

int ZcmDiscretModul_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmDiscretModul* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmDiscretModul_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmDiscretModul_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmDiscretModul_decode_cleanup(ZcmDiscretModul* p)
{
    return __ZcmDiscretModul_decode_array_cleanup(p, 1);
}

uint32_t __ZcmDiscretModul_clone_array(const ZcmDiscretModul* p, ZcmDiscretModul* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int8_t_clone_array(&(p[element].object_count), &(q[element].object_count), 1);

        q[element].object = (ZcmObjectStatus*) zcm_malloc(sizeof(ZcmObjectStatus) * q[element].object_count);
        n += __ZcmObjectStatus_clone_array(p[element].object, q[element].object, p[element].object_count);

        n += __boolean_clone_array(&(p[element].object_rw), &(q[element].object_rw), 1);

    }
    return n;
}

ZcmDiscretModul* ZcmDiscretModul_copy(const ZcmDiscretModul* p)
{
    ZcmDiscretModul* q = (ZcmDiscretModul*) malloc(sizeof(ZcmDiscretModul));
    __ZcmDiscretModul_clone_array(p, q, 1);
    return q;
}

void ZcmDiscretModul_destroy(ZcmDiscretModul* p)
{
    __ZcmDiscretModul_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmDiscretModul_publish(zcm_t* zcm, const char* channel, const ZcmDiscretModul* p)
{
      uint32_t max_data_size = ZcmDiscretModul_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmDiscretModul_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmDiscretModul_subscription_t {
    ZcmDiscretModul_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmDiscretModul_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmDiscretModul p;
    memset(&p, 0, sizeof(ZcmDiscretModul));
    status = ZcmDiscretModul_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmDiscretModul!!!\n", status);
        return;
    }

    ZcmDiscretModul_subscription_t* h = (ZcmDiscretModul_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmDiscretModul_decode_cleanup (&p);
}

ZcmDiscretModul_subscription_t* ZcmDiscretModul_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmDiscretModul_handler_t f, void* userdata)
{
    ZcmDiscretModul_subscription_t* n = (ZcmDiscretModul_subscription_t*)
                       malloc(sizeof(ZcmDiscretModul_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmDiscretModul_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmDiscretModul ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmDiscretModul_unsubscribe(zcm_t* zcm, ZcmDiscretModul_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmDiscretModul_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
