// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmObstacleDetectorPoint2D.h"

static int __ZcmObstacleDetectorPoint2D_hash_computed;
static uint64_t __ZcmObstacleDetectorPoint2D_hash;

uint64_t __ZcmObstacleDetectorPoint2D_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmObstacleDetectorPoint2D_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmObstacleDetectorPoint2D_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xc393874307e7ecbcLL
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmObstacleDetectorPoint2D_get_hash(void)
{
    if (!__ZcmObstacleDetectorPoint2D_hash_computed) {
        __ZcmObstacleDetectorPoint2D_hash = (int64_t)__ZcmObstacleDetectorPoint2D_hash_recursive(NULL);
        __ZcmObstacleDetectorPoint2D_hash_computed = 1;
    }

    return __ZcmObstacleDetectorPoint2D_hash;
}

int __ZcmObstacleDetectorPoint2D_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleDetectorPoint2D* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmObstacleDetectorPoint2D_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleDetectorPoint2D* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleDetectorPoint2D_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmObstacleDetectorPoint2D_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmObstacleDetectorPoint2D_encoded_array_size(const ZcmObstacleDetectorPoint2D* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __double_encoded_array_size(&(p[element].x), 1);

        size += __double_encoded_array_size(&(p[element].y), 1);

    }
    return size;
}

uint32_t ZcmObstacleDetectorPoint2D_encoded_size(const ZcmObstacleDetectorPoint2D* p)
{
    return 8 + __ZcmObstacleDetectorPoint2D_encoded_array_size(p, 1);
}

uint32_t ZcmObstacleDetectorPoint2D_struct_size(void)
{
    return sizeof(ZcmObstacleDetectorPoint2D);
}

uint32_t ZcmObstacleDetectorPoint2D_num_fields(void)
{
    return 2;
}

int ZcmObstacleDetectorPoint2D_get_field(const ZcmObstacleDetectorPoint2D* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmObstacleDetectorPoint2D_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "x";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->x;
            return 0;
        }
        
        case 1: {
            f->name = "y";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->y;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmObstacleDetectorPoint2D_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmObstacleDetectorPoint2D_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmObstacleDetectorPoint2D_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmObstacleDetectorPoint2D_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmObstacleDetectorPoint2D_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmObstacleDetectorPoint2D_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmObstacleDetectorPoint2D_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmObstacleDetectorPoint2D_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmObstacleDetectorPoint2D_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmObstacleDetectorPoint2D_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleDetectorPoint2D* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmObstacleDetectorPoint2D_decode_array_cleanup(ZcmObstacleDetectorPoint2D* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __double_decode_array_cleanup(&(p[element].x), 1);

        __double_decode_array_cleanup(&(p[element].y), 1);

    }
    return 0;
}

int ZcmObstacleDetectorPoint2D_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleDetectorPoint2D* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleDetectorPoint2D_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmObstacleDetectorPoint2D_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmObstacleDetectorPoint2D_decode_cleanup(ZcmObstacleDetectorPoint2D* p)
{
    return __ZcmObstacleDetectorPoint2D_decode_array_cleanup(p, 1);
}

uint32_t __ZcmObstacleDetectorPoint2D_clone_array(const ZcmObstacleDetectorPoint2D* p, ZcmObstacleDetectorPoint2D* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __double_clone_array(&(p[element].x), &(q[element].x), 1);

        n += __double_clone_array(&(p[element].y), &(q[element].y), 1);

    }
    return n;
}

ZcmObstacleDetectorPoint2D* ZcmObstacleDetectorPoint2D_copy(const ZcmObstacleDetectorPoint2D* p)
{
    ZcmObstacleDetectorPoint2D* q = (ZcmObstacleDetectorPoint2D*) malloc(sizeof(ZcmObstacleDetectorPoint2D));
    __ZcmObstacleDetectorPoint2D_clone_array(p, q, 1);
    return q;
}

void ZcmObstacleDetectorPoint2D_destroy(ZcmObstacleDetectorPoint2D* p)
{
    __ZcmObstacleDetectorPoint2D_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmObstacleDetectorPoint2D_publish(zcm_t* zcm, const char* channel, const ZcmObstacleDetectorPoint2D* p)
{
      uint32_t max_data_size = ZcmObstacleDetectorPoint2D_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmObstacleDetectorPoint2D_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmObstacleDetectorPoint2D_subscription_t {
    ZcmObstacleDetectorPoint2D_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmObstacleDetectorPoint2D_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmObstacleDetectorPoint2D p;
    memset(&p, 0, sizeof(ZcmObstacleDetectorPoint2D));
    status = ZcmObstacleDetectorPoint2D_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmObstacleDetectorPoint2D!!!\n", status);
        return;
    }

    ZcmObstacleDetectorPoint2D_subscription_t* h = (ZcmObstacleDetectorPoint2D_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmObstacleDetectorPoint2D_decode_cleanup (&p);
}

ZcmObstacleDetectorPoint2D_subscription_t* ZcmObstacleDetectorPoint2D_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmObstacleDetectorPoint2D_handler_t f, void* userdata)
{
    ZcmObstacleDetectorPoint2D_subscription_t* n = (ZcmObstacleDetectorPoint2D_subscription_t*)
                       malloc(sizeof(ZcmObstacleDetectorPoint2D_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmObstacleDetectorPoint2D_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmObstacleDetectorPoint2D ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmObstacleDetectorPoint2D_unsubscribe(zcm_t* zcm, ZcmObstacleDetectorPoint2D_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmObstacleDetectorPoint2D_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

