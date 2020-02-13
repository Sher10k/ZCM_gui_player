// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmStereoDisparities.h"

static int __ZcmStereoDisparities_hash_computed;
static uint64_t __ZcmStereoDisparities_hash;

uint64_t __ZcmStereoDisparities_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmStereoDisparities_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmStereoDisparities_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x09fad58de8753f14LL
         + __ZcmService_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmStereoPairPoint3D_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmStereoDisparities_get_hash(void)
{
    if (!__ZcmStereoDisparities_hash_computed) {
        __ZcmStereoDisparities_hash = (int64_t)__ZcmStereoDisparities_hash_recursive(NULL);
        __ZcmStereoDisparities_hash_computed = 1;
    }

    return __ZcmStereoDisparities_hash;
}

int __ZcmStereoDisparities_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoDisparities* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].max_disparity), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmStereoPairPoint3D_encode_array(buf, offset + pos, maxlen - pos, p[element].disparities_points, p[element].max_disparity);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmStereoDisparities_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoDisparities* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoDisparities_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmStereoDisparities_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmStereoDisparities_encoded_array_size(const ZcmStereoDisparities* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int32_t_encoded_array_size(&(p[element].max_disparity), 1);

        size += __ZcmStereoPairPoint3D_encoded_array_size(p[element].disparities_points, p[element].max_disparity);

    }
    return size;
}

uint32_t ZcmStereoDisparities_encoded_size(const ZcmStereoDisparities* p)
{
    return 8 + __ZcmStereoDisparities_encoded_array_size(p, 1);
}

uint32_t ZcmStereoDisparities_struct_size(void)
{
    return sizeof(ZcmStereoDisparities);
}

uint32_t ZcmStereoDisparities_num_fields(void)
{
    return 3;
}

int ZcmStereoDisparities_get_field(const ZcmStereoDisparities* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmStereoDisparities_num_fields())
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
            f->name = "max_disparity";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->max_disparity;
            return 0;
        }
        
        case 2: {
            /* ZcmStereoPairPoint3D */
            f->name = "disparities_points";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmStereoPairPoint3D";
            f->num_dim = 1;
            f->dim_size[0] = p->max_disparity;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->disparities_points;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmStereoDisparities_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmStereoDisparities_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmStereoDisparities_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmStereoDisparities_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmStereoDisparities_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmStereoDisparities_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmStereoDisparities_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmStereoDisparities_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmStereoDisparities_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmStereoDisparities_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoDisparities* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].max_disparity), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].disparities_points = (ZcmStereoPairPoint3D*) zcm_malloc(sizeof(ZcmStereoPairPoint3D) * p[element].max_disparity);
        thislen = __ZcmStereoPairPoint3D_decode_array(buf, offset + pos, maxlen - pos, p[element].disparities_points, p[element].max_disparity);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmStereoDisparities_decode_array_cleanup(ZcmStereoDisparities* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int32_t_decode_array_cleanup(&(p[element].max_disparity), 1);

        __ZcmStereoPairPoint3D_decode_array_cleanup(p[element].disparities_points, p[element].max_disparity);
        if (p[element].disparities_points) free(p[element].disparities_points);

    }
    return 0;
}

int ZcmStereoDisparities_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoDisparities* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoDisparities_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmStereoDisparities_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmStereoDisparities_decode_cleanup(ZcmStereoDisparities* p)
{
    return __ZcmStereoDisparities_decode_array_cleanup(p, 1);
}

uint32_t __ZcmStereoDisparities_clone_array(const ZcmStereoDisparities* p, ZcmStereoDisparities* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int32_t_clone_array(&(p[element].max_disparity), &(q[element].max_disparity), 1);

        q[element].disparities_points = (ZcmStereoPairPoint3D*) zcm_malloc(sizeof(ZcmStereoPairPoint3D) * q[element].max_disparity);
        n += __ZcmStereoPairPoint3D_clone_array(p[element].disparities_points, q[element].disparities_points, p[element].max_disparity);

    }
    return n;
}

ZcmStereoDisparities* ZcmStereoDisparities_copy(const ZcmStereoDisparities* p)
{
    ZcmStereoDisparities* q = (ZcmStereoDisparities*) malloc(sizeof(ZcmStereoDisparities));
    __ZcmStereoDisparities_clone_array(p, q, 1);
    return q;
}

void ZcmStereoDisparities_destroy(ZcmStereoDisparities* p)
{
    __ZcmStereoDisparities_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmStereoDisparities_publish(zcm_t* zcm, const char* channel, const ZcmStereoDisparities* p)
{
      uint32_t max_data_size = ZcmStereoDisparities_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmStereoDisparities_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmStereoDisparities_subscription_t {
    ZcmStereoDisparities_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmStereoDisparities_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmStereoDisparities p;
    memset(&p, 0, sizeof(ZcmStereoDisparities));
    status = ZcmStereoDisparities_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmStereoDisparities!!!\n", status);
        return;
    }

    ZcmStereoDisparities_subscription_t* h = (ZcmStereoDisparities_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmStereoDisparities_decode_cleanup (&p);
}

ZcmStereoDisparities_subscription_t* ZcmStereoDisparities_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmStereoDisparities_handler_t f, void* userdata)
{
    ZcmStereoDisparities_subscription_t* n = (ZcmStereoDisparities_subscription_t*)
                       malloc(sizeof(ZcmStereoDisparities_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmStereoDisparities_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmStereoDisparities ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmStereoDisparities_unsubscribe(zcm_t* zcm, ZcmStereoDisparities_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmStereoDisparities_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

