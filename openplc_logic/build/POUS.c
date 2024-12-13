void LOGGER_init__(LOGGER *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->TRIG,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->LEVEL,LOGLEVEL__INFO,retain)
  __INIT_VAR(data__->TRIG0,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void LOGGER_body__(LOGGER *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if ((__GET_VAR(data__->TRIG,) && !(__GET_VAR(data__->TRIG0,)))) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

   LogMessage(GetFbVar(LEVEL),(char*)GetFbVar(MSG, .body),GetFbVar(MSG, .len));
  
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,TRIG0,,__GET_VAR(data__->TRIG,));

  goto __end;

__end:
  return;
} // LOGGER_body__() 





static inline INT __PROGRAM0_ADD__INT__INT1(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD113_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_ADD113_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT2(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ9_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ9_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT3(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD5_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1);
  __SET_VAR(,data__->_TMP_ADD5_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT4(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ18_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ18_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT5(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD17_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1);
  __SET_VAR(,data__->_TMP_ADD17_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT6(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ31_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ31_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT7(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD30_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1);
  __SET_VAR(,data__->_TMP_ADD30_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT8(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ49_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ49_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT9(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD48_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1);
  __SET_VAR(,data__->_TMP_ADD48_ENO,,__TMP_ENO);
  return __res;
}

static inline BOOL __PROGRAM0_EQ__BOOL__INT10(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  INT IN2,
  PROGRAM0 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_EQ63_ENO,);
  __res = EQ__BOOL__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1,
    IN2);
  __SET_VAR(,data__->_TMP_EQ63_ENO,,__TMP_ENO);
  return __res;
}

static inline INT __PROGRAM0_ADD__INT__INT11(BOOL EN,
  UINT __PARAM_COUNT,
  INT IN1,
  PROGRAM0 *data__)
{
  INT __res;
  BOOL __TMP_ENO = __GET_VAR(data__->_TMP_ADD62_ENO,);
  __res = ADD__INT__INT(EN,
    &__TMP_ENO,
    __PARAM_COUNT,
    IN1);
  __SET_VAR(,data__->_TMP_ADD62_ENO,,__TMP_ENO);
  return __res;
}

void PROGRAM0_init__(PROGRAM0 *data__, BOOL retain) {
  __INIT_VAR(data__->SENSOR_0,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->SENSOR_1,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARM_DETECT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->MOTOR_0,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MOTOR_1,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MOTOR_2,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MOTOR_3,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ARM_Z,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARM_X,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->ARM_SUCK,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->CL,0,retain)
  TON_init__(&data__->TON0,retain);
  TON_init__(&data__->TON1,retain);
  TON_init__(&data__->TON2,retain);
  TON_init__(&data__->TON3,retain);
  TON_init__(&data__->TON4,retain);
  TON_init__(&data__->TON5,retain);
  TON_init__(&data__->TON6,retain);
  __INIT_VAR(data__->_TMP_EQ40_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_AND97_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD113_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD113_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ101_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ9_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ9_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD5_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD5_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ12_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ18_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ18_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD17_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD17_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ25_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ31_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ31_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD30_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD30_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ43_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ49_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ49_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD48_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD48_OUT,0,retain)
  __INIT_VAR(data__->_TMP_EQ8_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ63_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_EQ63_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD62_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->_TMP_ADD62_OUT,0,retain)
}

// Code part
void PROGRAM0_body__(PROGRAM0 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_EQ40_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)0));
  if ((__GET_VAR(data__->SENSOR_0,) && __GET_VAR(data__->_TMP_EQ40_OUT,))) {
    __SET_VAR(data__->,MOTOR_0,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SENSOR_1,) && __GET_VAR(data__->_TMP_EQ40_OUT,))) {
    __SET_VAR(data__->,MOTOR_1,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_AND97_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)(__GET_VAR(data__->SENSOR_0,) && __GET_VAR(data__->_TMP_EQ40_OUT,)),
    (BOOL)(__GET_VAR(data__->SENSOR_1,) && __GET_VAR(data__->_TMP_EQ40_OUT,))));
  __SET_VAR(data__->,_TMP_ADD113_OUT,,__PROGRAM0_ADD__INT__INT1(
    (BOOL)__GET_VAR(data__->_TMP_AND97_OUT,),
    (UINT)2,
    (INT)1,
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_ADD113_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD113_OUT,));
  };
  __SET_VAR(data__->,_TMP_EQ101_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)1));
  __SET_VAR(data__->TON0.,IN,,(__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ101_OUT,)));
  __SET_VAR(data__->TON0.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,_TMP_EQ9_OUT,,__PROGRAM0_EQ__BOOL__INT2(
    (BOOL)__GET_VAR(data__->TON0.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)1,
    data__));
  __SET_VAR(data__->,_TMP_ADD5_OUT,,__PROGRAM0_ADD__INT__INT3(
    (BOOL)__GET_VAR(data__->_TMP_EQ9_OUT,),
    (UINT)1,
    (INT)2,
    data__));
  if (__GET_VAR(data__->_TMP_ADD5_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD5_OUT,));
  };
  if (__GET_VAR(data__->_TMP_EQ101_OUT,)) {
    __SET_VAR(data__->,ARM_Z,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ101_OUT,))) {
    __SET_VAR(data__->,ARM_SUCK,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_EQ12_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)2));
  if ((__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ12_OUT,))) {
    __SET_VAR(data__->,ARM_Z,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON1.,IN,,(__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ12_OUT,)));
  __SET_VAR(data__->TON1.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON1);
  __SET_VAR(data__->,_TMP_EQ18_OUT,,__PROGRAM0_EQ__BOOL__INT4(
    (BOOL)__GET_VAR(data__->TON1.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)2,
    data__));
  __SET_VAR(data__->,_TMP_ADD17_OUT,,__PROGRAM0_ADD__INT__INT5(
    (BOOL)__GET_VAR(data__->_TMP_EQ18_OUT,),
    (UINT)1,
    (INT)3,
    data__));
  if (__GET_VAR(data__->_TMP_ADD17_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD17_OUT,));
  };
  if ((__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ12_OUT,))) {
    __SET_VAR(data__->,ARM_X,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_EQ25_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)3));
  if ((__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ25_OUT,))) {
    __SET_VAR(data__->,ARM_Z,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON2.,IN,,(__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ25_OUT,)));
  __SET_VAR(data__->TON2.,PT,,__time_to_timespec(1, 1500, 0, 0, 0, 0));
  TON_body__(&data__->TON2);
  __SET_VAR(data__->,_TMP_EQ31_OUT,,__PROGRAM0_EQ__BOOL__INT6(
    (BOOL)__GET_VAR(data__->TON2.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)3,
    data__));
  __SET_VAR(data__->,_TMP_ADD30_OUT,,__PROGRAM0_ADD__INT__INT7(
    (BOOL)__GET_VAR(data__->_TMP_EQ31_OUT,),
    (UINT)1,
    (INT)4,
    data__));
  if (__GET_VAR(data__->_TMP_ADD30_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD30_OUT,));
  };
  if ((__GET_VAR(data__->ARM_DETECT,) && __GET_VAR(data__->_TMP_EQ25_OUT,))) {
    __SET_VAR(data__->,ARM_X,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->,_TMP_EQ43_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)4));
  if (__GET_VAR(data__->_TMP_EQ43_OUT,)) {
    __SET_VAR(data__->,ARM_Z,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->_TMP_EQ43_OUT,)) {
    __SET_VAR(data__->,ARM_X,,__BOOL_LITERAL(TRUE));
  };
  __SET_VAR(data__->TON3.,IN,,__GET_VAR(data__->_TMP_EQ43_OUT,));
  __SET_VAR(data__->TON3.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON3);
  __SET_VAR(data__->TON6.,IN,,__GET_VAR(data__->TON3.Q,));
  __SET_VAR(data__->TON6.,PT,,__time_to_timespec(1, 200, 0, 0, 0, 0));
  TON_body__(&data__->TON6);
  __SET_VAR(data__->,_TMP_EQ49_OUT,,__PROGRAM0_EQ__BOOL__INT8(
    (BOOL)__GET_VAR(data__->TON6.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)4,
    data__));
  __SET_VAR(data__->,_TMP_ADD48_OUT,,__PROGRAM0_ADD__INT__INT9(
    (BOOL)__GET_VAR(data__->_TMP_EQ49_OUT,),
    (UINT)1,
    (INT)5,
    data__));
  if (__GET_VAR(data__->_TMP_ADD48_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD48_OUT,));
  };
  if (__GET_VAR(data__->TON3.Q,)) {
    __SET_VAR(data__->,ARM_SUCK,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->,_TMP_EQ8_OUT,,EQ__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)5));
  if (__GET_VAR(data__->_TMP_EQ8_OUT,)) {
    __SET_VAR(data__->,ARM_Z,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->_TMP_EQ8_OUT,)) {
    __SET_VAR(data__->,ARM_X,,__BOOL_LITERAL(FALSE));
  };
  __SET_VAR(data__->TON4.,IN,,__GET_VAR(data__->_TMP_EQ8_OUT,));
  __SET_VAR(data__->TON4.,PT,,__time_to_timespec(1, 0, 2, 0, 0, 0));
  TON_body__(&data__->TON4);
  __SET_VAR(data__->TON5.,IN,,(__GET_VAR(data__->TON4.Q,) || __GET_VAR(data__->TON4.Q,)));
  __SET_VAR(data__->TON5.,PT,,__time_to_timespec(1, 750, 0, 0, 0, 0));
  TON_body__(&data__->TON5);
  __SET_VAR(data__->,_TMP_EQ63_OUT,,__PROGRAM0_EQ__BOOL__INT10(
    (BOOL)__GET_VAR(data__->TON5.Q,),
    (UINT)2,
    (INT)__GET_VAR(data__->CL,),
    (INT)5,
    data__));
  __SET_VAR(data__->,_TMP_ADD62_OUT,,__PROGRAM0_ADD__INT__INT11(
    (BOOL)__GET_VAR(data__->_TMP_EQ63_OUT,),
    (UINT)1,
    (INT)0,
    data__));
  if (__GET_VAR(data__->_TMP_ADD62_ENO,)) {
    __SET_VAR(data__->,CL,,__GET_VAR(data__->_TMP_ADD62_OUT,));
  };
  if ((__GET_VAR(data__->SENSOR_0,) && __GET_VAR(data__->_TMP_EQ40_OUT,))) {
    __SET_VAR(data__->,MOTOR_2,,__BOOL_LITERAL(FALSE));
  };
  if ((__GET_VAR(data__->SENSOR_1,) && __GET_VAR(data__->_TMP_EQ40_OUT,))) {
    __SET_VAR(data__->,MOTOR_3,,__BOOL_LITERAL(FALSE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,MOTOR_0,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,MOTOR_2,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,MOTOR_1,,__BOOL_LITERAL(TRUE));
  };
  if (__GET_VAR(data__->TON4.Q,)) {
    __SET_VAR(data__->,MOTOR_3,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PROGRAM0_body__() 





