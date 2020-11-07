// Sat Nov  7 11:24:45 UTC 2020
// target mcu to be determined
// probably CircuitPlayground Express from Adafruit
// aka 'the CPX' board

#include <Arduino.h>

#define blink_ON() digitalWrite(13,1)

void init_led(void) { // LED D13 support
    pinMode(13,1); // PA17 CPX
    // digitalWrite(13,1);
    // test cpp macro here:
    blink_ON();
    delay(33);
    digitalWrite(13,0);
    delay(33);
}

void blink_m(void) {
    digitalWrite(13,1);
    delay(500);
    digitalWrite(13,0);
    delay(500);
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
