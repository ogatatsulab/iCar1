#include <board.h>

void setup() {
}

void loop() {
    while (1) {
        digitalWrite(PIN_LED1, HIGH);
        delay(500);
        digitalWrite(PIN_LED1, LOW);
        delay(1000);
    }
}
