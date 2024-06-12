#include<avr/io.h>
#include<avr/interrupt.h>

unsigned int count=0;
void setup() {
DDRB|=0x01; 
PORTB|=0x01;

TCCR2B|=0b00000111; // presacler 1024   TCCR2A|=0x00;   normal mode
TCNT2=0x00;

TIMSK2|=0x01;

sei();

}

ISR(TIMER2_OVF_vect){  // every time interupt generated the counter value will be incremented, when it reaches to 4, i want to change the value of the led
  count++;
  if(count==10){
    PORTB=((~PORTB)&0x01);
    count =0;
    }

  }
  void loop(){
    // timer calue will be counted from 0 to 255 in this loop
    
    }
