// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmObstacleLocalCoordinates.h"

static int __ZcmObstacleLocalCoordinates_hash_computed;
static uint64_t __ZcmObstacleLocalCoordinates_hash;

uint64_t __ZcmObstacleLocalCoordinates_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmObstacleLocalCoordinates_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmObstacleLocalCoordinates_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xa185a87460cf139bLL
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmObstacleLocalCoordinates_get_hash(void)
{
    if (!__ZcmObstacleLocalCoordinates_hash_computed) {
        __ZcmObstacleLocalCoordinates_hash = (int64_t)__ZcmObstacleLocalCoordinates_hash_recursive(NULL);
        __ZcmObstacleLocalCoordinates_hash_computed = 1;
    }

    return __ZcmObstacleLocalCoordinates_hash;
}

int __ZcmObstacleLocalCoordinates_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleLocalCoordinates* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].z), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmObstacleLocalCoordinates_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleLocalCoordinates* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleLocalCoordinates_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmObstacleLocalCoordinates_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmObstacleLocalCoordinates_encoded_array_size(const ZcmObstacleLocalCoordinates* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __double_encoded_array_size(&(p[element].x), 1);

        size += __double_encoded_array_size(&(p[element].y), 1);

        size += __double_encoded_array_size(&(p[element].z), 1);

    }
    return size;
}

uint32_t ZcmObstacleLocalCoordinates_encoded_size(const ZcmObstacleLocalCoordinates* p)
{
    return 8 + __ZcmObstacleLocalCoordinates_encoded_array_size(p, 1);
}

uint32_t ZcmObstacleLocalCoordinates_struct_size(void)
{
    return sizeof(ZcmObstacleLocalCoordinates);
}

uint32_t ZcmObstacleLocalCoordinates_num_fields(void)
{
    return 3;
}

int ZcmObstacleLocalCoordinates_get_field(const ZcmObstacleLocalCoordinates* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmObstacleLocalCoordinates_num_fields())
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
        
        case 2: {
            f->name = "z";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->z;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmObstacleLocalCoordinates_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmObstacleLocalCoordinates_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmObstacleLocalCoordinates_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmObstacleLocalCoordinates_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmObstacleLocalCoordinates_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmObstacleLocalCoordinates_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmObstacleLocalCoordinates_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmObstacleLocalCoordinates_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmObstacleLocalCoordinates_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmObstacleLocalCoordinates_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleLocalCoordinates* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].x), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].y), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].z), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmObstacleLocalCoordinates_decode_array_cleanup(ZcmObstacleLocalCoordinates* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __double_decode_array_cleanup(&(p[element].x), 1);

        __double_decode_array_cleanup(&(p[element].y), 1);

        __double_decode_array_cleanup(&(p[element].z), 1);

    }
    return 0;
}

int ZcmObstacleLocalCoordinates_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleLocalCoordinates* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleLocalCoordinates_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmObstacleLocalCoordinates_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmObstacleLocalCoordinates_decode_cleanup(ZcmObstacleLocalCoordinates* p)
{
    return __ZcmObstacleLocalCoordinates_decode_array_cleanup(p, 1);
}

uint32_t __ZcmObstacleLocalCoordinates_clone_array(const ZcmObstacleLocalCoordinates* p, ZcmObstacleLocalCoordinates* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __double_clone_array(&(p[element].x), &(q[element].x), 1);

        n += __double_clone_array(&(p[element].y), &(q[element].y), 1);

        n += __double_clone_array(&(p[element].z), &(q[element].z), 1);

    }
    return n;
}

ZcmObstacleLocalCoordinates* ZcmObstacleLocalCoordinates_copy(const ZcmObstacleLocalCoordinates* p)
{
    ZcmObstacleLocalCoordinates* q = (ZcmObstacleLocalCoordinates*) malloc(sizeof(ZcmObstacleLocalCoordinates));
    __ZcmObstacleLocalCoordinates_clone_array(p, q, 1);
    return q;
}

void ZcmObstacleLocalCoordinates_destroy(ZcmObstacleLocalCoordinates* p)
{
    __ZcmObstacleLocalCoordinates_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmObstacleLocalCoordinates_publish(zcm_t* zcm, const char* channel, const ZcmObstacleLocalCoordinates* p)
{
      uint32_t max_data_size = ZcmObstacleLocalCoordinates_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmObstacleLocalCoordinates_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmObstacleLocalCoordinates_subscription_t {
    ZcmObstacleLocalCoordinates_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmObstacleLocalCoordinates_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmObstacleLocalCoordinates p;
    memset(&p, 0, sizeof(ZcmObstacleLocalCoordinates));
    status = ZcmObstacleLocalCoordinates_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmObstacleLocalCoordinates!!!\n", status);
        return;
    }

    ZcmObstacleLocalCoordinates_subscription_t* h = (ZcmObstacleLocalCoordinates_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmObstacleLocalCoordinates_decode_cleanup (&p);
}

ZcmObstacleLocalCoordinates_subscription_t* ZcmObstacleLocalCoordinates_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmObstacleLocalCoordinates_handler_t f, void* userdata)
{
    ZcmObstacleLocalCoordinates_subscription_t* n = (ZcmObstacleLocalCoordinates_subscription_t*)
                       malloc(sizeof(ZcmObstacleLocalCoordinates_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmObstacleLocalCoordinates_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmObstacleLocalCoordinates ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmObstacleLocalCoordinates_unsubscribe(zcm_t* zcm, ZcmObstacleLocalCoordinates_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmObstacleLocalCoordinates_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
