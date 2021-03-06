// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "LidarSickPoints.h"

static int __LidarSickPoints_hash_computed;
static uint64_t __LidarSickPoints_hash;

uint64_t __LidarSickPoints_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __LidarSickPoints_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__LidarSickPoints_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x36102ef621ac0597LL
         + __ZcmService_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __LidarSickPoint_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __LidarSickPoints_get_hash(void)
{
    if (!__LidarSickPoints_hash_computed) {
        __LidarSickPoints_hash = (int64_t)__LidarSickPoints_hash_recursive(NULL);
        __LidarSickPoints_hash_computed = 1;
    }

    return __LidarSickPoints_hash;
}

int __LidarSickPoints_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const LidarSickPoints* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].scan_number), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].scanner_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].points_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __LidarSickPoint_encode_array(buf, offset + pos, maxlen - pos, p[element].points, p[element].points_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int LidarSickPoints_encode(void* buf, uint32_t offset, uint32_t maxlen, const LidarSickPoints* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __LidarSickPoints_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __LidarSickPoints_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __LidarSickPoints_encoded_array_size(const LidarSickPoints* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __int32_t_encoded_array_size(&(p[element].scan_number), 1);

        size += __double_encoded_array_size(&(p[element].scanner_height), 1);

        size += __int32_t_encoded_array_size(&(p[element].points_count), 1);

        size += __LidarSickPoint_encoded_array_size(p[element].points, p[element].points_count);

    }
    return size;
}

uint32_t LidarSickPoints_encoded_size(const LidarSickPoints* p)
{
    return 8 + __LidarSickPoints_encoded_array_size(p, 1);
}

uint32_t LidarSickPoints_struct_size(void)
{
    return sizeof(LidarSickPoints);
}

uint32_t LidarSickPoints_num_fields(void)
{
    return 5;
}

int LidarSickPoints_get_field(const LidarSickPoints* p, uint32_t i, zcm_field_t* f)
{
    if (i >= LidarSickPoints_num_fields())
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
            f->name = "scan_number";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->scan_number;
            return 0;
        }
        
        case 2: {
            f->name = "scanner_height";
            f->type = ZCM_FIELD_DOUBLE;
            f->typestr = "double";
            f->num_dim = 0;
            f->data = (void*) &p->scanner_height;
            return 0;
        }
        
        case 3: {
            f->name = "points_count";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->points_count;
            return 0;
        }
        
        case 4: {
            /* LidarSickPoint */
            f->name = "points";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "LidarSickPoint";
            f->num_dim = 1;
            f->dim_size[0] = p->points_count;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->points;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* LidarSickPoints_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) LidarSickPoints_encode;
        typeinfo.decode         = (zcm_decode_t) LidarSickPoints_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) LidarSickPoints_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) LidarSickPoints_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  LidarSickPoints_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) LidarSickPoints_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) LidarSickPoints_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __LidarSickPoints_get_hash;
    }
    
    return &typeinfo;
}
int __LidarSickPoints_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, LidarSickPoints* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].scan_number), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].scanner_height), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].points_count), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].points = (LidarSickPoint*) zcm_malloc(sizeof(LidarSickPoint) * p[element].points_count);
        thislen = __LidarSickPoint_decode_array(buf, offset + pos, maxlen - pos, p[element].points, p[element].points_count);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __LidarSickPoints_decode_array_cleanup(LidarSickPoints* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __int32_t_decode_array_cleanup(&(p[element].scan_number), 1);

        __double_decode_array_cleanup(&(p[element].scanner_height), 1);

        __int32_t_decode_array_cleanup(&(p[element].points_count), 1);

        __LidarSickPoint_decode_array_cleanup(p[element].points, p[element].points_count);
        if (p[element].points) free(p[element].points);

    }
    return 0;
}

int LidarSickPoints_decode(const void* buf, uint32_t offset, uint32_t maxlen, LidarSickPoints* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __LidarSickPoints_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __LidarSickPoints_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int LidarSickPoints_decode_cleanup(LidarSickPoints* p)
{
    return __LidarSickPoints_decode_array_cleanup(p, 1);
}

uint32_t __LidarSickPoints_clone_array(const LidarSickPoints* p, LidarSickPoints* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __int32_t_clone_array(&(p[element].scan_number), &(q[element].scan_number), 1);

        n += __double_clone_array(&(p[element].scanner_height), &(q[element].scanner_height), 1);

        n += __int32_t_clone_array(&(p[element].points_count), &(q[element].points_count), 1);

        q[element].points = (LidarSickPoint*) zcm_malloc(sizeof(LidarSickPoint) * q[element].points_count);
        n += __LidarSickPoint_clone_array(p[element].points, q[element].points, p[element].points_count);

    }
    return n;
}

LidarSickPoints* LidarSickPoints_copy(const LidarSickPoints* p)
{
    LidarSickPoints* q = (LidarSickPoints*) malloc(sizeof(LidarSickPoints));
    __LidarSickPoints_clone_array(p, q, 1);
    return q;
}

void LidarSickPoints_destroy(LidarSickPoints* p)
{
    __LidarSickPoints_decode_array_cleanup(p, 1);
    free(p);
}

int LidarSickPoints_publish(zcm_t* zcm, const char* channel, const LidarSickPoints* p)
{
      uint32_t max_data_size = LidarSickPoints_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = LidarSickPoints_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _LidarSickPoints_subscription_t {
    LidarSickPoints_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void LidarSickPoints_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    LidarSickPoints p;
    memset(&p, 0, sizeof(LidarSickPoints));
    status = LidarSickPoints_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding LidarSickPoints!!!\n", status);
        return;
    }

    LidarSickPoints_subscription_t* h = (LidarSickPoints_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    LidarSickPoints_decode_cleanup (&p);
}

LidarSickPoints_subscription_t* LidarSickPoints_subscribe (zcm_t* zcm,
                    const char* channel,
                    LidarSickPoints_handler_t f, void* userdata)
{
    LidarSickPoints_subscription_t* n = (LidarSickPoints_subscription_t*)
                       malloc(sizeof(LidarSickPoints_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              LidarSickPoints_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg LidarSickPoints ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int LidarSickPoints_unsubscribe(zcm_t* zcm, LidarSickPoints_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe LidarSickPoints_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

