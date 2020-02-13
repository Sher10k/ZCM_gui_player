// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmMalsRoute.h"

static int __ZcmMalsRoute_hash_computed;
static uint64_t __ZcmMalsRoute_hash;

uint64_t __ZcmMalsRoute_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmMalsRoute_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmMalsRoute_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xf2d4274b0fa6d7fdLL
         + __ZcmService_hash_recursive(&cp)
         + __int16_t_hash_recursive(&cp)
         + __ZcmMalsSwitch_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmMalsRoute_get_hash(void)
{
    if (!__ZcmMalsRoute_hash_computed) {
        __ZcmMalsRoute_hash = (int64_t)__ZcmMalsRoute_hash_recursive(NULL);
        __ZcmMalsRoute_hash_computed = 1;
    }

    return __ZcmMalsRoute_hash;
}

int __ZcmMalsRoute_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmMalsRoute* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmMalsSwitch_encode_array(buf, offset + pos, maxlen - pos, p[element].switches, p[element].count);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].current_section), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].border1), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].border2), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmMalsRoute_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmMalsRoute* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmMalsRoute_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmMalsRoute_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmMalsRoute_encoded_array_size(const ZcmMalsRoute* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int16_t_encoded_array_size(&(p[element].count), 1);

        size += __ZcmMalsSwitch_encoded_array_size(p[element].switches, p[element].count);

        size += __string_encoded_array_size(&(p[element].current_section), 1);

        size += __string_encoded_array_size(&(p[element].border1), 1);

        size += __string_encoded_array_size(&(p[element].border2), 1);

    }
    return size;
}

uint32_t ZcmMalsRoute_encoded_size(const ZcmMalsRoute* p)
{
    return 8 + __ZcmMalsRoute_encoded_array_size(p, 1);
}

uint32_t ZcmMalsRoute_struct_size(void)
{
    return sizeof(ZcmMalsRoute);
}

uint32_t ZcmMalsRoute_num_fields(void)
{
    return 6;
}

int ZcmMalsRoute_get_field(const ZcmMalsRoute* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmMalsRoute_num_fields())
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
            f->name = "count";
            f->type = ZCM_FIELD_INT16_T;
            f->typestr = "int16_t";
            f->num_dim = 0;
            f->data = (void*) &p->count;
            return 0;
        }
        
        case 2: {
            /* ZcmMalsSwitch */
            f->name = "switches";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmMalsSwitch";
            f->num_dim = 1;
            f->dim_size[0] = p->count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->switches;
            return 0;
        }
        
        case 3: {
            f->name = "current_section";
            f->type = ZCM_FIELD_STRING;
            f->typestr = "string";
            f->num_dim = 0;
            f->data = (void*) &p->current_section;
            return 0;
        }
        
        case 4: {
            f->name = "border1";
            f->type = ZCM_FIELD_STRING;
            f->typestr = "string";
            f->num_dim = 0;
            f->data = (void*) &p->border1;
            return 0;
        }
        
        case 5: {
            f->name = "border2";
            f->type = ZCM_FIELD_STRING;
            f->typestr = "string";
            f->num_dim = 0;
            f->data = (void*) &p->border2;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmMalsRoute_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmMalsRoute_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmMalsRoute_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmMalsRoute_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmMalsRoute_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmMalsRoute_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmMalsRoute_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmMalsRoute_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmMalsRoute_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmMalsRoute_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmMalsRoute* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int16_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].switches = (ZcmMalsSwitch*) zcm_malloc(sizeof(ZcmMalsSwitch) * p[element].count);
        thislen = __ZcmMalsSwitch_decode_array(buf, offset + pos, maxlen - pos, p[element].switches, p[element].count);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].current_section), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].border1), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].border2), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmMalsRoute_decode_array_cleanup(ZcmMalsRoute* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int16_t_decode_array_cleanup(&(p[element].count), 1);

        __ZcmMalsSwitch_decode_array_cleanup(p[element].switches, p[element].count);
        if (p[element].switches) free(p[element].switches);

        __string_decode_array_cleanup(&(p[element].current_section), 1);

        __string_decode_array_cleanup(&(p[element].border1), 1);

        __string_decode_array_cleanup(&(p[element].border2), 1);

    }
    return 0;
}

int ZcmMalsRoute_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmMalsRoute* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmMalsRoute_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmMalsRoute_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmMalsRoute_decode_cleanup(ZcmMalsRoute* p)
{
    return __ZcmMalsRoute_decode_array_cleanup(p, 1);
}

uint32_t __ZcmMalsRoute_clone_array(const ZcmMalsRoute* p, ZcmMalsRoute* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int16_t_clone_array(&(p[element].count), &(q[element].count), 1);

        q[element].switches = (ZcmMalsSwitch*) zcm_malloc(sizeof(ZcmMalsSwitch) * q[element].count);
        n += __ZcmMalsSwitch_clone_array(p[element].switches, q[element].switches, p[element].count);

        n += __string_clone_array(&(p[element].current_section), &(q[element].current_section), 1);

        n += __string_clone_array(&(p[element].border1), &(q[element].border1), 1);

        n += __string_clone_array(&(p[element].border2), &(q[element].border2), 1);

    }
    return n;
}

ZcmMalsRoute* ZcmMalsRoute_copy(const ZcmMalsRoute* p)
{
    ZcmMalsRoute* q = (ZcmMalsRoute*) malloc(sizeof(ZcmMalsRoute));
    __ZcmMalsRoute_clone_array(p, q, 1);
    return q;
}

void ZcmMalsRoute_destroy(ZcmMalsRoute* p)
{
    __ZcmMalsRoute_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmMalsRoute_publish(zcm_t* zcm, const char* channel, const ZcmMalsRoute* p)
{
      uint32_t max_data_size = ZcmMalsRoute_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmMalsRoute_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmMalsRoute_subscription_t {
    ZcmMalsRoute_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmMalsRoute_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmMalsRoute p;
    memset(&p, 0, sizeof(ZcmMalsRoute));
    status = ZcmMalsRoute_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmMalsRoute!!!\n", status);
        return;
    }

    ZcmMalsRoute_subscription_t* h = (ZcmMalsRoute_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmMalsRoute_decode_cleanup (&p);
}

ZcmMalsRoute_subscription_t* ZcmMalsRoute_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmMalsRoute_handler_t f, void* userdata)
{
    ZcmMalsRoute_subscription_t* n = (ZcmMalsRoute_subscription_t*)
                       malloc(sizeof(ZcmMalsRoute_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmMalsRoute_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmMalsRoute ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmMalsRoute_unsubscribe(zcm_t* zcm, ZcmMalsRoute_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmMalsRoute_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
