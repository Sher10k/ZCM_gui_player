// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by zcm-gen

#include <string.h>
#include "LidarSickErrors.h"

static int __LidarSickErrors_hash_computed;
static uint64_t __LidarSickErrors_hash;

uint64_t __LidarSickErrors_hash_recursive(const __zcm_hash_ptr* p)
{
    const __zcm_hash_ptr* fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __LidarSickErrors_get_hash)
            return 0;

    __zcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = (void*)__LidarSickErrors_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0x0aae5f84d16c4accLL
         + __ZcmService_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
         + __boolean_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __LidarSickErrors_get_hash(void)
{
    if (!__LidarSickErrors_hash_computed) {
        __LidarSickErrors_hash = (int64_t)__LidarSickErrors_hash_recursive(NULL);
        __LidarSickErrors_hash_computed = 1;
    }

    return __LidarSickErrors_hash;
}

int __LidarSickErrors_encode_array(void* buf, uint32_t offset, uint32_t maxlen, const LidarSickErrors* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_encode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].contact_support), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].buffer_transferred_incompletely), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].buffer_overflow), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].under_temperature), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].over_temperature), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].temp_sensor_defect), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_not_receiving_data), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_not_communicate_fpga), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_communication_timeout), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].incorrect_configuration_data), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].incorrect_configuration_param), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].data_processing_timeout), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].can_message_lost), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].severe_deviation), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_encode_array(buf, offset + pos, maxlen - pos, &(p[element].motor_blocked), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int LidarSickErrors_encode(void* buf, uint32_t offset, uint32_t maxlen, const LidarSickErrors* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __LidarSickErrors_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __LidarSickErrors_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

uint32_t __LidarSickErrors_encoded_array_size(const LidarSickErrors* p, uint32_t elements)
{
    uint32_t size = 0, element;
    for (element = 0; element < elements; ++element) {

        size += __ZcmService_encoded_array_size(&(p[element].service), 1);

        size += __boolean_encoded_array_size(&(p[element].contact_support), 1);

        size += __boolean_encoded_array_size(&(p[element].buffer_transferred_incompletely), 1);

        size += __boolean_encoded_array_size(&(p[element].buffer_overflow), 1);

        size += __boolean_encoded_array_size(&(p[element].under_temperature), 1);

        size += __boolean_encoded_array_size(&(p[element].over_temperature), 1);

        size += __boolean_encoded_array_size(&(p[element].temp_sensor_defect), 1);

        size += __boolean_encoded_array_size(&(p[element].dsp_not_receiving_data), 1);

        size += __boolean_encoded_array_size(&(p[element].dsp_not_communicate_fpga), 1);

        size += __boolean_encoded_array_size(&(p[element].dsp_communication_timeout), 1);

        size += __boolean_encoded_array_size(&(p[element].incorrect_configuration_data), 1);

        size += __boolean_encoded_array_size(&(p[element].incorrect_configuration_param), 1);

        size += __boolean_encoded_array_size(&(p[element].data_processing_timeout), 1);

        size += __boolean_encoded_array_size(&(p[element].can_message_lost), 1);

        size += __boolean_encoded_array_size(&(p[element].severe_deviation), 1);

        size += __boolean_encoded_array_size(&(p[element].motor_blocked), 1);

    }
    return size;
}

uint32_t LidarSickErrors_encoded_size(const LidarSickErrors* p)
{
    return 8 + __LidarSickErrors_encoded_array_size(p, 1);
}

uint32_t LidarSickErrors_struct_size(void)
{
    return sizeof(LidarSickErrors);
}

uint32_t LidarSickErrors_num_fields(void)
{
    return 16;
}

int LidarSickErrors_get_field(const LidarSickErrors* p, uint32_t i, zcm_field_t* f)
{
    if (i >= LidarSickErrors_num_fields())
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
            f->name = "contact_support";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->contact_support;
            return 0;
        }
        
        case 2: {
            f->name = "buffer_transferred_incompletely";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->buffer_transferred_incompletely;
            return 0;
        }
        
        case 3: {
            f->name = "buffer_overflow";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->buffer_overflow;
            return 0;
        }
        
        case 4: {
            f->name = "under_temperature";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->under_temperature;
            return 0;
        }
        
        case 5: {
            f->name = "over_temperature";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->over_temperature;
            return 0;
        }
        
        case 6: {
            f->name = "temp_sensor_defect";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->temp_sensor_defect;
            return 0;
        }
        
        case 7: {
            f->name = "dsp_not_receiving_data";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->dsp_not_receiving_data;
            return 0;
        }
        
        case 8: {
            f->name = "dsp_not_communicate_fpga";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->dsp_not_communicate_fpga;
            return 0;
        }
        
        case 9: {
            f->name = "dsp_communication_timeout";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->dsp_communication_timeout;
            return 0;
        }
        
        case 10: {
            f->name = "incorrect_configuration_data";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->incorrect_configuration_data;
            return 0;
        }
        
        case 11: {
            f->name = "incorrect_configuration_param";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->incorrect_configuration_param;
            return 0;
        }
        
        case 12: {
            f->name = "data_processing_timeout";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->data_processing_timeout;
            return 0;
        }
        
        case 13: {
            f->name = "can_message_lost";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->can_message_lost;
            return 0;
        }
        
        case 14: {
            f->name = "severe_deviation";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->severe_deviation;
            return 0;
        }
        
        case 15: {
            f->name = "motor_blocked";
            f->type = ZCM_FIELD_BOOLEAN;
            f->typestr = "boolean";
            f->num_dim = 0;
            f->data = (void*) &p->motor_blocked;
            return 0;
        }
        
        default:
            return 1;
    }
}

