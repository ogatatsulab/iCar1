#include <board.h>

void setup() {
}

void loop() {
    while (1) {
        digitalWrite(PIN_LED1, HIGH);
        delay(700);
        digitalWrite(PIN_LED1, LOW);
        delay(2000);
    }
}
