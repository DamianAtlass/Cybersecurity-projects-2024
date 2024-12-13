#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM PROGRAM0
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,SENSOR_0)
  __DECLARE_VAR(BOOL,SENSOR_1)
  __DECLARE_VAR(BOOL,ARM_DETECT)
  __DECLARE_VAR(BOOL,MOTOR_0)
  __DECLARE_VAR(BOOL,MOTOR_1)
  __DECLARE_VAR(BOOL,MOTOR_2)
  __DECLARE_VAR(BOOL,MOTOR_3)
  __DECLARE_VAR(BOOL,ARM_Z)
  __DECLARE_VAR(BOOL,ARM_X)
  __DECLARE_VAR(BOOL,ARM_SUCK)
  __DECLARE_VAR(INT,CL)
  TON TON0;
  TON TON1;
  TON TON2;
  TON TON3;
  TON TON4;
  TON TON5;
  TON TON6;
  __DECLARE_VAR(BOOL,_TMP_EQ40_OUT)
  __DECLARE_VAR(BOOL,_TMP_AND97_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD113_ENO)
  __DECLARE_VAR(INT,_TMP_ADD113_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ101_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ9_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ9_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD5_ENO)
  __DECLARE_VAR(INT,_TMP_ADD5_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ12_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ18_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ18_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD17_ENO)
  __DECLARE_VAR(INT,_TMP_ADD17_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ25_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ31_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ31_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD30_ENO)
  __DECLARE_VAR(INT,_TMP_ADD30_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ43_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ49_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ49_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD48_ENO)
  __DECLARE_VAR(INT,_TMP_ADD48_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ8_OUT)
  __DECLARE_VAR(BOOL,_TMP_EQ63_ENO)
  __DECLARE_VAR(BOOL,_TMP_EQ63_OUT)
  __DECLARE_VAR(BOOL,_TMP_ADD62_ENO)
  __DECLARE_VAR(INT,_TMP_ADD62_OUT)

} PROGRAM0;

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain);
// Code part
void PROGRAM0_body__(PROGRAM0 *data__);
#endif //__POUS_H
