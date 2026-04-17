#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

// PROGRAM MAIN
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,CRAC_FAN_STATUS)
  __DECLARE_VAR(BOOL,TEMP_HIGH_ALARM)
  __DECLARE_LOCATED(INT,SENSOR_TEMP)
  __DECLARE_LOCATED(INT,FAN_SPEED)
  __DECLARE_LOCATED(INT,SENSOR_POWER)
  __DECLARE_LOCATED(BOOL,OVERHEAT_ALARM)
  __DECLARE_VAR(BOOL,_TMP_GT4543488_OUT)

} MAIN;

void MAIN_init__(MAIN *data__, BOOL retain);
// Code part
void MAIN_body__(MAIN *data__);
#endif //__POUS_H
