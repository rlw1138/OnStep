// SERVO driver init

#if AXIS1_DRIVER_MODEL == SERVO2
  #undef AXIS1_DRIVER_MODEL
  #define AXIS1_DRIVER_MODEL SERVO
  #undef AXIS1_DRIVER_ENABLE
  #define AXIS1_DRIVER_ENABLE HIGH
#endif
#if AXIS2_DRIVER_MODEL == SERVO2
  #undef AXIS2_DRIVER_MODEL
  #define AXIS2_DRIVER_MODEL SERVO
  #undef AXIS2_DRIVER_ENABLE
  #define AXIS2_DRIVER_ENABLE HIGH
#endif

#if AXIS1_DRIVER_MODEL == SERVO || AXIS2_DRIVER_MODEL == SERVO
  #undef MODE_SWITCH_BEFORE_SLEW
  #define MODE_SWITCH_BEFORE_SLEW ON
  #undef MODE_SWITCH_SLEEP
  #define MODE_SWITCH_SLEEP ON
#endif