const zcm_type_info_t* LidarSickErrors_get_type_info(void)
{
    static int init = 0;
    static zcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (zcm_encode_t) LidarSickErrors_encode;
        typeinfo.decode         = (zcm_decode_t) LidarSickErrors_decode;
        typeinfo.decode_cleanup = (zcm_decode_cleanup_t) LidarSickErrors_decode_cleanup;
        typeinfo.encoded_size   = (zcm_encoded_size_t) LidarSickErrors_encoded_size;
        typeinfo.struct_size    = (zcm_struct_size_t)  LidarSickErrors_struct_size;
        typeinfo.num_fields     = (zcm_num_fields_t) LidarSickErrors_num_fields;
        typeinfo.get_field      = (zcm_get_field_t) LidarSickErrors_get_field;
        typeinfo.get_hash       = (zcm_get_hash_t) __LidarSickErrors_get_hash;
    }
    
    return &typeinfo;
}
int __LidarSickErrors_decode_array(const void* buf, uint32_t offset, uint32_t maxlen, LidarSickErrors* p, uint32_t elements)
{
    uint32_t pos = 0, element;
    int thislen;

    for (element = 0; element < elements; ++element) {

        thislen = __ZcmService_decode_array(buf, offset + pos, maxlen - pos, &(p[element].service), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].contact_support), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].buffer_transferred_incompletely), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].buffer_overflow), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].under_temperature), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].over_temperature), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].temp_sensor_defect), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_not_receiving_data), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_not_communicate_fpga), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].dsp_communication_timeout), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].incorrect_configuration_data), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].incorrect_configuration_param), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].data_processing_timeout), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].can_message_lost), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].severe_deviation), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __boolean_decode_array(buf, offset + pos, maxlen - pos, &(p[element].motor_blocked), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __LidarSickErrors_decode_array_cleanup(LidarSickErrors* p, uint32_t elements)
{
    uint32_t element;
    for (element = 0; element < elements; ++element) {

        __ZcmService_decode_array_cleanup(&(p[element].service), 1);

        __boolean_decode_array_cleanup(&(p[element].contact_support), 1);

        __boolean_decode_array_cleanup(&(p[element].buffer_transferred_incompletely), 1);

        __boolean_decode_array_cleanup(&(p[element].buffer_overflow), 1);

        __boolean_decode_array_cleanup(&(p[element].under_temperature), 1);

        __boolean_decode_array_cleanup(&(p[element].over_temperature), 1);

        __boolean_decode_array_cleanup(&(p[element].temp_sensor_defect), 1);

        __boolean_decode_array_cleanup(&(p[element].dsp_not_receiving_data), 1);

        __boolean_decode_array_cleanup(&(p[element].dsp_not_communicate_fpga), 1);

        __boolean_decode_array_cleanup(&(p[element].dsp_communication_timeout), 1);

        __boolean_decode_array_cleanup(&(p[element].incorrect_configuration_data), 1);

        __boolean_decode_array_cleanup(&(p[element].incorrect_configuration_param), 1);

        __boolean_decode_array_cleanup(&(p[element].data_processing_timeout), 1);

        __boolean_decode_array_cleanup(&(p[element].can_message_lost), 1);

        __boolean_decode_array_cleanup(&(p[element].severe_deviation), 1);

        __boolean_decode_array_cleanup(&(p[element].motor_blocked), 1);

    }
    return 0;
}

int LidarSickErrors_decode(const void* buf, uint32_t offset, uint32_t maxlen, LidarSickErrors* p)
{
    uint32_t pos = 0;
    int thislen;
    int64_t hash = __LidarSickErrors_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __LidarSickErrors_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int LidarSickErrors_decode_cleanup(LidarSickErrors* p)
{
    return __LidarSickErrors_decode_array_cleanup(p, 1);
}

uint32_t __LidarSickErrors_clone_array(const LidarSickErrors* p, LidarSickErrors* q, uint32_t elements)
{
    uint32_t n = 0, element;
    for (element = 0; element < elements; ++element) {

        n += __ZcmService_clone_array(&(p[element].service), &(q[element].service), 1);

        n += __boolean_clone_array(&(p[element].contact_support), &(q[element].contact_support), 1);

        n += __boolean_clone_array(&(p[element].buffer_transferred_incompletely), &(q[element].buffer_transferred_incompletely), 1);

        n += __boolean_clone_array(&(p[element].buffer_overflow), &(q[element].buffer_overflow), 1);

        n += __boolean_clone_array(&(p[element].under_temperature), &(q[element].under_temperature), 1);

        n += __boolean_clone_array(&(p[element].over_temperature), &(q[element].over_temperature), 1);

        n += __boolean_clone_array(&(p[element].temp_sensor_defect), &(q[element].temp_sensor_defect), 1);

        n += __boolean_clone_array(&(p[element].dsp_not_receiving_data), &(q[element].dsp_not_receiving_data), 1);

        n += __boolean_clone_array(&(p[element].dsp_not_communicate_fpga), &(q[element].dsp_not_communicate_fpga), 1);

        n += __boolean_clone_array(&(p[element].dsp_communication_timeout), &(q[element].dsp_communication_timeout), 1);

        n += __boolean_clone_array(&(p[element].incorrect_configuration_data), &(q[element].incorrect_configuration_data), 1);

        n += __boolean_clone_array(&(p[element].incorrect_configuration_param), &(q[element].incorrect_configuration_param), 1);

        n += __boolean_clone_array(&(p[element].data_processing_timeout), &(q[element].data_processing_timeout), 1);

        n += __boolean_clone_array(&(p[element].can_message_lost), &(q[element].can_message_lost), 1);

        n += __boolean_clone_array(&(p[element].severe_deviation), &(q[element].severe_deviation), 1);

        n += __boolean_clone_array(&(p[element].motor_blocked), &(q[element].motor_blocked), 1);

    }
    return n;
}

LidarSickErrors* LidarSickErrors_copy(const LidarSickErrors* p)
{
    LidarSickErrors* q = (LidarSickErrors*) malloc(sizeof(LidarSickErrors));
    __LidarSickErrors_clone_array(p, q, 1);
    return q;
}

void LidarSickErrors_destroy(LidarSickErrors* p)
{
    __LidarSickErrors_decode_array_cleanup(p, 1);
    free(p);
}

int LidarSickErrors_publish(zcm_t* zcm, const char* channel, const LidarSickErrors* p)
{
      uint32_t max_data_size = LidarSickErrors_encoded_size (p);
      uint8_t* buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = LidarSickErrors_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = zcm_publish (zcm, channel, buf, (uint32_t)data_size);
      free (buf);
      return status;
}

struct _LidarSickErrors_subscription_t {
    LidarSickErrors_handler_t user_handler;
    void* userdata;
    zcm_sub_t* z_sub;
};
static
void LidarSickErrors_handler_stub (const zcm_recv_buf_t* rbuf,
                            const char* channel, void* userdata)
{
    int status;
    LidarSickErrors p;
    memset(&p, 0, sizeof(LidarSickErrors));
    status = LidarSickErrors_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding LidarSickErrors!!!\n", status);
        return;
    }

    LidarSickErrors_subscription_t* h = (LidarSickErrors_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    LidarSickErrors_decode_cleanup (&p);
}

LidarSickErrors_subscription_t* LidarSickErrors_subscribe (zcm_t* zcm,
                    const char* channel,
                    LidarSickErrors_handler_t f, void* userdata)
{
    LidarSickErrors_subscription_t* n = (LidarSickErrors_subscription_t*)
                       malloc(sizeof(LidarSickErrors_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->z_sub = zcm_subscribe (zcm, channel,
                              LidarSickErrors_handler_stub, n);
    if (n->z_sub == NULL) {
        fprintf (stderr,"couldn't reg LidarSickErrors ZCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int LidarSickErrors_unsubscribe(zcm_t* zcm, LidarSickErrors_subscription_t* hid)
{
    int status = zcm_unsubscribe (zcm, hid->z_sub);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe LidarSickErrors_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
