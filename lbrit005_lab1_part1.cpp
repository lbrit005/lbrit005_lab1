#include <avr/io.h>
int main(void) {
// Set Ports to input/output (You only need PORTB and PORTD for this lab)
 DDRB = 0x3C;		//led pins PB2-PB5
 PORTB =0x04;		//the led that is on
   
 DDRD = 0x00;				
 PORTD =0xC0;		//buttons PD6-PD7
int val = 0;
 
 while (1) {
// left shifter button
   if(PIND & 0x80){ //10000000
     if(PORTB != 0x20){
     PORTB <<= 1;
      
     }	
   }
   //right shifter button
   if(PIND & 0x40){ // 01000000
     if(PORTB != 0x04){
     PORTB >>= 1;
    
     }	
   }
  
 _delay_ms(500); // Software delay
 }
 
  
  
  
  
  return 0;
}