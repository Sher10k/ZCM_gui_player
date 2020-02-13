// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmTrackDetectTrackPoint.h"

static int __ZcmTrackDetectTrackPoint_hash_computed;
static uint64_t __ZcmTrackDetectTrackPoint_hash;

uint64_t __ZcmTrackDetectTrackPoint_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmTrackDetectTrackPoint_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmTrackDetectTrackPoint_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xc877b7319396d3faLL
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmTrackDetectTrackPoint_get_hash(void)
{
    if (!__ZcmTrackDetectTrackPoint_hash_computed) {
        __ZcmTrackDetectTrackPoint_hash = (int64_t)__ZcmTrackDetectTrackPoint_hash_recursive(NULL);
        __ZcmTrackDetectTrackPoint_hash_computed = 1;
    }

    return __ZcmTrackDetectTrackPoint_hash;
}

int __ZcmTrackDetectTrackPoint_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTrackPoint* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmTrackDetectTrackPoint_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTrackPoint* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmTrackDetectTrackPoint_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmTrackDetectTrackPoint_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmTrackDetectTrackPoint_encoded_array_size(const ZcmTrackDetectTrackPoint* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __float_encoded_array_size(&(p[element].x), 1);

        size += __float_encoded_array_size(&(p[element].y), 1);

    }
    return size;
}

uint32_t ZcmTrackDetectTrackPoint_encoded_size(const ZcmTrackDetectTrackPoint* p)
{
    return 8 + __ZcmTrackDetectTrackPoint_encoded_array_size(p, 1);
}

uint32_t ZcmTrackDetectTrackPoint_struct_size(void)
{
    return sizeof(ZcmTrackDetectTrackPoint);
}

uint32_t ZcmTrackDetectTrackPoint_num_fields(void)
{
    return 2;
}

int ZcmTrackDetectTrackPoint_get_field(const ZcmTrackDetectTrackPoint* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmTrackDetectTrackPoint_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "x";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->x;
            return 0;
        }
        
        case 1: {
            f->name = "y";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->y;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmTrackDetectTrackPoint_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmTrackDetectTrackPoint_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmTrackDetectTrackPoint_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmTrackDetectTrackPoint_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmTrackDetectTrackPoint_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmTrackDetectTrackPoint_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmTrackDetectTrackPoint_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmTrackDetectTrackPoint_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmTrackDetectTrackPoint_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmTrackDetectTrackPoint_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTrackPoint* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmTrackDetectTrackPoint_decode_array_cleanup(ZcmTrackDetectTrackPoint* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __float_decode_array_cleanup(&(p[element].x), 1);

        __float_decode_array_cleanup(&(p[element].y), 1);

    }
    return 0;
}

int ZcmTrackDetectTrackPoint_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTrackPoint* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmTrackDetectTrackPoint_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmTrackDetectTrackPoint_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmTrackDetectTrackPoint_decode_cleanup(ZcmTrackDetectTrackPoint* p)
{
    return __ZcmTrackDetectTrackPoint_decode_array_cleanup(p, 1);
}

uint32_t __ZcmTrackDetectTrackPoint_clone_array(const ZcmTrackDetectTrackPoint* p, ZcmTrackDetectTrackPoint* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __float_clone_array(&(p[element].x), &(q[element].x), 1);

        n += __float_clone_array(&(p[element].y), &(q[element].y), 1);

    }
    return n;
}

ZcmTrackDetectTrackPoint* ZcmTrackDetectTrackPoint_copy(const ZcmTrackDetectTrackPoint* p)
{
    ZcmTrackDetectTrackPoint* q = (ZcmTrackDetectTrackPoint*) malloc(sizeof(ZcmTrackDetectTrackPoint));
    __ZcmTrackDetectTrackPoint_clone_array(p, q, 1);
    return q;
}

void ZcmTrackDetectTrackPoint_destroy(ZcmTrackDetectTrackPoint* p)
{
    __ZcmTrackDetectTrackPoint_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmTrackDetectTrackPoint_publish(zcm_t* zcm, const char* channel, const ZcmTrackDetectTrackPoint* p)
{
      uint32_t max_data_size = ZcmTrackDetectTrackPoint_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmTrackDetectTrackPoint_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmTrackDetectTrackPoint_subscription_t {
    ZcmTrackDetectTrackPoint_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmTrackDetectTrackPoint_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmTrackDetectTrackPoint p;
    memset(&p, 0, sizeof(ZcmTrackDetectTrackPoint));
    status = ZcmTrackDetectTrackPoint_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmTrackDetectTrackPoint!!!\n", status);
        return;
    }

    ZcmTrackDetectTrackPoint_subscription_t* h = (ZcmTrackDetectTrackPoint_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmTrackDetectTrackPoint_decode_cleanup (&p);
}

ZcmTrackDetectTrackPoint_subscription_t* ZcmTrackDetectTrackPoint_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmTrackDetectTrackPoint_handler_t f, void* userdata)
{
    ZcmTrackDetectTrackPoint_subscription_t* n = (ZcmTrackDetectTrackPoint_subscription_t*)
                       malloc(sizeof(ZcmTrackDetectTrackPoint_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmTrackDetectTrackPoint_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmTrackDetectTrackPoint ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmTrackDetectTrackPoint_unsubscribe(zcm_t* zcm, ZcmTrackDetectTrackPoint_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmTrackDetectTrackPoint_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

