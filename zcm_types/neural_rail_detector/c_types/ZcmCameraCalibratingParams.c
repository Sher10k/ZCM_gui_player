// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmCameraCalibratingParams.h"

static int __ZcmCameraCalibratingParams_hash_computed;
static uint64_t __ZcmCameraCalibratingParams_hash;

uint64_t __ZcmCameraCalibratingParams_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmCameraCalibratingParams_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmCameraCalibratingParams_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x836bbce6a8fe3246LL
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmCameraCalibratingParams_get_hash(void)
{
    if (!__ZcmCameraCalibratingParams_hash_computed) {
        __ZcmCameraCalibratingParams_hash = (int64_t)__ZcmCameraCalibratingParams_hash_recursive(NULL);
        __ZcmCameraCalibratingParams_hash_computed = 1;
    }

    return __ZcmCameraCalibratingParams_hash;
}

int __ZcmCameraCalibratingParams_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCameraCalibratingParams* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].cam_mtx[a], 3);
            if (thislen < 0) return thislen; else pos += thislen;
        }
        }

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].distCoeff, 5);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].rvec, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].tvec, 3);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmCameraCalibratingParams_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCameraCalibratingParams* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmCameraCalibratingParams_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmCameraCalibratingParams_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmCameraCalibratingParams_encoded_array_size(const ZcmCameraCalibratingParams* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        { int a;
        for (a = 0; a < 3; ++a) {
            size += __float_encoded_array_size(p[element].cam_mtx[a], 3);
        }
        }

        size += __float_encoded_array_size(p[element].distCoeff, 5);

        size += __float_encoded_array_size(p[element].rvec, 3);

        size += __float_encoded_array_size(p[element].tvec, 3);

    }
    return size;
}

uint32_t ZcmCameraCalibratingParams_encoded_size(const ZcmCameraCalibratingParams* p)
{
    return 8 + __ZcmCameraCalibratingParams_encoded_array_size(p, 1);
}

uint32_t ZcmCameraCalibratingParams_struct_size(void)
{
    return sizeof(ZcmCameraCalibratingParams);
}

uint32_t ZcmCameraCalibratingParams_num_fields(void)
{
    return 4;
}

int ZcmCameraCalibratingParams_get_field(const ZcmCameraCalibratingParams* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmCameraCalibratingParams_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "cam_mtx";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 2;
            f->dim_size[0] = 3;
            f->dim_size[1] = 3;
            f->dim_is_variable[0] = 0;
            f->dim_is_variable[1] = 0;
            f->data = (void*) &p->cam_mtx;
            return 0;
        }
        
        case 1: {
            f->name = "distCoeff";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = 5;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->distCoeff;
            return 0;
        }
        
        case 2: {
            f->name = "rvec";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = 3;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->rvec;
            return 0;
        }
        
        case 3: {
            f->name = "tvec";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = 3;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->tvec;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmCameraCalibratingParams_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmCameraCalibratingParams_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmCameraCalibratingParams_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmCameraCalibratingParams_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmCameraCalibratingParams_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmCameraCalibratingParams_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmCameraCalibratingParams_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmCameraCalibratingParams_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmCameraCalibratingParams_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmCameraCalibratingParams_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCameraCalibratingParams* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        { int a;
        for (a = 0; a < 3; ++a) {
            thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].cam_mtx[a], 3);
            if (thislen < 0) return thislen; else pos += thislen;
        }
        }

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].distCoeff, 5);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].rvec, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].tvec, 3);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmCameraCalibratingParams_decode_array_cleanup(ZcmCameraCalibratingParams* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        { int a;
        for (a = 0; a < 3; ++a) {
            __float_decode_array_cleanup(p[element].cam_mtx[a], 3);
        }
        }

        __float_decode_array_cleanup(p[element].distCoeff, 5);

        __float_decode_array_cleanup(p[element].rvec, 3);

        __float_decode_array_cleanup(p[element].tvec, 3);

    }
    return 0;
}

int ZcmCameraCalibratingParams_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCameraCalibratingParams* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmCameraCalibratingParams_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmCameraCalibratingParams_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmCameraCalibratingParams_decode_cleanup(ZcmCameraCalibratingParams* p)
{
    return __ZcmCameraCalibratingParams_decode_array_cleanup(p, 1);
}

uint32_t __ZcmCameraCalibratingParams_clone_array(const ZcmCameraCalibratingParams* p, ZcmCameraCalibratingParams* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        { int a;
        for (a = 0; a < 3; ++a) {
            n += __float_clone_array(p[element].cam_mtx[a], q[element].cam_mtx[a], 3);
        }
        }

        n += __float_clone_array(p[element].distCoeff, q[element].distCoeff, 5);

        n += __float_clone_array(p[element].rvec, q[element].rvec, 3);

        n += __float_clone_array(p[element].tvec, q[element].tvec, 3);

    }
    return n;
}

ZcmCameraCalibratingParams* ZcmCameraCalibratingParams_copy(const ZcmCameraCalibratingParams* p)
{
    ZcmCameraCalibratingParams* q = (ZcmCameraCalibratingParams*) malloc(sizeof(ZcmCameraCalibratingParams));
    __ZcmCameraCalibratingParams_clone_array(p, q, 1);
    return q;
}

void ZcmCameraCalibratingParams_destroy(ZcmCameraCalibratingParams* p)
{
    __ZcmCameraCalibratingParams_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmCameraCalibratingParams_publish(zcm_t* zcm, const char* channel, const ZcmCameraCalibratingParams* p)
{
      uint32_t max_data_size = ZcmCameraCalibratingParams_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmCameraCalibratingParams_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmCameraCalibratingParams_subscription_t {
    ZcmCameraCalibratingParams_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmCameraCalibratingParams_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmCameraCalibratingParams p;
    memset(&p, 0, sizeof(ZcmCameraCalibratingParams));
    status = ZcmCameraCalibratingParams_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmCameraCalibratingParams!!!\n", status);
        return;
    }

    ZcmCameraCalibratingParams_subscription_t* h = (ZcmCameraCalibratingParams_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmCameraCalibratingParams_decode_cleanup (&p);
}

ZcmCameraCalibratingParams_subscription_t* ZcmCameraCalibratingParams_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmCameraCalibratingParams_handler_t f, void* userdata)
{
    ZcmCameraCalibratingParams_subscription_t* n = (ZcmCameraCalibratingParams_subscription_t*)
                       malloc(sizeof(ZcmCameraCalibratingParams_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmCameraCalibratingParams_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmCameraCalibratingParams ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmCameraCalibratingParams_unsubscribe(zcm_t* zcm, ZcmCameraCalibratingParams_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmCameraCalibratingParams_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

