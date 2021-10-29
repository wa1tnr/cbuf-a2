// Sat Nov  7 11:24:45 UTC 2020
// target mcu to be determined
// probably CircuitPlayground Express from Adafruit
// aka 'the CPX' board

#define SLOW_VAL 3
#ifdef RAPID_PROTO
#define GUARD_TIME 123 // milliseconds
#define GUARD_TWO 300
#define GUARD_THREE 299
#endif
#ifndef RAPID_PROTO
#define GUARD_TIME 12333
#define GUARD_TWO 3333
#define GUARD_THREE 9999
#endif
#define LED 13
#define blink_ON()  digitalWrite(LED,1)
#define blink_OFF() digitalWrite(LED,0)
