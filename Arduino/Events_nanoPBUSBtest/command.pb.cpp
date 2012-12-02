/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.1.7-dev at Fri Nov 30 15:28:30 2012. */

#include "command.pb.h"



const pb_field_t accelerometerData_fields[4] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    offsetof(accelerometerData, x_value), 0,
    pb_membersize(accelerometerData, x_value), 0, 0},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(accelerometerData, y_value, x_value), 0,
    pb_membersize(accelerometerData, y_value), 0, 0},

    {3, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(accelerometerData, z_value, y_value), 0,
    pb_membersize(accelerometerData, z_value), 0, 0},

    PB_LAST_FIELD
};

const pb_field_t USSensorData_fields[6] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    offsetof(USSensorData, type), 0,
    pb_membersize(USSensorData, type), 0, 0},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    pb_delta_end(USSensorData, description, type), 0,
    pb_membersize(USSensorData, description), 0, 0},

    {3, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(USSensorData, echopin, description), 0,
    pb_membersize(USSensorData, echopin), 0, 0},

    {4, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(USSensorData, triggerpin, echopin), 0,
    pb_membersize(USSensorData, triggerpin), 0, 0},

    {5, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(USSensorData, value, triggerpin), 0,
    pb_membersize(USSensorData, value), 0, 0},

    PB_LAST_FIELD
};

const pb_field_t I2CSensorData_fields[5] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    offsetof(I2CSensorData, type), 0,
    pb_membersize(I2CSensorData, type), 0, 0},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_STRING),
    pb_delta_end(I2CSensorData, description, type), 0,
    pb_membersize(I2CSensorData, description), 0, 0},

    {3, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(I2CSensorData, address, description), 0,
    pb_membersize(I2CSensorData, address), 0, 0},

    {4, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(I2CSensorData, value, address), 0,
    pb_membersize(I2CSensorData, value), 0, 0},

    PB_LAST_FIELD
};

const pb_field_t DriveSignals_fields[4] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    offsetof(DriveSignals, forward), 0,
    pb_membersize(DriveSignals, forward), 0, 0},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(DriveSignals, enable, forward), 0,
    pb_membersize(DriveSignals, enable), 0, 0},

    {3, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_VARINT),
    pb_delta_end(DriveSignals, power, enable), 0,
    pb_membersize(DriveSignals, power), 0, 0},

    PB_LAST_FIELD
};

const pb_field_t Engines_fields[3] = {
    {1, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_SUBMESSAGE),
    offsetof(Engines, right), 0,
    pb_membersize(Engines, right), 0,
    &DriveSignals_fields},

    {2, (pb_type_t) ((int) PB_HTYPE_REQUIRED | (int) PB_LTYPE_SUBMESSAGE),
    pb_delta_end(Engines, left, right), 0,
    pb_membersize(Engines, left), 0,
    &DriveSignals_fields},

    PB_LAST_FIELD
};
