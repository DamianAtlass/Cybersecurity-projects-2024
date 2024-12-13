PROGRAM program0
  VAR
    sensor_0 AT %IX100.0 : BOOL;
    sensor_1 AT %IX100.1 : BOOL;
    arm_detect AT %IX100.2 : BOOL;
    motor_0 AT %QX100.0 : BOOL := True;
    motor_1 AT %QX100.1 : BOOL := True;
    arm_Z AT %QX100.4 : BOOL := False;
    arm_X AT %QX100.5 : BOOL := False;
    arm_suck AT %QX100.6 : BOOL := False;
  END_VAR
  VAR
    CL : INT := 0;
    TON0 : TON;
    TON1 : TON;
    TON2 : TON;
    TON3 : TON;
    TON4 : TON;
    TON5 : TON;
    TON6 : TON;
    CTU0 : CTU;
    TP0 : TP;
    motor_0_step : INT;
    motor_1_step : INT;
    CTU1 : CTU;
    TP1 : TP;
    _TMP_EQ40_OUT : BOOL;
    _TMP_EQ151_ENO : BOOL;
    _TMP_EQ151_OUT : BOOL;
    _TMP_EQ2_ENO : BOOL;
    _TMP_EQ2_OUT : BOOL;
    _TMP_AND97_OUT : BOOL;
    _TMP_ADD113_ENO : BOOL;
    _TMP_ADD113_OUT : INT;
    _TMP_EQ101_OUT : BOOL;
    _TMP_EQ9_ENO : BOOL;
    _TMP_EQ9_OUT : BOOL;
    _TMP_ADD5_ENO : BOOL;
    _TMP_ADD5_OUT : INT;
    _TMP_EQ12_OUT : BOOL;
    _TMP_EQ18_ENO : BOOL;
    _TMP_EQ18_OUT : BOOL;
    _TMP_ADD17_ENO : BOOL;
    _TMP_ADD17_OUT : INT;
    _TMP_EQ25_OUT : BOOL;
    _TMP_EQ31_ENO : BOOL;
    _TMP_EQ31_OUT : BOOL;
    _TMP_ADD30_ENO : BOOL;
    _TMP_ADD30_OUT : INT;
    _TMP_EQ43_OUT : BOOL;
    _TMP_EQ49_ENO : BOOL;
    _TMP_EQ49_OUT : BOOL;
    _TMP_ADD48_ENO : BOOL;
    _TMP_ADD48_OUT : INT;
    _TMP_EQ8_OUT : BOOL;
    _TMP_EQ63_ENO : BOOL;
    _TMP_EQ63_OUT : BOOL;
    _TMP_ADD62_ENO : BOOL;
    _TMP_ADD62_OUT : INT;
    _TMP_NOT144_OUT : BOOL;
    _TMP_AND145_OUT : BOOL;
    R_TRIG1 : R_TRIG;
    _TMP_NOT81_OUT : BOOL;
    _TMP_AND80_OUT : BOOL;
    R_TRIG2 : R_TRIG;
  END_VAR

  _TMP_EQ40_OUT := EQ(CL, 0);
  _TMP_EQ151_OUT := EQ(EN := _TMP_EQ40_OUT, IN1 := motor_0_step, IN2 := 2, ENO => _TMP_EQ151_ENO);
  IF _TMP_EQ151_OUT THEN
    motor_0 := FALSE; (*reset*)
  END_IF;
  _TMP_EQ2_OUT := EQ(EN := _TMP_EQ40_OUT, IN1 := motor_1_step, IN2 := 4, ENO => _TMP_EQ2_ENO);
  IF _TMP_EQ2_OUT THEN
    motor_1 := FALSE; (*reset*)
  END_IF;
  _TMP_AND97_OUT := AND(_TMP_EQ151_OUT, _TMP_EQ2_OUT);
  _TMP_ADD113_OUT := ADD(EN := _TMP_AND97_OUT, IN1 := 1, IN2 := 0, ENO => _TMP_ADD113_ENO);
  IF _TMP_ADD113_ENO THEN
      CL := _TMP_ADD113_OUT;
  END_IF;
  _TMP_EQ101_OUT := EQ(CL, 1);
  TON0(IN := _TMP_EQ101_OUT, PT := T#1500ms);
  _TMP_EQ9_OUT := EQ(EN := TON0.Q, IN1 := CL, IN2 := 1, ENO => _TMP_EQ9_ENO);
  _TMP_ADD5_OUT := ADD(EN := _TMP_EQ9_OUT, IN1 := 2, ENO => _TMP_ADD5_ENO);
  IF _TMP_ADD5_ENO THEN
      CL := _TMP_ADD5_OUT;
  END_IF;
  IF _TMP_EQ101_OUT THEN
    arm_Z := TRUE; (*set*)
  END_IF;
  IF _TMP_EQ101_OUT THEN
    arm_suck := TRUE; (*set*)
  END_IF;
  _TMP_EQ12_OUT := EQ(CL, 2);
  IF _TMP_EQ12_OUT THEN
    arm_Z := FALSE; (*reset*)
  END_IF;
  TON1(IN := _TMP_EQ12_OUT, PT := T#1500ms);
  _TMP_EQ18_OUT := EQ(EN := TON1.Q, IN1 := CL, IN2 := 2, ENO => _TMP_EQ18_ENO);
  _TMP_ADD17_OUT := ADD(EN := _TMP_EQ18_OUT, IN1 := 3, ENO => _TMP_ADD17_ENO);
  IF _TMP_ADD17_ENO THEN
      CL := _TMP_ADD17_OUT;
  END_IF;
  IF _TMP_EQ12_OUT THEN
    arm_X := TRUE; (*set*)
  END_IF;
  _TMP_EQ25_OUT := EQ(CL, 3);
  IF _TMP_EQ25_OUT THEN
    arm_Z := FALSE; (*reset*)
  END_IF;
  TON2(IN := _TMP_EQ25_OUT, PT := T#1500ms);
  _TMP_EQ31_OUT := EQ(EN := TON2.Q, IN1 := CL, IN2 := 3, ENO => _TMP_EQ31_ENO);
  _TMP_ADD30_OUT := ADD(EN := _TMP_EQ31_OUT, IN1 := 4, ENO => _TMP_ADD30_ENO);
  IF _TMP_ADD30_ENO THEN
      CL := _TMP_ADD30_OUT;
  END_IF;
  IF _TMP_EQ25_OUT THEN
    arm_X := TRUE; (*set*)
  END_IF;
  _TMP_EQ43_OUT := EQ(CL, 4);
  IF _TMP_EQ43_OUT THEN
    arm_Z := TRUE; (*set*)
  END_IF;
  IF _TMP_EQ43_OUT THEN
    arm_X := TRUE; (*set*)
  END_IF;
  TON3(IN := _TMP_EQ43_OUT, PT := T#2s);
  TON6(IN := TON3.Q, PT := T#200ms);
  _TMP_EQ49_OUT := EQ(EN := TON6.Q, IN1 := CL, IN2 := 4, ENO => _TMP_EQ49_ENO);
  _TMP_ADD48_OUT := ADD(EN := _TMP_EQ49_OUT, IN1 := 5, ENO => _TMP_ADD48_ENO);
  IF _TMP_ADD48_ENO THEN
      CL := _TMP_ADD48_OUT;
  END_IF;
  IF TON3.Q THEN
    arm_suck := FALSE; (*reset*)
  END_IF;
  _TMP_EQ8_OUT := EQ(CL, 5);
  IF _TMP_EQ8_OUT THEN
    arm_Z := FALSE; (*reset*)
  END_IF;
  IF _TMP_EQ8_OUT THEN
    arm_X := FALSE; (*reset*)
  END_IF;
  TON4(IN := _TMP_EQ8_OUT, PT := T#2s);
  TON5(IN := TON4.Q OR TON4.Q, PT := T#750ms);
  _TMP_EQ63_OUT := EQ(EN := TON5.Q, IN1 := CL, IN2 := 5, ENO => _TMP_EQ63_ENO);
  _TMP_ADD62_OUT := ADD(EN := _TMP_EQ63_OUT, IN1 := 0, ENO => _TMP_ADD62_ENO);
  IF _TMP_ADD62_ENO THEN
      CL := _TMP_ADD62_OUT;
  END_IF;
  IF TON4.Q THEN
    motor_0 := TRUE; (*set*)
  END_IF;
  IF TON4.Q THEN
    motor_1 := TRUE; (*set*)
  END_IF;
  _TMP_NOT144_OUT := NOT(TP0.Q);
  _TMP_AND145_OUT := AND(_TMP_NOT144_OUT, motor_0);
  TP0(IN := _TMP_AND145_OUT, PT := T#1s);
  R_TRIG1(CLK := TP0.Q);
  CTU0(CU := R_TRIG1.Q, R := CTU0.Q, PV := 3);
  motor_0_step := CTU0.CV;
  _TMP_NOT81_OUT := NOT(TP1.Q);
  _TMP_AND80_OUT := AND(_TMP_NOT81_OUT, motor_1);
  TP1(IN := _TMP_AND80_OUT, PT := T#1s);
  R_TRIG2(CLK := TP1.Q);
  CTU1(CU := R_TRIG2.Q, R := CTU1.Q, PV := 5);
  motor_1_step := CTU1.CV;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : program0;
  END_RESOURCE
END_CONFIGURATION

