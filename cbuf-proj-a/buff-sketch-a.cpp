// Sat Nov  7 11:24:45 UTC 2020
// target mcu to be determined
// probably CircuitPlayground Express from Adafruit
// aka 'the CPX' board

#include <Arduino.h>

#include "nbuff-sketch-a.h"

/*
#define SLOW_VAL 3
#define GUARD_TIME 12333 // milliseconds
#define LED 13
#define blink_ON()  digitalWrite(LED,1)
#define blink_OFF() digitalWrite(LED,0)
*/

void pip(void) {
    blink_ON();
    delay(SLOW_VAL);
    blink_OFF();
    delay(SLOW_VAL);
}

void pip_pip(void) {
    pip(); delay(500); pip(); delay(500);
}

void init_led(void) { // LED D13 support
    pinMode(13,1); // PA17 CPX
    delay(3000);
    pip_pip();
    delay(GUARD_TIME);
}

void blink_m(void) {
    blink_ON();
    delay(SLOW_VAL);
    blink_OFF();
    delay(2700);
}

void setup(void) {
    init_led(); // blink once
    Serial.begin(115200);
    while (!Serial) { ; // wait for serial
        blink_m(); // blink something
    }
    delay(9999); // 9.9 seconds
    Serial.println("Hello from the cbuf project a - 7 Nov 2020.");
    Serial.println("\n functional program - validated. 11:39z\n");

    for (int i=2222; i>0; i--) { // countdown
        delay(333);
        Serial.print(" mark ");
    }

}
void loop(void) {
    // nothing
}

// END.
