/* I giorno giovanna, have a microcontroller */

#include <avr/io.h>
#include <util/delay.h>
#include "pinDef.h"
#include "organ.h"
#include "scale16.h"

#define NOTE_DURATION     0xF000

int main(void){
    uint16_t currentNoteLength = NOTE_DURATION;
	BUZZER_DDR |= 0b00000001;
	while(1){
		playNote(Fx6,currentNoteLength);
		rest(200);
		playNote(D6,currentNoteLength);
		rest(200);
		playNote(D6,currentNoteLength);
		rest(20);
		playNote(E6,currentNoteLength);
		rest(20);
		playNote(F6,currentNoteLength);
		rest(90);
		playNote(E6,currentNoteLength);
		rest(20);
		playNote(D6,currentNoteLength);
		rest(20);
		playNote(Cx6,currentNoteLength);
		rest(20);
		playNote(D6,currentNoteLength);
		rest(20);
		playNote(E6,currentNoteLength);
		rest(20);
		playNote(Fx6,currentNoteLength);
		rest(200);
		playNote(B6,currentNoteLength);
		playNote(B6,currentNoteLength/3);
		rest(300);
		playNote(B5,currentNoteLength);
		playNote(B5,currentNoteLength/3);
		rest(50);
		playNote(Cx6,currentNoteLength*2);
		rest(90);
		playNote(D6,currentNoteLength);
		rest(70);
		playNote(E6,currentNoteLength);
		rest(90);
		playNote(D6,currentNoteLength);
		playNote(Cx6,currentNoteLength);
		rest(90);
		playNote(A6,currentNoteLength);
		rest(60);
		playNote(G6,currentNoteLength);
	}

	return 0;
}

