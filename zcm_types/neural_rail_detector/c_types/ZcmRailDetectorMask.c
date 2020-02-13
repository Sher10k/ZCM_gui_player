// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmRailDetectorMask.h"

static int __ZcmRailDetectorMask_hash_computed;
static uint64_t __ZcmRailDetectorMask_hash;

uint64_t __ZcmRailDetectorMask_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmRailDetectorMask_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmRailDetectorMask_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x1cea73f019ebf30dLL
         + __ZcmService_hash_recursive(&cp)
         + __ZcmCameraCalibratingParams_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __byte_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmRailDetectorMask_get_hash(void)
{
    if (!__ZcmRailDetectorMask_hash_computed) {
        __ZcmRailDetectorMask_hash = (int64_t)__ZcmRailDetectorMask_hash_recursive(NULL);
        __ZcmRailDetectorMask_hash_computed = 1;
    }

    return __ZcmRailDetectorMask_hash;
}

int __ZcmRailDetectorMask_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRailDetectorMask* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraCalibratingParams_encode_array(buf, offset + pos, maxlen - pos, &(p[element].calibration_params), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].width), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].bytes_per_line), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].format), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].mask_size), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __byte_encode_array(buf, offset + pos, maxlen - pos, p[element].mask, p[element].mask_size);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmRailDetectorMask_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmRailDetectorMask* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmRailDetectorMask_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmRailDetectorMask_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmRailDetectorMask_encoded_array_size(const ZcmRailDetectorMask* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __ZcmCameraCalibratingParams_encoded_array_size(&(p[element].calibration_params), 1);

        size += __int32_t_encoded_array_size(&(p[element].width), 1);

        size += __int32_t_encoded_array_size(&(p[element].height), 1);

        size += __int32_t_encoded_array_size(&(p[element].bytes_per_line), 1);

        size += __string_encoded_array_size(&(p[element].format), 1);

        size += __int32_t_encoded_array_size(&(p[element].mask_size), 1);

        size += __byte_encoded_array_size(p[element].mask, p[element].mask_size);

    }
    return size;
}

uint32_t ZcmRailDetectorMask_encoded_size(const ZcmRailDetectorMask* p)
{
    return 8 + __ZcmRailDetectorMask_encoded_array_size(p, 1);
}

uint32_t ZcmRailDetectorMask_struct_size(void)
{
    return sizeof(ZcmRailDetectorMask);
}

uint32_t ZcmRailDetectorMask_num_fields(void)
{
    return 8;
}

int ZcmRailDetectorMask_get_field(const ZcmRailDetectorMask* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmRailDetectorMask_num_fields())
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
            /* ZcmCameraCalibratingParams */
            f->name = "calibration_params";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmCameraCalibratingParams";
            f->num_dim = 0;
            f->data = (void*) &p->calibration_params;
            return 0;
        }
        
        case 2: {
            f->name = "width";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->width;
            return 0;
        }
        
        case 3: {
            f->name = "height";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->height;
            return 0;
        }
        
        case 4: {
            f->name = "bytes_per_line";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->bytes_per_line;
            return 0;
        }
        
        case 5: {
            f->name = "format";
            f->type = ZCM_FIELD_STRING;
            f->typestr = "string";
            f->num_dim = 0;
            f->data = (void*) &p->format;
            return 0;
        }
        
        case 6: {
            f->name = "mask_size";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->mask_size;
            return 0;
        }
        
        case 7: {
            f->name = "mask";
            f->type = ZCM_FIELD_BYTE;
            f->typestr = "byte";
            f->num_dim = 1;
            f->dim_size[0] = p->mask_size;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->mask;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmRailDetectorMask_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmRailDetectorMask_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmRailDetectorMask_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmRailDetectorMask_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmRailDetectorMask_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmRailDetectorMask_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmRailDetectorMask_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmRailDetectorMask_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmRailDetectorMask_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmRailDetectorMask_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRailDetectorMask* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraCalibratingParams_decode_array(buf, offset + pos, maxlen - pos, &(p[element].calibration_params), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].width), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].bytes_per_line), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].format), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].mask_size), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].mask = (uint8_t*) zcm_malloc(sizeof(uint8_t) * p[element].mask_size);
        thislen = __byte_decode_array(buf, offset + pos, maxlen - pos, p[element].mask, p[element].mask_size);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmRailDetectorMask_decode_array_cleanup(ZcmRailDetectorMask* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __ZcmCameraCalibratingParams_decode_array_cleanup(&(p[element].calibration_params), 1);

        __int32_t_decode_array_cleanup(&(p[element].width), 1);

        __int32_t_decode_array_cleanup(&(p[element].height), 1);

        __int32_t_decode_array_cleanup(&(p[element].bytes_per_line), 1);

        __string_decode_array_cleanup(&(p[element].format), 1);

        __int32_t_decode_array_cleanup(&(p[element].mask_size), 1);

        __byte_decode_array_cleanup(p[element].mask, p[element].mask_size);
        if (p[element].mask) free(p[element].mask);

    }
    return 0;
}

