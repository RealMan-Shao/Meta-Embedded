//
// Created by Wu Feiyang on 7/6/23.
//

#include "can_motor_config.h"

CANMotorBase CANMotorCFG::CANMotorProfile[MOTOR_COUNT] = {
        {CANMotorBase::can_channel_1, 0x206, CANMotorBase::GM6020, 1419},
        {CANMotorBase::can_channel_1, 0x201, CANMotorBase::M3508, 0},
        {CANMotorBase::can_channel_1, 0x202, CANMotorBase::M3508, 0},
        {CANMotorBase::can_channel_1, 0x203, CANMotorBase::M2006, 0},
};

PIDController::pid_params_t CANMotorCFG::a2vParams[MOTOR_COUNT] = {
        {20, 0.0f, 500,  000, 550},
        {20, 0, 0.2, 100, 3000},
        {20, 0, 0.2, 100, 3000},
        {10, 0, 0.2, 100, 500},
};

PIDController::pid_params_t CANMotorCFG::v2iParams[MOTOR_COUNT] = {
        {15.0f,0.0f,5.0f,5000,30000.0},
        {50.0f, 0.1f, 0.02f, 2000.0,   6000.0},
        {50.0f, 0.1f, 0.02f, 2000.0,   6000.0},
        {26.0f, 0.1f, 0.02f, 2000.0,   6000.0},
};

bool CANMotorCFG::enable_a2v[MOTOR_COUNT] {false};

bool CANMotorCFG::enable_v2i[MOTOR_COUNT] {false};