// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmNavNV08CErrorVector.h"

static int __ZcmNavNV08CErrorVector_hash_computed;
static uint64_t __ZcmNavNV08CErrorVector_hash;

uint64_t __ZcmNavNV08CErrorVector_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmNavNV08CErrorVector_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmNavNV08CErrorVector_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x3c9b3e1c812dc29cLL
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmNavNV08CErrorVector_get_hash(void)
{
    if (!__ZcmNavNV08CErrorVector_hash_computed) {
        __ZcmNavNV08CErrorVector_hash = (int64_t)__ZcmNavNV08CErrorVector_hash_recursive(NULL);
        __ZcmNavNV08CErrorVector_hash_computed = 1;
    }

    return __ZcmNavNV08CErrorVector_hash;
}

int __ZcmNavNV08CErrorVector_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmNavNV08CErrorVector* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdX), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdY), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdZ), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdXSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdYSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].stdZSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmNavNV08CErrorVector_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmNavNV08CErrorVector* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmNavNV08CErrorVector_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmNavNV08CErrorVector_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmNavNV08CErrorVector_encoded_array_size(const ZcmNavNV08CErrorVector* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __double_encoded_array_size(&(p[element].stdX), 1);

        size += __double_encoded_array_size(&(p[element].stdY), 1);

        size += __double_encoded_array_size(&(p[element].stdZ), 1);

        size += __double_encoded_array_size(&(p[element].stdXSpeed), 1);

        size += __double_encoded_array_size(&(p[element].stdYSpeed), 1);

        size += __double_encoded_array_size(&(p[element].stdZSpeed), 1);

    }
    return size;
}

uint32_t ZcmNavNV08CErrorVector_encoded_size(const ZcmNavNV08CErrorVector* p)
{
    return 8 + __ZcmNavNV08CErrorVector_encoded_array_size(p, 1);
}

uint32_t ZcmNavNV08CErrorVector_struct_size(void)
{
    return sizeof(ZcmNavNV08CErrorVector);
}

uint32_t ZcmNavNV08CErrorVector_num_fields(void)
{
    return 6;
}

int ZcmNavNV08CErrorVector_get_field(const ZcmNavNV08CErrorVector* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmNavNV08CErrorVector_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "stdX";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdX;
            return 0;
        }
        
        case 1: {
            f->name = "stdY";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdY;
            return 0;
        }
        
        case 2: {
            f->name = "stdZ";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdZ;
            return 0;
        }
        
        case 3: {
            f->name = "stdXSpeed";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdXSpeed;
            return 0;
        }
        
        case 4: {
            f->name = "stdYSpeed";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdYSpeed;
            return 0;
        }
        
        case 5: {
            f->name = "stdZSpeed";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->stdZSpeed;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmNavNV08CErrorVector_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmNavNV08CErrorVector_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmNavNV08CErrorVector_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmNavNV08CErrorVector_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmNavNV08CErrorVector_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmNavNV08CErrorVector_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmNavNV08CErrorVector_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmNavNV08CErrorVector_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmNavNV08CErrorVector_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmNavNV08CErrorVector_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmNavNV08CErrorVector* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdX), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdY), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdZ), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdXSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdYSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].stdZSpeed), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmNavNV08CErrorVector_decode_array_cleanup(ZcmNavNV08CErrorVector* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __double_decode_array_cleanup(&(p[element].stdX), 1);

        __double_decode_array_cleanup(&(p[element].stdY), 1);

        __double_decode_array_cleanup(&(p[element].stdZ), 1);

        __double_decode_array_cleanup(&(p[element].stdXSpeed), 1);

        __double_decode_array_cleanup(&(p[element].stdYSpeed), 1);

        __double_decode_array_cleanup(&(p[element].stdZSpeed), 1);

    }
    return 0;
}

int ZcmNavNV08CErrorVector_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmNavNV08CErrorVector* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmNavNV08CErrorVector_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmNavNV08CErrorVector_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmNavNV08CErrorVector_decode_cleanup(ZcmNavNV08CErrorVector* p)
{
    return __ZcmNavNV08CErrorVector_decode_array_cleanup(p, 1);
}

uint32_t __ZcmNavNV08CErrorVector_clone_array(const ZcmNavNV08CErrorVector* p, ZcmNavNV08CErrorVector* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __double_clone_array(&(p[element].stdX), &(q[element].stdX), 1);

        n += __double_clone_array(&(p[element].stdY), &(q[element].stdY), 1);

        n += __double_clone_array(&(p[element].stdZ), &(q[element].stdZ), 1);

        n += __double_clone_array(&(p[element].stdXSpeed), &(q[element].stdXSpeed), 1);

        n += __double_clone_array(&(p[element].stdYSpeed), &(q[element].stdYSpeed), 1);

        n += __double_clone_array(&(p[element].stdZSpeed), &(q[element].stdZSpeed), 1);

    }
    return n;
}

ZcmNavNV08CErrorVector* ZcmNavNV08CErrorVector_copy(const ZcmNavNV08CErrorVector* p)
{
    ZcmNavNV08CErrorVector* q = (ZcmNavNV08CErrorVector*) malloc(sizeof(ZcmNavNV08CErrorVector));
    __ZcmNavNV08CErrorVector_clone_array(p, q, 1);
    return q;
}

void ZcmNavNV08CErrorVector_destroy(ZcmNavNV08CErrorVector* p)
{
    __ZcmNavNV08CErrorVector_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmNavNV08CErrorVector_publish(zcm_t* zcm, const char* channel, const ZcmNavNV08CErrorVector* p)
{
      uint32_t max_data_size = ZcmNavNV08CErrorVector_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmNavNV08CErrorVector_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmNavNV08CErrorVector_subscription_t {
    ZcmNavNV08CErrorVector_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmNavNV08CErrorVector_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmNavNV08CErrorVector p;
    memset(&p, 0, sizeof(ZcmNavNV08CErrorVector));
    status = ZcmNavNV08CErrorVector_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmNavNV08CErrorVector!!!\n", status);
        return;
    }

    ZcmNavNV08CErrorVector_subscription_t* h = (ZcmNavNV08CErrorVector_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmNavNV08CErrorVector_decode_cleanup (&p);
}

ZcmNavNV08CErrorVector_subscription_t* ZcmNavNV08CErrorVector_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmNavNV08CErrorVector_handler_t f, void* userdata)
{
    ZcmNavNV08CErrorVector_subscription_t* n = (ZcmNavNV08CErrorVector_subscription_t*)
                       malloc(sizeof(ZcmNavNV08CErrorVector_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmNavNV08CErrorVector_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmNavNV08CErrorVector ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmNavNV08CErrorVector_unsubscribe(zcm_t* zcm, ZcmNavNV08CErrorVector_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmNavNV08CErrorVector_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

