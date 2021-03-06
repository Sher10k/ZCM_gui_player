// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmStereoPairObstacleObject.h"

static int __ZcmStereoPairObstacleObject_hash_computed;
static uint64_t __ZcmStereoPairObstacleObject_hash;

uint64_t __ZcmStereoPairObstacleObject_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmStereoPairObstacleObject_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmStereoPairObstacleObject_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x65e793110c5679fdLL
         + __ZcmStereoPairPoint2D_hash_recursive(&cp)
         + __ZcmStereoPairPoint2D_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmStereoPairObstacleObject_get_hash(void)
{
    if (!__ZcmStereoPairObstacleObject_hash_computed) {
        __ZcmStereoPairObstacleObject_hash = (int64_t)__ZcmStereoPairObstacleObject_hash_recursive(NULL);
        __ZcmStereoPairObstacleObject_hash_computed = 1;
    }

    return __ZcmStereoPairObstacleObject_hash;
}

int __ZcmStereoPairObstacleObject_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoPairObstacleObject* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmStereoPairPoint2D_encode_array(buf, offset + pos, maxlen - pos, p[element].boundingBox, 4);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmStereoPairPoint2D_encode_array(buf, offset + pos, maxlen - pos, &(p[element].generalPoint), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, &(p[element].label), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].probability), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].max_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].min_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].is_moving), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmStereoPairObstacleObject_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmStereoPairObstacleObject* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoPairObstacleObject_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmStereoPairObstacleObject_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmStereoPairObstacleObject_encoded_array_size(const ZcmStereoPairObstacleObject* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmStereoPairPoint2D_encoded_array_size(p[element].boundingBox, 4);

        size += __ZcmStereoPairPoint2D_encoded_array_size(&(p[element].generalPoint), 1);

        size += __string_encoded_array_size(&(p[element].label), 1);

        size += __double_encoded_array_size(&(p[element].probability), 1);

        size += __double_encoded_array_size(&(p[element].max_height), 1);

        size += __double_encoded_array_size(&(p[element].min_height), 1);

        size += __boolean_encoded_array_size(&(p[element].is_moving), 1);

    }
    return size;
}

uint32_t ZcmStereoPairObstacleObject_encoded_size(const ZcmStereoPairObstacleObject* p)
{
    return 8 + __ZcmStereoPairObstacleObject_encoded_array_size(p, 1);
}

uint32_t ZcmStereoPairObstacleObject_struct_size(void)
{
    return sizeof(ZcmStereoPairObstacleObject);
}

uint32_t ZcmStereoPairObstacleObject_num_fields(void)
{
    return 7;
}

int ZcmStereoPairObstacleObject_get_field(const ZcmStereoPairObstacleObject* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmStereoPairObstacleObject_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            /* ZcmStereoPairPoint2D */
            f->name = "boundingBox";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmStereoPairPoint2D";
            f->num_dim = 1;
            f->dim_size[0] = 4;
            f->dim_is_variable[0] = 0;
            f->data = (void*) &p->boundingBox;
            return 0;
        }
        
        case 1: {
            /* ZcmStereoPairPoint2D */
            f->name = "generalPoint";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmStereoPairPoint2D";
            f->num_dim = 0;
            f->data = (void*) &p->generalPoint;
            return 0;
        }
        
        case 2: {
            f->name = "label";
            f->type = ZCM_FIELD_STRING;
            f->typestr = "string";
            f->num_dim = 0;
            f->data = (void*) &p->label;
            return 0;
        }
        
        case 3: {
            f->name = "probability";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->probability;
            return 0;
        }
        
        case 4: {
            f->name = "max_height";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->max_height;
            return 0;
        }
        
        case 5: {
            f->name = "min_height";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->min_height;
            return 0;
        }
        
        case 6: {
            f->name = "is_moving";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->is_moving;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmStereoPairObstacleObject_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmStereoPairObstacleObject_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmStereoPairObstacleObject_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmStereoPairObstacleObject_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmStereoPairObstacleObject_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmStereoPairObstacleObject_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmStereoPairObstacleObject_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmStereoPairObstacleObject_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmStereoPairObstacleObject_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmStereoPairObstacleObject_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoPairObstacleObject* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmStereoPairPoint2D_decode_array(buf, offset + pos, maxlen - pos, p[element].boundingBox, 4);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmStereoPairPoint2D_decode_array(buf, offset + pos, maxlen - pos, &(p[element].generalPoint), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, &(p[element].label), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].probability), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].max_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].min_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].is_moving), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmStereoPairObstacleObject_decode_array_cleanup(ZcmStereoPairObstacleObject* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmStereoPairPoint2D_decode_array_cleanup(p[element].boundingBox, 4);

        __ZcmStereoPairPoint2D_decode_array_cleanup(&(p[element].generalPoint), 1);

        __string_decode_array_cleanup(&(p[element].label), 1);

        __double_decode_array_cleanup(&(p[element].probability), 1);

        __double_decode_array_cleanup(&(p[element].max_height), 1);

        __double_decode_array_cleanup(&(p[element].min_height), 1);

        __boolean_decode_array_cleanup(&(p[element].is_moving), 1);

    }
    return 0;
}

