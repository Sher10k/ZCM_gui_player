// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmGeographicCoord.h"

static int __ZcmGeographicCoord_hash_computed;
static uint64_t __ZcmGeographicCoord_hash;

uint64_t __ZcmGeographicCoord_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmGeographicCoord_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmGeographicCoord_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x13648b72dd05ba4bLL
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmGeographicCoord_get_hash(void)
{
    if (!__ZcmGeographicCoord_hash_computed) {
        __ZcmGeographicCoord_hash = (int64_t)__ZcmGeographicCoord_hash_recursive(NULL);
        __ZcmGeographicCoord_hash_computed = 1;
    }

    return __ZcmGeographicCoord_hash;
}

int __ZcmGeographicCoord_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmGeographicCoord* p, uint32_t elements)
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

int ZcmGeographicCoord_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmGeographicCoord* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmGeographicCoord_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmGeographicCoord_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmGeographicCoord_encoded_array_size(const ZcmGeographicCoord* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __double_encoded_array_size(&(p[element].lat), 1);

        size += __double_encoded_array_size(&(p[element].lon), 1);

    }
    return size;
}

uint32_t ZcmGeographicCoord_encoded_size(const ZcmGeographicCoord* p)
{
    return 8 + __ZcmGeographicCoord_encoded_array_size(p, 1);
}

uint32_t ZcmGeographicCoord_struct_size(void)
{
    return sizeof(ZcmGeographicCoord);
}

uint32_t ZcmGeographicCoord_num_fields(void)
{
    return 2;
}

int ZcmGeographicCoord_get_field(const ZcmGeographicCoord* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmGeographicCoord_num_fields())
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

const zcm_type_info_t* ZcmGeographicCoord_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmGeographicCoord_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmGeographicCoord_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmGeographicCoord_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmGeographicCoord_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmGeographicCoord_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmGeographicCoord_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmGeographicCoord_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmGeographicCoord_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmGeographicCoord_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmGeographicCoord* p, uint32_t elements)
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

int __ZcmGeographicCoord_decode_array_cleanup(ZcmGeographicCoord* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __double_decode_array_cleanup(&(p[element].lat), 1);

        __double_decode_array_cleanup(&(p[element].lon), 1);

    }
    return 0;
}

int ZcmGeographicCoord_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmGeographicCoord* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmGeographicCoord_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmGeographicCoord_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmGeographicCoord_decode_cleanup(ZcmGeographicCoord* p)
{
    return __ZcmGeographicCoord_decode_array_cleanup(p, 1);
}

uint32_t __ZcmGeographicCoord_clone_array(const ZcmGeographicCoord* p, ZcmGeographicCoord* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __double_clone_array(&(p[element].lat), &(q[element].lat), 1);

        n += __double_clone_array(&(p[element].lon), &(q[element].lon), 1);

    }
    return n;
}

ZcmGeographicCoord* ZcmGeographicCoord_copy(const ZcmGeographicCoord* p)
{
    ZcmGeographicCoord* q = (ZcmGeographicCoord*) malloc(sizeof(ZcmGeographicCoord));
    __ZcmGeographicCoord_clone_array(p, q, 1);
    return q;
}

void ZcmGeographicCoord_destroy(ZcmGeographicCoord* p)
{
    __ZcmGeographicCoord_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmGeographicCoord_publish(zcm_t* zcm, const char* channel, const ZcmGeographicCoord* p)
{
      uint32_t max_data_size = ZcmGeographicCoord_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmGeographicCoord_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmGeographicCoord_subscription_t {
    ZcmGeographicCoord_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmGeographicCoord_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmGeographicCoord p;
    memset(&p, 0, sizeof(ZcmGeographicCoord));
    status = ZcmGeographicCoord_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmGeographicCoord!!!\n", status);
        return;
    }

    ZcmGeographicCoord_subscription_t* h = (ZcmGeographicCoord_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmGeographicCoord_decode_cleanup (&p);
}

ZcmGeographicCoord_subscription_t* ZcmGeographicCoord_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmGeographicCoord_handler_t f, void* userdata)
{
    ZcmGeographicCoord_subscription_t* n = (ZcmGeographicCoord_subscription_t*)
                       malloc(sizeof(ZcmGeographicCoord_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmGeographicCoord_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmGeographicCoord ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmGeographicCoord_unsubscribe(zcm_t* zcm, ZcmGeographicCoord_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmGeographicCoord_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

