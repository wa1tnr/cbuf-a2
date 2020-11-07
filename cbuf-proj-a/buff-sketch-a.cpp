// Sat Nov  7 11:24:45 UTC 2020
// target mcu to be determined
// probably CircuitPlayground Express from Adafruit
// aka 'the CPX' board

#include <Arduino.h>

void setup(void) {
    Serial.begin(115200);
    while (!Serial); // wait
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
