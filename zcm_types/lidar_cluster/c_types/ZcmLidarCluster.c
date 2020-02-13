// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "ZcmLidarCluster.h"

static int __ZcmLidarCluster_hash_computed;
static uint64_t __ZcmLidarCluster_hash;

uint64_t __ZcmLidarCluster_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __ZcmLidarCluster_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__ZcmLidarCluster_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x275fde354edd8d94LL
         + __int32_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __ZcmLidarScalaPoint_hash_recursive(&cp)
         + __ZcmLidarClusterMediumPoint_hash_recursive(&cp)
         + __ZcmLidarClusterBoundRect_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __ZcmLidarCluster_get_hash(void)
{
    if (!__ZcmLidarCluster_hash_computed) {
        __ZcmLidarCluster_hash = (int64_t)__ZcmLidarCluster_hash_recursive(NULL);
        __ZcmLidarCluster_hash_computed = 1;
    }

    return __ZcmLidarCluster_hash;
}

int __ZcmLidarCluster_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarCluster* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].clusterID), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].pointsCount), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarScalaPoint_encode_array(buf, offset + pos, maxlen - pos, p[element].scanPoints, p[element].pointsCount);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarClusterMediumPoint_encode_array(buf, offset + pos, maxlen - pos, &(p[element].medium_point), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarClusterBoundRect_encode_array(buf, offset + pos, maxlen - pos, &(p[element].bounding_rect), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int ZcmLidarCluster_encode(void* buf, uint32_t offset, uint32_t maxlen, const ZcmLidarCluster* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarCluster_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __ZcmLidarCluster_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __ZcmLidarCluster_encoded_array_size(const ZcmLidarCluster* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __int32_t_encoded_array_size(&(p[element].clusterID), 1);

        size += __int32_t_encoded_array_size(&(p[element].pointsCount), 1);

        size += __ZcmLidarScalaPoint_encoded_array_size(p[element].scanPoints, p[element].pointsCount);

        size += __ZcmLidarClusterMediumPoint_encoded_array_size(&(p[element].medium_point), 1);

        size += __ZcmLidarClusterBoundRect_encoded_array_size(&(p[element].bounding_rect), 1);

    }
    return size;
}

uint32_t ZcmLidarCluster_encoded_size(const ZcmLidarCluster* p)
{
    return 8 + __ZcmLidarCluster_encoded_array_size(p, 1);
}

uint32_t ZcmLidarCluster_struct_size(void)
{
    return sizeof(ZcmLidarCluster);
}

uint32_t ZcmLidarCluster_num_fields(void)
{
    return 5;
}

int ZcmLidarCluster_get_field(const ZcmLidarCluster* p, uint32_t i, zcm_field_t* f)
{
    if (i >= ZcmLidarCluster_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "clusterID";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->clusterID;
            return 0;
        }
        
        case 1: {
            f->name = "pointsCount";
            f->type = ZCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void*) &p->pointsCount;
            return 0;
        }
        
        case 2: {
            /* ZcmLidarScalaPoint */
            f->name = "scanPoints";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmLidarScalaPoint";
            f->num_dim = 1;
            f->dim_size[0] = p->pointsCount;
            f->dim_is_variable[0] = 1;
            f->data = (void*) &p->scanPoints;
            return 0;
        }
        
        case 3: {
            /* ZcmLidarClusterMediumPoint */
            f->name = "medium_point";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmLidarClusterMediumPoint";
            f->num_dim = 0;
            f->data = (void*) &p->medium_point;
            return 0;
        }
        
        case 4: {
            /* ZcmLidarClusterBoundRect */
            f->name = "bounding_rect";
            f->type = ZCM_FIELD_USER_TYPE;
            f->typestr = "ZcmLidarClusterBoundRect";
            f->num_dim = 0;
            f->data = (void*) &p->bounding_rect;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* ZcmLidarCluster_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) ZcmLidarCluster_encode;
        typeinfo.decode         = (zcm_decode_t) ZcmLidarCluster_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) ZcmLidarCluster_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) ZcmLidarCluster_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  ZcmLidarCluster_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) ZcmLidarCluster_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) ZcmLidarCluster_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __ZcmLidarCluster_get_hash;
    }
    
    return &typeinfo;
}
int __ZcmLidarCluster_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarCluster* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].clusterID), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].pointsCount), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].scanPoints = (ZcmLidarScalaPoint*) zcm_malloc(sizeof(ZcmLidarScalaPoint) * p[element].pointsCount);
        thislen = __ZcmLidarScalaPoint_decode_array(buf, offset + pos, maxlen - pos, p[element].scanPoints, p[element].pointsCount);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarClusterMediumPoint_decode_array(buf, offset + pos, maxlen - pos, &(p[element].medium_point), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __ZcmLidarClusterBoundRect_decode_array(buf, offset + pos, maxlen - pos, &(p[element].bounding_rect), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __ZcmLidarCluster_decode_array_cleanup(ZcmLidarCluster* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __int32_t_decode_array_cleanup(&(p[element].clusterID), 1);

        __int32_t_decode_array_cleanup(&(p[element].pointsCount), 1);

        __ZcmLidarScalaPoint_decode_array_cleanup(p[element].scanPoints, p[element].pointsCount);
        if (p[element].scanPoints) free(p[element].scanPoints);

        __ZcmLidarClusterMediumPoint_decode_array_cleanup(&(p[element].medium_point), 1);

        __ZcmLidarClusterBoundRect_decode_array_cleanup(&(p[element].bounding_rect), 1);

    }
    return 0;
}

int ZcmLidarCluster_decode(const void* buf, uint32_t offset, uint32_t maxlen, ZcmLidarCluster* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __ZcmLidarCluster_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __ZcmLidarCluster_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int ZcmLidarCluster_decode_cleanup(ZcmLidarCluster* p)
{
    return __ZcmLidarCluster_decode_array_cleanup(p, 1);
}

uint32_t __ZcmLidarCluster_clone_array(const ZcmLidarCluster* p, ZcmLidarCluster* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __int32_t_clone_array(&(p[element].clusterID), &(q[element].clusterID), 1);

        n += __int32_t_clone_array(&(p[element].pointsCount), &(q[element].pointsCount), 1);

        q[element].scanPoints = (ZcmLidarScalaPoint*) zcm_malloc(sizeof(ZcmLidarScalaPoint) * q[element].pointsCount);
        n += __ZcmLidarScalaPoint_clone_array(p[element].scanPoints, q[element].scanPoints, p[element].pointsCount);

        n += __ZcmLidarClusterMediumPoint_clone_array(&(p[element].medium_point), &(q[element].medium_point), 1);

        n += __ZcmLidarClusterBoundRect_clone_array(&(p[element].bounding_rect), &(q[element].bounding_rect), 1);

    }
    return n;
}

ZcmLidarCluster* ZcmLidarCluster_copy(const ZcmLidarCluster* p)
{
    ZcmLidarCluster* q = (ZcmLidarCluster*) malloc(sizeof(ZcmLidarCluster));
    __ZcmLidarCluster_clone_array(p, q, 1);
    return q;
}

void ZcmLidarCluster_destroy(ZcmLidarCluster* p)
{
    __ZcmLidarCluster_decode_array_cleanup(p, 1);
    free(p);
}

int ZcmLidarCluster_publish(zcm_t* zcm, const char* channel, const ZcmLidarCluster* p)
{
      uint32_t max_data_size = ZcmLidarCluster_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = ZcmLidarCluster_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _ZcmLidarCluster_subscription_t {
    ZcmLidarCluster_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void ZcmLidarCluster_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    ZcmLidarCluster p;
    memset(&p, 0, sizeof(ZcmLidarCluster));
    status = ZcmLidarCluster_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding ZcmLidarCluster!!!\n", status);
        return;
    }

    ZcmLidarCluster_subscription_t* h = (ZcmLidarCluster_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    ZcmLidarCluster_decode_cleanup (&p);
}

ZcmLidarCluster_subscription_t* ZcmLidarCluster_subscribe (zcm_t* zcm,
                    const char* channel,
                    ZcmLidarCluster_handler_t f, void* userdata)
{
    ZcmLidarCluster_subscription_t* n = (ZcmLidarCluster_subscription_t*)
                       malloc(sizeof(ZcmLidarCluster_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              ZcmLidarCluster_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg ZcmLidarCluster ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int ZcmLidarCluster_unsubscribe(zcm_t* zcm, ZcmLidarCluster_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe ZcmLidarCluster_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

