/**
 * @author      : jaarac (jaarac@debian)
 * @file        : serie
 * @created     : lunes may 31, 2021 16:10:10 -03
 */

/*
* Recibe una letra por puerto serie para cambiar el estado de los LEDS.
* 'v': cambia el estado del LED verde.
* 'a': cambia el estado del LED amarillo.
* 'r': cambia el estado del LED rojo.
*
* Se puede probar con el "Monitor serie" del IDE Arduino.
*
* El código de este ejemplo es de dominio público.
*/

#include "Arduino.h"    //Declaro libreria Arduino para usar en C

# define GPIO_LED_VERDE 5
# define GPIO_LED_AMARILLO 6
# define GPIO_LED_ROJO 9

// Función para cambiar el estado de un LED (GPIO).
void toggle(uint8_t gpio) {
    if(digitalRead(gpio) == HIGH) {
        digitalWrite(gpio, LOW);
    }
    else {
        digitalWrite(gpio , HIGH);
    }
}


void setup() {
    Serial.begin(9600);  // Inicializa el puerto serie (UART) a 9600 bps.
    // inicialización de los pines GPIO como salida para los LEDs.
    pinMode(GPIO_LED_VERDE, OUTPUT);
    pinMode(GPIO_LED_AMARILLO, OUTPUT);
    pinMode(GPIO_LED_ROJO, OUTPUT);
}


void loop () {
    size_t n;
    uint8_t letra[1];

    // Lee la letra (1 byte ) por puerto serie.
    n = Serial.readBytes(letra, 1);
    if(n == 1) {
        switch ( letra [0]) {
            case 'v':
                toggle(GPIO_LED_VERDE);
                break;
            case 'a':
                toggle(GPIO_LED_AMARILLO);
                break;
            case 'r':
                toggle(GPIO_LED_ROJO);
                break;
        }
    }
}
