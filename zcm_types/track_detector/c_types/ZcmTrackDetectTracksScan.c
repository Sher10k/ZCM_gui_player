// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmTrackDetectTracksScan.h"

static int __ZcmTrackDetectTracksScan_hash_computed;
static uint64_t __ZcmTrackDetectTracksScan_hash;

uint64_t __ZcmTrackDetectTracksScan_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmTrackDetectTracksScan_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmTrackDetectTracksScan_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xb8daa3a8b4dd62eaLL
         + __ZcmService_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __ZcmTrackDetectTrack_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmTrackDetectTracksScan_get_hash(void)
{
    if (!__ZcmTrackDetectTracksScan_hash_computed) {
        __ZcmTrackDetectTracksScan_hash = (int64_t)__ZcmTrackDetectTracksScan_hash_recursive(NULL);
        __ZcmTrackDetectTracksScan_hash_computed = 1;
    }

    return __ZcmTrackDetectTracksScan_hash;
}

int __ZcmTrackDetectTracksScan_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTracksScan* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].track_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmTrackDetectTrack_encode_array(buf, offset + pos, maxlen - pos, p[element].track, p[element].track_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmTrackDetectTracksScan_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmTrackDetectTracksScan* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmTrackDetectTracksScan_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmTrackDetectTracksScan_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmTrackDetectTracksScan_encoded_array_size(const ZcmTrackDetectTracksScan* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int8_t_encoded_array_size(&(p[element].track_count), 1);

        size += __ZcmTrackDetectTrack_encoded_array_size(p[element].track, p[element].track_count);

    }
    return size;
}

uint32_t ZcmTrackDetectTracksScan_encoded_size(const ZcmTrackDetectTracksScan* p)
{
    return 8 + __ZcmTrackDetectTracksScan_encoded_array_size(p, 1);
}

uint32_t ZcmTrackDetectTracksScan_struct_size(void)
{
    return sizeof(ZcmTrackDetectTracksScan);
}

uint32_t ZcmTrackDetectTracksScan_num_fields(void)
{
    return 3;
}

int ZcmTrackDetectTracksScan_get_field(const ZcmTrackDetectTracksScan* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmTrackDetectTracksScan_num_fields())
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
            f->name = "track_count";
            f->type = ZCM_FIELD_INT8_T;
            f->typestr = "int8_t";
            f->num_dim = 0;
            f->data = (void*) &p->track_count;
            return 0;
        }
        
        case 2: {
            /* ZcmTrackDetectTrack */
            f->name = "track";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmTrackDetectTrack";
            f->num_dim = 1;
            f->dim_size[0] = p->track_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->track;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmTrackDetectTracksScan_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmTrackDetectTracksScan_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmTrackDetectTracksScan_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmTrackDetectTracksScan_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmTrackDetectTracksScan_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmTrackDetectTracksScan_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmTrackDetectTracksScan_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmTrackDetectTracksScan_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmTrackDetectTracksScan_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmTrackDetectTracksScan_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTracksScan* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].track_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].track = (ZcmTrackDetectTrack*) zcm_malloc(sizeof(ZcmTrackDetectTrack) * p[element].track_count);
        thislen = __ZcmTrackDetectTrack_decode_array(buf, offset + pos, maxlen - pos, p[element].track, p[element].track_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmTrackDetectTracksScan_decode_array_cleanup(ZcmTrackDetectTracksScan* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int8_t_decode_array_cleanup(&(p[element].track_count), 1);

        __ZcmTrackDetectTrack_decode_array_cleanup(p[element].track, p[element].track_count);
        if (p[element].track) free(p[element].track);

    }
    return 0;
}

int ZcmTrackDetectTracksScan_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmTrackDetectTracksScan* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmTrackDetectTracksScan_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmTrackDetectTracksScan_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmTrackDetectTracksScan_decode_cleanup(ZcmTrackDetectTracksScan* p)
{
    return __ZcmTrackDetectTracksScan_decode_array_cleanup(p, 1);
}

uint32_t __ZcmTrackDetectTracksScan_clone_array(const ZcmTrackDetectTracksScan* p, ZcmTrackDetectTracksScan* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int8_t_clone_array(&(p[element].track_count), &(q[element].track_count), 1);

        q[element].track = (ZcmTrackDetectTrack*) zcm_malloc(sizeof(ZcmTrackDetectTrack) * q[element].track_count);
        n += __ZcmTrackDetectTrack_clone_array(p[element].track, q[element].track, p[element].track_count);

    }
    return n;
}

ZcmTrackDetectTracksScan* ZcmTrackDetectTracksScan_copy(const ZcmTrackDetectTracksScan* p)
{
    ZcmTrackDetectTracksScan* q = (ZcmTrackDetectTracksScan*) malloc(sizeof(ZcmTrackDetectTracksScan));
    __ZcmTrackDetectTracksScan_clone_array(p, q, 1);
    return q;
}

void ZcmTrackDetectTracksScan_destroy(ZcmTrackDetectTracksScan* p)
{
    __ZcmTrackDetectTracksScan_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmTrackDetectTracksScan_publish(zcm_t* zcm, const char* channel, const ZcmTrackDetectTracksScan* p)
{
      uint32_t max_data_size = ZcmTrackDetectTracksScan_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmTrackDetectTracksScan_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmTrackDetectTracksScan_subscription_t {
    ZcmTrackDetectTracksScan_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmTrackDetectTracksScan_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmTrackDetectTracksScan p;
    memset(&p, 0, sizeof(ZcmTrackDetectTracksScan));
    status = ZcmTrackDetectTracksScan_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmTrackDetectTracksScan!!!\n", status);
        return;
    }

    ZcmTrackDetectTracksScan_subscription_t* h = (ZcmTrackDetectTracksScan_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmTrackDetectTracksScan_decode_cleanup (&p);
}

ZcmTrackDetectTracksScan_subscription_t* ZcmTrackDetectTracksScan_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmTrackDetectTracksScan_handler_t f, void* userdata)
{
    ZcmTrackDetectTracksScan_subscription_t* n = (ZcmTrackDetectTracksScan_subscription_t*)
                       malloc(sizeof(ZcmTrackDetectTracksScan_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmTrackDetectTracksScan_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmTrackDetectTracksScan ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmTrackDetectTracksScan_unsubscribe(zcm_t* zcm, ZcmTrackDetectTracksScan_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmTrackDetectTracksScan_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
