// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmCamWDSkyline.h"

static int __ZcmCamWDSkyline_hash_computed;
static uint64_t __ZcmCamWDSkyline_hash;

uint64_t __ZcmCamWDSkyline_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmCamWDSkyline_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmCamWDSkyline_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xf0d1cb609daa9de8LL
         + __ZcmService_hash_recursive(&cp)
         + __ZcmCameraBaslerImagePresentation_hash_recursive(&cp)
         + __ZcmCameraBaslerImagePresentation_hash_recursive(&cp)
         + __ZcmCamWDSkylinePoint_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmCamWDSkylinePoint_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmCamWDSkyline_get_hash(void)
{
    if (!__ZcmCamWDSkyline_hash_computed) {
        __ZcmCamWDSkyline_hash = (int64_t)__ZcmCamWDSkyline_hash_recursive(NULL);
        __ZcmCamWDSkyline_hash_computed = 1;
    }

    return __ZcmCamWDSkyline_hash;
}

int __ZcmCamWDSkyline_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCamWDSkyline* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraBaslerImagePresentation_encode_array(buf, offset + pos, maxlen - pos, &(p[element].top_image), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraBaslerImagePresentation_encode_array(buf, offset + pos, maxlen - pos, &(p[element].bottom_image), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCamWDSkylinePoint_encode_array(buf, offset + pos, maxlen - pos, p[element].sky_average_line, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].point_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCamWDSkylinePoint_encode_array(buf, offset + pos, maxlen - pos, p[element].sky_poly_line, p[element].point_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmCamWDSkyline_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmCamWDSkyline* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmCamWDSkyline_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmCamWDSkyline_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmCamWDSkyline_encoded_array_size(const ZcmCamWDSkyline* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __ZcmCameraBaslerImagePresentation_encoded_array_size(&(p[element].top_image), 1);

        size += __ZcmCameraBaslerImagePresentation_encoded_array_size(&(p[element].bottom_image), 1);

        size += __ZcmCamWDSkylinePoint_encoded_array_size(p[element].sky_average_line, 2);

        size += __int32_t_encoded_array_size(&(p[element].point_count), 1);

        size += __ZcmCamWDSkylinePoint_encoded_array_size(p[element].sky_poly_line, p[element].point_count);

    }
    return size;
}

uint32_t ZcmCamWDSkyline_encoded_size(const ZcmCamWDSkyline* p)
{
    return 8 + __ZcmCamWDSkyline_encoded_array_size(p, 1);
}

uint32_t ZcmCamWDSkyline_struct_size(void)
{
    return sizeof(ZcmCamWDSkyline);
}

uint32_t ZcmCamWDSkyline_num_fields(void)
{
    return 6;
}

int ZcmCamWDSkyline_get_field(const ZcmCamWDSkyline* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmCamWDSkyline_num_fields())
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
            /* ZcmCameraBaslerImagePresentation */
            f->name = "top_image";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmCameraBaslerImagePresentation";
            f->num_dim = 0;
            f->data = (void*) &p->top_image;
            return 0;
        }
        
        case 2: {
            /* ZcmCameraBaslerImagePresentation */
            f->name = "bottom_image";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmCameraBaslerImagePresentation";
            f->num_dim = 0;
            f->data = (void*) &p->bottom_image;
            return 0;
        }
        
        case 3: {
            /* ZcmCamWDSkylinePoint */
            f->name = "sky_average_line";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmCamWDSkylinePoint";
            f->num_dim = 1;
            f->dim_size[0] = 2;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->sky_average_line;
            return 0;
        }
        
        case 4: {
            f->name = "point_count";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->point_count;
            return 0;
        }
        
        case 5: {
            /* ZcmCamWDSkylinePoint */
            f->name = "sky_poly_line";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmCamWDSkylinePoint";
            f->num_dim = 1;
            f->dim_size[0] = p->point_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->sky_poly_line;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmCamWDSkyline_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmCamWDSkyline_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmCamWDSkyline_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmCamWDSkyline_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmCamWDSkyline_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmCamWDSkyline_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmCamWDSkyline_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmCamWDSkyline_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmCamWDSkyline_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmCamWDSkyline_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCamWDSkyline* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraBaslerImagePresentation_decode_array(buf, offset + pos, maxlen - pos, &(p[element].top_image), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCameraBaslerImagePresentation_decode_array(buf, offset + pos, maxlen - pos, &(p[element].bottom_image), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmCamWDSkylinePoint_decode_array(buf, offset + pos, maxlen - pos, p[element].sky_average_line, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].point_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].sky_poly_line = (ZcmCamWDSkylinePoint*) zcm_malloc(sizeof(ZcmCamWDSkylinePoint) * p[element].point_count);
        thislen = __ZcmCamWDSkylinePoint_decode_array(buf, offset + pos, maxlen - pos, p[element].sky_poly_line, p[element].point_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmCamWDSkyline_decode_array_cleanup(ZcmCamWDSkyline* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __ZcmCameraBaslerImagePresentation_decode_array_cleanup(&(p[element].top_image), 1);

        __ZcmCameraBaslerImagePresentation_decode_array_cleanup(&(p[element].bottom_image), 1);

        __ZcmCamWDSkylinePoint_decode_array_cleanup(p[element].sky_average_line, 2);

        __int32_t_decode_array_cleanup(&(p[element].point_count), 1);

        __ZcmCamWDSkylinePoint_decode_array_cleanup(p[element].sky_poly_line, p[element].point_count);
        if (p[element].sky_poly_line) free(p[element].sky_poly_line);

    }
    return 0;
}

int ZcmCamWDSkyline_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmCamWDSkyline* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmCamWDSkyline_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmCamWDSkyline_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmCamWDSkyline_decode_cleanup(ZcmCamWDSkyline* p)
{
    return __ZcmCamWDSkyline_decode_array_cleanup(p, 1);
}

uint32_t __ZcmCamWDSkyline_clone_array(const ZcmCamWDSkyline* p, ZcmCamWDSkyline* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __ZcmCameraBaslerImagePresentation_clone_array(&(p[element].top_image), &(q[element].top_image), 1);

        n += __ZcmCameraBaslerImagePresentation_clone_array(&(p[element].bottom_image), &(q[element].bottom_image), 1);

        n += __ZcmCamWDSkylinePoint_clone_array(p[element].sky_average_line, q[element].sky_average_line, 2);

        n += __int32_t_clone_array(&(p[element].point_count), &(q[element].point_count), 1);

        q[element].sky_poly_line = (ZcmCamWDSkylinePoint*) zcm_malloc(sizeof(ZcmCamWDSkylinePoint) * q[element].point_count);
        n += __ZcmCamWDSkylinePoint_clone_array(p[element].sky_poly_line, q[element].sky_poly_line, p[element].point_count);

    }
    return n;
}

ZcmCamWDSkyline* ZcmCamWDSkyline_copy(const ZcmCamWDSkyline* p)
{
    ZcmCamWDSkyline* q = (ZcmCamWDSkyline*) malloc(sizeof(ZcmCamWDSkyline));
    __ZcmCamWDSkyline_clone_array(p, q, 1);
    return q;
}

void ZcmCamWDSkyline_destroy(ZcmCamWDSkyline* p)
{
    __ZcmCamWDSkyline_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmCamWDSkyline_publish(zcm_t* zcm, const char* channel, const ZcmCamWDSkyline* p)
{
      uint32_t max_data_size = ZcmCamWDSkyline_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmCamWDSkyline_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmCamWDSkyline_subscription_t {
    ZcmCamWDSkyline_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmCamWDSkyline_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmCamWDSkyline p;
    memset(&p, 0, sizeof(ZcmCamWDSkyline));
    status = ZcmCamWDSkyline_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmCamWDSkyline!!!\n", status);
        return;
    }

    ZcmCamWDSkyline_subscription_t* h = (ZcmCamWDSkyline_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmCamWDSkyline_decode_cleanup (&p);
}

ZcmCamWDSkyline_subscription_t* ZcmCamWDSkyline_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmCamWDSkyline_handler_t f, void* userdata)
{
    ZcmCamWDSkyline_subscription_t* n = (ZcmCamWDSkyline_subscription_t*)
                       malloc(sizeof(ZcmCamWDSkyline_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmCamWDSkyline_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmCamWDSkyline ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmCamWDSkyline_unsubscribe(zcm_t* zcm, ZcmCamWDSkyline_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmCamWDSkyline_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

