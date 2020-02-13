// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmLidarScalaContourPoint.h"

static int __ZcmLidarScalaContourPoint_hash_computed;
static uint64_t __ZcmLidarScalaContourPoint_hash;

uint64_t __ZcmLidarScalaContourPoint_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmLidarScalaContourPoint_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmLidarScalaContourPoint_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xae279f219b54a0aaLL
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmLidarScalaContourPoint_get_hash(void)
{
    if (!__ZcmLidarScalaContourPoint_hash_computed) {
        __ZcmLidarScalaContourPoint_hash = (int64_t)__ZcmLidarScalaContourPoint_hash_recursive(NULL);
        __ZcmLidarScalaContourPoint_hash_computed = 1;
    }

    return __ZcmLidarScalaContourPoint_hash;
}

int __ZcmLidarScalaContourPoint_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaContourPoint* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].posX), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].posY), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].posXSigma), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].posYSigma), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].corrCoeff), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].existenceProbability), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmLidarScalaContourPoint_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaContourPoint* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarScalaContourPoint_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmLidarScalaContourPoint_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmLidarScalaContourPoint_encoded_array_size(const ZcmLidarScalaContourPoint* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __float_encoded_array_size(&(p[element].posX), 1);

        size += __float_encoded_array_size(&(p[element].posY), 1);

        size += __float_encoded_array_size(&(p[element].posXSigma), 1);

        size += __float_encoded_array_size(&(p[element].posYSigma), 1);

        size += __int8_t_encoded_array_size(&(p[element].corrCoeff), 1);

        size += __float_encoded_array_size(&(p[element].existenceProbability), 1);

    }
    return size;
}

uint32_t ZcmLidarScalaContourPoint_encoded_size(const ZcmLidarScalaContourPoint* p)
{
    return 8 + __ZcmLidarScalaContourPoint_encoded_array_size(p, 1);
}

uint32_t ZcmLidarScalaContourPoint_struct_size(void)
{
    return sizeof(ZcmLidarScalaContourPoint);
}

uint32_t ZcmLidarScalaContourPoint_num_fields(void)
{
    return 6;
}

int ZcmLidarScalaContourPoint_get_field(const ZcmLidarScalaContourPoint* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmLidarScalaContourPoint_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "posX";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->posX;
            return 0;
        }
        
        case 1: {
            f->name = "posY";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->posY;
            return 0;
        }
        
        case 2: {
            f->name = "posXSigma";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->posXSigma;
            return 0;
        }
        
        case 3: {
            f->name = "posYSigma";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->posYSigma;
            return 0;
        }
        
        case 4: {
            f->name = "corrCoeff";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->corrCoeff;
            return 0;
        }
        
        case 5: {
            f->name = "existenceProbability";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->existenceProbability;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmLidarScalaContourPoint_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmLidarScalaContourPoint_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmLidarScalaContourPoint_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmLidarScalaContourPoint_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmLidarScalaContourPoint_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmLidarScalaContourPoint_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmLidarScalaContourPoint_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmLidarScalaContourPoint_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmLidarScalaContourPoint_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmLidarScalaContourPoint_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaContourPoint* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].posX), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].posY), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].posXSigma), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].posYSigma), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].corrCoeff), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].existenceProbability), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmLidarScalaContourPoint_decode_array_cleanup(ZcmLidarScalaContourPoint* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __float_decode_array_cleanup(&(p[element].posX), 1);

        __float_decode_array_cleanup(&(p[element].posY), 1);

        __float_decode_array_cleanup(&(p[element].posXSigma), 1);

        __float_decode_array_cleanup(&(p[element].posYSigma), 1);

        __int8_t_decode_array_cleanup(&(p[element].corrCoeff), 1);

        __float_decode_array_cleanup(&(p[element].existenceProbability), 1);

    }
    return 0;
}

int ZcmLidarScalaContourPoint_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaContourPoint* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarScalaContourPoint_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmLidarScalaContourPoint_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmLidarScalaContourPoint_decode_cleanup(ZcmLidarScalaContourPoint* p)
{
    return __ZcmLidarScalaContourPoint_decode_array_cleanup(p, 1);
}

uint32_t __ZcmLidarScalaContourPoint_clone_array(const ZcmLidarScalaContourPoint* p, ZcmLidarScalaContourPoint* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __float_clone_array(&(p[element].posX), &(q[element].posX), 1);

        n += __float_clone_array(&(p[element].posY), &(q[element].posY), 1);

        n += __float_clone_array(&(p[element].posXSigma), &(q[element].posXSigma), 1);

        n += __float_clone_array(&(p[element].posYSigma), &(q[element].posYSigma), 1);

        n += __int8_t_clone_array(&(p[element].corrCoeff), &(q[element].corrCoeff), 1);

        n += __float_clone_array(&(p[element].existenceProbability), &(q[element].existenceProbability), 1);

    }
    return n;
}

ZcmLidarScalaContourPoint* ZcmLidarScalaContourPoint_copy(const ZcmLidarScalaContourPoint* p)
{
    ZcmLidarScalaContourPoint* q = (ZcmLidarScalaContourPoint*) malloc(sizeof(ZcmLidarScalaContourPoint));
    __ZcmLidarScalaContourPoint_clone_array(p, q, 1);
    return q;
}

void ZcmLidarScalaContourPoint_destroy(ZcmLidarScalaContourPoint* p)
{
    __ZcmLidarScalaContourPoint_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmLidarScalaContourPoint_publish(zcm_t* zcm, const char* channel, const ZcmLidarScalaContourPoint* p)
{
      uint32_t max_data_size = ZcmLidarScalaContourPoint_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmLidarScalaContourPoint_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmLidarScalaContourPoint_subscription_t {
    ZcmLidarScalaContourPoint_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmLidarScalaContourPoint_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmLidarScalaContourPoint p;
    memset(&p, 0, sizeof(ZcmLidarScalaContourPoint));
    status = ZcmLidarScalaContourPoint_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmLidarScalaContourPoint!!!\n", status);
        return;
    }

    ZcmLidarScalaContourPoint_subscription_t* h = (ZcmLidarScalaContourPoint_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmLidarScalaContourPoint_decode_cleanup (&p);
}

ZcmLidarScalaContourPoint_subscription_t* ZcmLidarScalaContourPoint_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmLidarScalaContourPoint_handler_t f, void* userdata)
{
    ZcmLidarScalaContourPoint_subscription_t* n = (ZcmLidarScalaContourPoint_subscription_t*)
                       malloc(sizeof(ZcmLidarScalaContourPoint_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmLidarScalaContourPoint_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmLidarScalaContourPoint ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmLidarScalaContourPoint_unsubscribe(zcm_t* zcm, ZcmLidarScalaContourPoint_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmLidarScalaContourPoint_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