int ZcmRailDetectorMask_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmRailDetectorMask* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmRailDetectorMask_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmRailDetectorMask_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmRailDetectorMask_decode_cleanup(ZcmRailDetectorMask* p)
{
    return __ZcmRailDetectorMask_decode_array_cleanup(p, 1);
}

uint32_t __ZcmRailDetectorMask_clone_array(const ZcmRailDetectorMask* p, ZcmRailDetectorMask* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __ZcmCameraCalibratingParams_clone_array(&(p[element].calibration_params), &(q[element].calibration_params), 1);

        n += __int32_t_clone_array(&(p[element].width), &(q[element].width), 1);

        n += __int32_t_clone_array(&(p[element].height), &(q[element].height), 1);

        n += __int32_t_clone_array(&(p[element].bytes_per_line), &(q[element].bytes_per_line), 1);

        n += __string_clone_array(&(p[element].format), &(q[element].format), 1);

        n += __int32_t_clone_array(&(p[element].mask_size), &(q[element].mask_size), 1);

        q[element].mask = (uint8_t*) zcm_malloc(sizeof(uint8_t) * q[element].mask_size);
        n += __byte_clone_array(p[element].mask, q[element].mask, p[element].mask_size);

    }
    return n;
}

ZcmRailDetectorMask* ZcmRailDetectorMask_copy(const ZcmRailDetectorMask* p)
{
    ZcmRailDetectorMask* q = (ZcmRailDetectorMask*) malloc(sizeof(ZcmRailDetectorMask));
    __ZcmRailDetectorMask_clone_array(p, q, 1);
    return q;
}

void ZcmRailDetectorMask_destroy(ZcmRailDetectorMask* p)
{
    __ZcmRailDetectorMask_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmRailDetectorMask_publish(zcm_t* zcm, const char* channel, const ZcmRailDetectorMask* p)
{
      uint32_t max_data_size = ZcmRailDetectorMask_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmRailDetectorMask_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmRailDetectorMask_subscription_t {
    ZcmRailDetectorMask_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmRailDetectorMask_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmRailDetectorMask p;
    memset(&p, 0, sizeof(ZcmRailDetectorMask));
    status = ZcmRailDetectorMask_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmRailDetectorMask!!!\n", status);
        return;
    }

    ZcmRailDetectorMask_subscription_t* h = (ZcmRailDetectorMask_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmRailDetectorMask_decode_cleanup (&p);
}

ZcmRailDetectorMask_subscription_t* ZcmRailDetectorMask_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmRailDetectorMask_handler_t f, void* userdata)
{
    ZcmRailDetectorMask_subscription_t* n = (ZcmRailDetectorMask_subscription_t*)
                       malloc(sizeof(ZcmRailDetectorMask_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmRailDetectorMask_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmRailDetectorMask ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmRailDetectorMask_unsubscribe(zcm_t* zcm, ZcmRailDetectorMask_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmRailDetectorMask_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
