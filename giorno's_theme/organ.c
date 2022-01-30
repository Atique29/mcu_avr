/*
Simple routines to play notes out to a speaker
*/

#include <avr/io.h>
#include <util/delay.h>
#include "organ.h"
#include "pinDef.h"

void playNote(uint16_t period, uint16_t duration) {
  uint16_t elapsed;
  uint16_t i;
  for (elapsed = 0; elapsed < duration; elapsed += period) {
                     /* For loop with variable delay selects the pitch */
    for (i = 0; i < period; i++) {
      _delay_us(1);
    }
    BUZZER_PORT ^= (1 << BUZZER);
  }
}

void rest(uint16_t duration) {
  uint8_t	temp = BUZZER_PORT;
  BUZZER_PORT = 0b00000000;
  do {
    _delay_ms(1);
  } while (--duration);
  BUZZER_PORT = temp;
}
