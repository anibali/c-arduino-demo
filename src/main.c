#include <stdio.h>

#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#include "uart.h"

#define BLINK_DELAY_MS 1000

int main() {
  uart_init();

  printf("Compiled at: %s, %s\n", __TIME__, __DATE__);

  /* set pin 5 of PORTB for output*/
  DDRB |= _BV(DDB5);

  while(1) {
    /* set pin 5 high to turn led on */
    PORTB |= _BV(PORTB5);
    _delay_ms(BLINK_DELAY_MS);

    /* set pin 5 low to turn led off */
    PORTB &= ~_BV(PORTB5);
    _delay_ms(BLINK_DELAY_MS);

    printf("Blink!\n");
  }

  return 0;
}
