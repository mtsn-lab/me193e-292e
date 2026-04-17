#include "POUS.h"
#include "Config0.h"

void MAIN_init__(MAIN *data__, BOOL retain) {
  __INIT_VAR(data__->CRAC_FAN_STATUS,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->TEMP_HIGH_ALARM,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,TEMP_HIGH_ALARM,,__GET_VAR(data__->CRAC_FAN_STATUS,));

  goto __end;

__end:
  return;
} // MAIN_body__() 





