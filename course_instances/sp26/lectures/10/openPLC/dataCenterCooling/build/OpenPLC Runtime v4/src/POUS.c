void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->CRAC_FAN_STATUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TEMP_HIGH_ALARM,__BOOL_LITERAL(FALSE),retain)
  __INIT_LOCATED(INT,__MW0,data__->SENSOR_TEMP,retain)
  __INIT_LOCATED_VALUE(data__->SENSOR_TEMP,0)
  __INIT_LOCATED(INT,__QW0,data__->FAN_SPEED,retain)
  __INIT_LOCATED_VALUE(data__->FAN_SPEED,0)
  __INIT_LOCATED(INT,__MW1,data__->SENSOR_POWER,retain)
  __INIT_LOCATED_VALUE(data__->SENSOR_POWER,0)
  __INIT_LOCATED(BOOL,__QX0_0,data__->OVERHEAT_ALARM,retain)
  __INIT_LOCATED_VALUE(data__->OVERHEAT_ALARM,__BOOL_LITERAL(FALSE))
  __INIT_VAR(data__->_TMP_GT4543488_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,_TMP_GT4543488_OUT,,GT__BOOL__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (INT)__GET_LOCATED(data__->SENSOR_TEMP,),
    (INT)3500));
  __SET_LOCATED(data__->,OVERHEAT_ALARM,,__GET_VAR(data__->_TMP_GT4543488_OUT,));
  __SET_VAR(data__->,TEMP_HIGH_ALARM,,__GET_VAR(data__->CRAC_FAN_STATUS,));

  goto __end;

__end:
  return;
} // MAIN_body__() 