int ZcmStereoPairObstacleObject_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmStereoPairObstacleObject* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmStereoPairObstacleObject_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmStereoPairObstacleObject_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmStereoPairObstacleObject_decode_cleanup(ZcmStereoPairObstacleObject* p)
{
    return __ZcmStereoPairObstacleObject_decode_array_cleanup(p, 1);
}

uint32_t __ZcmStereoPairObstacleObject_clone_array(const ZcmStereoPairObstacleObject* p, ZcmStereoPairObstacleObject* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmStereoPairPoint2D_clone_array(p[element].boundingBox, q[element].boundingBox, 4);

        n += __ZcmStereoPairPoint2D_clone_array(&(p[element].generalPoint), &(q[element].generalPoint), 1);

        n += __string_clone_array(&(p[element].label), &(q[element].label), 1);

        n += __double_clone_array(&(p[element].probability), &(q[element].probability), 1);

        n += __double_clone_array(&(p[element].max_height), &(q[element].max_height), 1);

        n += __double_clone_array(&(p[element].min_height), &(q[element].min_height), 1);

        n += __boolean_clone_array(&(p[element].is_moving), &(q[element].is_moving), 1);

    }
    return n;
}

ZcmStereoPairObstacleObject* ZcmStereoPairObstacleObject_copy(const ZcmStereoPairObstacleObject* p)
{
    ZcmStereoPairObstacleObject* q = (ZcmStereoPairObstacleObject*) malloc(sizeof(ZcmStereoPairObstacleObject));
    __ZcmStereoPairObstacleObject_clone_array(p, q, 1);
    return q;
}

void ZcmStereoPairObstacleObject_destroy(ZcmStereoPairObstacleObject* p)
{
    __ZcmStereoPairObstacleObject_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmStereoPairObstacleObject_publish(zcm_t* zcm, const char* channel, const ZcmStereoPairObstacleObject* p)
{
      uint32_t max_data_size = ZcmStereoPairObstacleObject_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmStereoPairObstacleObject_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmStereoPairObstacleObject_subscription_t {
    ZcmStereoPairObstacleObject_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmStereoPairObstacleObject_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmStereoPairObstacleObject p;
    memset(&p, 0, sizeof(ZcmStereoPairObstacleObject));
    status = ZcmStereoPairObstacleObject_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmStereoPairObstacleObject!!!\n", status);
        return;
    }

    ZcmStereoPairObstacleObject_subscription_t* h = (ZcmStereoPairObstacleObject_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmStereoPairObstacleObject_decode_cleanup (&p);
}

ZcmStereoPairObstacleObject_subscription_t* ZcmStereoPairObstacleObject_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmStereoPairObstacleObject_handler_t f, void* userdata)
{
    ZcmStereoPairObstacleObject_subscription_t* n = (ZcmStereoPairObstacleObject_subscription_t*)
                       malloc(sizeof(ZcmStereoPairObstacleObject_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmStereoPairObstacleObject_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmStereoPairObstacleObject ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmStereoPairObstacleObject_unsubscribe(zcm_t* zcm, ZcmStereoPairObstacleObject_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmStereoPairObstacleObject_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

