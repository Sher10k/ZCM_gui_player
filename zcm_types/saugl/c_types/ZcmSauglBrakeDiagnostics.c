// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmSauglBrakeDiagnostics.h"

static int __ZcmSauglBrakeDiagnostics_hash_computed;
static uint64_t __ZcmSauglBrakeDiagnostics_hash;

uint64_t __ZcmSauglBrakeDiagnostics_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmSauglBrakeDiagnostics_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmSauglBrakeDiagnostics_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x61fd5d1b493a99aaLL
         + __ZcmService_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmSauglBrakeDiagnostics_get_hash(void)
{
    if (!__ZcmSauglBrakeDiagnostics_hash_computed) {
        __ZcmSauglBrakeDiagnostics_hash = (int64_t)__ZcmSauglBrakeDiagnostics_hash_recursive(NULL);
        __ZcmSauglBrakeDiagnostics_hash_computed = 1;
    }

    return __ZcmSauglBrakeDiagnostics_hash;
}

int __ZcmSauglBrakeDiagnostics_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglBrakeDiagnostics* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].driver_brake), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].brake), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ack), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmSauglBrakeDiagnostics_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmSauglBrakeDiagnostics* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmSauglBrakeDiagnostics_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmSauglBrakeDiagnostics_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmSauglBrakeDiagnostics_encoded_array_size(const ZcmSauglBrakeDiagnostics* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int16_t_encoded_array_size(&(p[element].driver_brake), 1);

        size += __int16_t_encoded_array_size(&(p[element].brake), 1);

        size += __int16_t_encoded_array_size(&(p[element].ack), 1);

    }
    return size;
}

uint32_t ZcmSauglBrakeDiagnostics_encoded_size(const ZcmSauglBrakeDiagnostics* p)
{
    return 8 + __ZcmSauglBrakeDiagnostics_encoded_array_size(p, 1);
}

uint32_t ZcmSauglBrakeDiagnostics_struct_size(void)
{
    return sizeof(ZcmSauglBrakeDiagnostics);
}

uint32_t ZcmSauglBrakeDiagnostics_num_fields(void)
{
    return 4;
}

int ZcmSauglBrakeDiagnostics_get_field(const ZcmSauglBrakeDiagnostics* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmSauglBrakeDiagnostics_num_fields())
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
            f->name = "driver_brake";
            f->type = ZCM_FIELD_INT16_T;
            f->typestr = "int16_t";
            f->num_dim = 0;
            f->data = (void*) &p->driver_brake;
            return 0;
        }
        
        case 2: {
            f->name = "brake";
            f->type = ZCM_FIELD_INT16_T;
            f->typestr = "int16_t";
            f->num_dim = 0;
            f->data = (void*) &p->brake;
            return 0;
        }
        
        case 3: {
            f->name = "ack";
            f->type = ZCM_FIELD_INT16_T;
            f->typestr = "int16_t";
            f->num_dim = 0;
            f->data = (void*) &p->ack;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmSauglBrakeDiagnostics_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmSauglBrakeDiagnostics_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmSauglBrakeDiagnostics_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmSauglBrakeDiagnostics_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmSauglBrakeDiagnostics_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmSauglBrakeDiagnostics_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmSauglBrakeDiagnostics_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmSauglBrakeDiagnostics_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmSauglBrakeDiagnostics_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmSauglBrakeDiagnostics_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglBrakeDiagnostics* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].driver_brake), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].brake), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ack), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmSauglBrakeDiagnostics_decode_array_cleanup(ZcmSauglBrakeDiagnostics* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int16_t_decode_array_cleanup(&(p[element].driver_brake), 1);

        __int16_t_decode_array_cleanup(&(p[element].brake), 1);

        __int16_t_decode_array_cleanup(&(p[element].ack), 1);

    }
    return 0;
}

int ZcmSauglBrakeDiagnostics_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmSauglBrakeDiagnostics* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmSauglBrakeDiagnostics_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmSauglBrakeDiagnostics_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmSauglBrakeDiagnostics_decode_cleanup(ZcmSauglBrakeDiagnostics* p)
{
    return __ZcmSauglBrakeDiagnostics_decode_array_cleanup(p, 1);
}

uint32_t __ZcmSauglBrakeDiagnostics_clone_array(const ZcmSauglBrakeDiagnostics* p, ZcmSauglBrakeDiagnostics* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int16_t_clone_array(&(p[element].driver_brake), &(q[element].driver_brake), 1);

        n += __int16_t_clone_array(&(p[element].brake), &(q[element].brake), 1);

        n += __int16_t_clone_array(&(p[element].ack), &(q[element].ack), 1);

    }
    return n;
}

ZcmSauglBrakeDiagnostics* ZcmSauglBrakeDiagnostics_copy(const ZcmSauglBrakeDiagnostics* p)
{
    ZcmSauglBrakeDiagnostics* q = (ZcmSauglBrakeDiagnostics*) malloc(sizeof(ZcmSauglBrakeDiagnostics));
    __ZcmSauglBrakeDiagnostics_clone_array(p, q, 1);
    return q;
}

void ZcmSauglBrakeDiagnostics_destroy(ZcmSauglBrakeDiagnostics* p)
{
    __ZcmSauglBrakeDiagnostics_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmSauglBrakeDiagnostics_publish(zcm_t* zcm, const char* channel, const ZcmSauglBrakeDiagnostics* p)
{
      uint32_t max_data_size = ZcmSauglBrakeDiagnostics_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmSauglBrakeDiagnostics_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmSauglBrakeDiagnostics_subscription_t {
    ZcmSauglBrakeDiagnostics_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmSauglBrakeDiagnostics_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmSauglBrakeDiagnostics p;
    memset(&p, 0, sizeof(ZcmSauglBrakeDiagnostics));
    status = ZcmSauglBrakeDiagnostics_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmSauglBrakeDiagnostics!!!\n", status);
        return;
    }

    ZcmSauglBrakeDiagnostics_subscription_t* h = (ZcmSauglBrakeDiagnostics_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmSauglBrakeDiagnostics_decode_cleanup (&p);
}

ZcmSauglBrakeDiagnostics_subscription_t* ZcmSauglBrakeDiagnostics_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmSauglBrakeDiagnostics_handler_t f, void* userdata)
{
    ZcmSauglBrakeDiagnostics_subscription_t* n = (ZcmSauglBrakeDiagnostics_subscription_t*)
                       malloc(sizeof(ZcmSauglBrakeDiagnostics_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmSauglBrakeDiagnostics_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmSauglBrakeDiagnostics ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmSauglBrakeDiagnostics_unsubscribe(zcm_t* zcm, ZcmSauglBrakeDiagnostics_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmSauglBrakeDiagnostics_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
