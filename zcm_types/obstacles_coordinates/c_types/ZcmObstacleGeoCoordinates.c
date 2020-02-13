// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmObstacleGeoCoordinates.h"

static int __ZcmObstacleGeoCoordinates_hash_computed;
static uint64_t __ZcmObstacleGeoCoordinates_hash;

uint64_t __ZcmObstacleGeoCoordinates_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmObstacleGeoCoordinates_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmObstacleGeoCoordinates_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x762ea685263685c1LL
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmObstacleGeoCoordinates_get_hash(void)
{
    if (!__ZcmObstacleGeoCoordinates_hash_computed) {
        __ZcmObstacleGeoCoordinates_hash = (int64_t)__ZcmObstacleGeoCoordinates_hash_recursive(NULL);
        __ZcmObstacleGeoCoordinates_hash_computed = 1;
    }

    return __ZcmObstacleGeoCoordinates_hash;
}

int __ZcmObstacleGeoCoordinates_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleGeoCoordinates* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmObstacleGeoCoordinates_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmObstacleGeoCoordinates* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleGeoCoordinates_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmObstacleGeoCoordinates_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmObstacleGeoCoordinates_encoded_array_size(const ZcmObstacleGeoCoordinates* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __double_encoded_array_size(&(p[element].lat), 1);

        size += __double_encoded_array_size(&(p[element].lon), 1);

    }
    return size;
}

uint32_t ZcmObstacleGeoCoordinates_encoded_size(const ZcmObstacleGeoCoordinates* p)
{
    return 8 + __ZcmObstacleGeoCoordinates_encoded_array_size(p, 1);
}

uint32_t ZcmObstacleGeoCoordinates_struct_size(void)
{
    return sizeof(ZcmObstacleGeoCoordinates);
}

uint32_t ZcmObstacleGeoCoordinates_num_fields(void)
{
    return 2;
}

int ZcmObstacleGeoCoordinates_get_field(const ZcmObstacleGeoCoordinates* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmObstacleGeoCoordinates_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "lat";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->lat;
            return 0;
        }
        
        case 1: {
            f->name = "lon";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->lon;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmObstacleGeoCoordinates_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmObstacleGeoCoordinates_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmObstacleGeoCoordinates_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmObstacleGeoCoordinates_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmObstacleGeoCoordinates_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmObstacleGeoCoordinates_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmObstacleGeoCoordinates_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmObstacleGeoCoordinates_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmObstacleGeoCoordinates_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmObstacleGeoCoordinates_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleGeoCoordinates* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].lat), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].lon), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmObstacleGeoCoordinates_decode_array_cleanup(ZcmObstacleGeoCoordinates* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __double_decode_array_cleanup(&(p[element].lat), 1);

        __double_decode_array_cleanup(&(p[element].lon), 1);

    }
    return 0;
}

int ZcmObstacleGeoCoordinates_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmObstacleGeoCoordinates* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmObstacleGeoCoordinates_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmObstacleGeoCoordinates_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmObstacleGeoCoordinates_decode_cleanup(ZcmObstacleGeoCoordinates* p)
{
    return __ZcmObstacleGeoCoordinates_decode_array_cleanup(p, 1);
}

uint32_t __ZcmObstacleGeoCoordinates_clone_array(const ZcmObstacleGeoCoordinates* p, ZcmObstacleGeoCoordinates* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __double_clone_array(&(p[element].lat), &(q[element].lat), 1);

        n += __double_clone_array(&(p[element].lon), &(q[element].lon), 1);

    }
    return n;
}

ZcmObstacleGeoCoordinates* ZcmObstacleGeoCoordinates_copy(const ZcmObstacleGeoCoordinates* p)
{
    ZcmObstacleGeoCoordinates* q = (ZcmObstacleGeoCoordinates*) malloc(sizeof(ZcmObstacleGeoCoordinates));
    __ZcmObstacleGeoCoordinates_clone_array(p, q, 1);
    return q;
}

void ZcmObstacleGeoCoordinates_destroy(ZcmObstacleGeoCoordinates* p)
{
    __ZcmObstacleGeoCoordinates_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmObstacleGeoCoordinates_publish(zcm_t* zcm, const char* channel, const ZcmObstacleGeoCoordinates* p)
{
      uint32_t max_data_size = ZcmObstacleGeoCoordinates_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmObstacleGeoCoordinates_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmObstacleGeoCoordinates_subscription_t {
    ZcmObstacleGeoCoordinates_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmObstacleGeoCoordinates_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmObstacleGeoCoordinates p;
    memset(&p, 0, sizeof(ZcmObstacleGeoCoordinates));
    status = ZcmObstacleGeoCoordinates_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmObstacleGeoCoordinates!!!\n", status);
        return;
    }

    ZcmObstacleGeoCoordinates_subscription_t* h = (ZcmObstacleGeoCoordinates_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmObstacleGeoCoordinates_decode_cleanup (&p);
}

ZcmObstacleGeoCoordinates_subscription_t* ZcmObstacleGeoCoordinates_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmObstacleGeoCoordinates_handler_t f, void* userdata)
{
    ZcmObstacleGeoCoordinates_subscription_t* n = (ZcmObstacleGeoCoordinates_subscription_t*)
                       malloc(sizeof(ZcmObstacleGeoCoordinates_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmObstacleGeoCoordinates_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmObstacleGeoCoordinates ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmObstacleGeoCoordinates_unsubscribe(zcm_t* zcm, ZcmObstacleGeoCoordinates_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmObstacleGeoCoordinates_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
