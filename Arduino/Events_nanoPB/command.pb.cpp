/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.1.7-dev at Tue Nov 13 15:12:47 2012. */

#include "command.pb.h"

const pb_field_t Protocol_fields[4] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    offsetof(Protocol, command), 0,
    pb_membersize(Protocol, command), 0, 0},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    pb_delta_end(Protocol, adress, command), 0,
    pb_membersize(Protocol, adress), 0, 0},

    {3, (pb_type_t) ((int) PB_HTYPE_OPTIONAL | (int) PB_LTYPE_STRING),
    pb_delta_end(Protocol, data, adress),
    pb_delta(Protocol, has_data, data),
    pb_membersize(Protocol, data), 0, 0},

    PB_LAST_FIELD
};
