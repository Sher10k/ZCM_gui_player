// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmLidarScalaDataScan.h"

static int __ZcmLidarScalaDataScan_hash_computed;
static uint64_t __ZcmLidarScalaDataScan_hash;

uint64_t __ZcmLidarScalaDataScan_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmLidarScalaDataScan_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmLidarScalaDataScan_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x5cec064a23c21efdLL
         + __ZcmService_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmLidarScalaPoint_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmLidarScalaDataScan_get_hash(void)
{
    if (!__ZcmLidarScalaDataScan_hash_computed) {
        __ZcmLidarScalaDataScan_hash = (int64_t)__ZcmLidarScalaDataScan_hash_recursive(NULL);
        __ZcmLidarScalaDataScan_hash_computed = 1;
    }

    return __ZcmLidarScalaDataScan_hash;
}

int __ZcmLidarScalaDataScan_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaDataScan* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].scanNumber), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].rotatingDirection), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, &(p[element].scannerHeight), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].nbOfPoints), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarScalaPoint_encode_array(buf, offset + pos, maxlen - pos, p[element].scanPoints, p[element].nbOfPoints);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmLidarScalaDataScan_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarScalaDataScan* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarScalaDataScan_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmLidarScalaDataScan_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmLidarScalaDataScan_encoded_array_size(const ZcmLidarScalaDataScan* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int32_t_encoded_array_size(&(p[element].scanNumber), 1);

        size += __int32_t_encoded_array_size(&(p[element].rotatingDirection), 1);

        size += __float_encoded_array_size(&(p[element].scannerHeight), 1);

        size += __int32_t_encoded_array_size(&(p[element].nbOfPoints), 1);

        size += __ZcmLidarScalaPoint_encoded_array_size(p[element].scanPoints, p[element].nbOfPoints);

    }
    return size;
}

uint32_t ZcmLidarScalaDataScan_encoded_size(const ZcmLidarScalaDataScan* p)
{
    return 8 + __ZcmLidarScalaDataScan_encoded_array_size(p, 1);
}

uint32_t ZcmLidarScalaDataScan_struct_size(void)
{
    return sizeof(ZcmLidarScalaDataScan);
}

uint32_t ZcmLidarScalaDataScan_num_fields(void)
{
    return 6;
}

int ZcmLidarScalaDataScan_get_field(const ZcmLidarScalaDataScan* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmLidarScalaDataScan_num_fields())
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
            f->name = "scanNumber";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->scanNumber;
            return 0;
        }
        
        case 2: {
            f->name = "rotatingDirection";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->rotatingDirection;
            return 0;
        }
        
        case 3: {
            f->name = "scannerHeight";
            f->type = ZCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 0;
            f->data = (void*) &p->scannerHeight;
            return 0;
        }
        
        case 4: {
            f->name = "nbOfPoints";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->nbOfPoints;
            return 0;
        }
        
        case 5: {
            /* ZcmLidarScalaPoint */
            f->name = "scanPoints";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmLidarScalaPoint";
            f->num_dim = 1;
            f->dim_size[0] = p->nbOfPoints;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->scanPoints;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmLidarScalaDataScan_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmLidarScalaDataScan_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmLidarScalaDataScan_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmLidarScalaDataScan_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmLidarScalaDataScan_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmLidarScalaDataScan_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmLidarScalaDataScan_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmLidarScalaDataScan_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmLidarScalaDataScan_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmLidarScalaDataScan_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaDataScan* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].scanNumber), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].rotatingDirection), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, &(p[element].scannerHeight), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].nbOfPoints), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].scanPoints = (ZcmLidarScalaPoint*) zcm_malloc(sizeof(ZcmLidarScalaPoint) * p[element].nbOfPoints);
        thislen = __ZcmLidarScalaPoint_decode_array(buf, offset + pos, maxlen - pos, p[element].scanPoints, p[element].nbOfPoints);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmLidarScalaDataScan_decode_array_cleanup(ZcmLidarScalaDataScan* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int32_t_decode_array_cleanup(&(p[element].scanNumber), 1);

        __int32_t_decode_array_cleanup(&(p[element].rotatingDirection), 1);

        __float_decode_array_cleanup(&(p[element].scannerHeight), 1);

        __int32_t_decode_array_cleanup(&(p[element].nbOfPoints), 1);

        __ZcmLidarScalaPoint_decode_array_cleanup(p[element].scanPoints, p[element].nbOfPoints);
        if (p[element].scanPoints) free(p[element].scanPoints);

    }
    return 0;
}

int ZcmLidarScalaDataScan_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarScalaDataScan* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarScalaDataScan_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmLidarScalaDataScan_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmLidarScalaDataScan_decode_cleanup(ZcmLidarScalaDataScan* p)
{
    return __ZcmLidarScalaDataScan_decode_array_cleanup(p, 1);
}

uint32_t __ZcmLidarScalaDataScan_clone_array(const ZcmLidarScalaDataScan* p, ZcmLidarScalaDataScan* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int32_t_clone_array(&(p[element].scanNumber), &(q[element].scanNumber), 1);

        n += __int32_t_clone_array(&(p[element].rotatingDirection), &(q[element].rotatingDirection), 1);

        n += __float_clone_array(&(p[element].scannerHeight), &(q[element].scannerHeight), 1);

        n += __int32_t_clone_array(&(p[element].nbOfPoints), &(q[element].nbOfPoints), 1);

        q[element].scanPoints = (ZcmLidarScalaPoint*) zcm_malloc(sizeof(ZcmLidarScalaPoint) * q[element].nbOfPoints);
        n += __ZcmLidarScalaPoint_clone_array(p[element].scanPoints, q[element].scanPoints, p[element].nbOfPoints);

    }
    return n;
}

ZcmLidarScalaDataScan* ZcmLidarScalaDataScan_copy(const ZcmLidarScalaDataScan* p)
{
    ZcmLidarScalaDataScan* q = (ZcmLidarScalaDataScan*) malloc(sizeof(ZcmLidarScalaDataScan));
    __ZcmLidarScalaDataScan_clone_array(p, q, 1);
    return q;
}

void ZcmLidarScalaDataScan_destroy(ZcmLidarScalaDataScan* p)
{
    __ZcmLidarScalaDataScan_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmLidarScalaDataScan_publish(zcm_t* zcm, const char* channel, const ZcmLidarScalaDataScan* p)
{
      uint32_t max_data_size = ZcmLidarScalaDataScan_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmLidarScalaDataScan_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmLidarScalaDataScan_subscription_t {
    ZcmLidarScalaDataScan_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmLidarScalaDataScan_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmLidarScalaDataScan p;
    memset(&p, 0, sizeof(ZcmLidarScalaDataScan));
    status = ZcmLidarScalaDataScan_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmLidarScalaDataScan!!!\n", status);
        return;
    }

    ZcmLidarScalaDataScan_subscription_t* h = (ZcmLidarScalaDataScan_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmLidarScalaDataScan_decode_cleanup (&p);
}

ZcmLidarScalaDataScan_subscription_t* ZcmLidarScalaDataScan_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmLidarScalaDataScan_handler_t f, void* userdata)
{
    ZcmLidarScalaDataScan_subscription_t* n = (ZcmLidarScalaDataScan_subscription_t*)
                       malloc(sizeof(ZcmLidarScalaDataScan_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmLidarScalaDataScan_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmLidarScalaDataScan ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmLidarScalaDataScan_unsubscribe(zcm_t* zcm, ZcmLidarScalaDataScan_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmLidarScalaDataScan_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
