#include <avr/io.h>
int main(void) {
// Set Ports to input/output (You only need PORTB and PORTD for this lab)
 DDRB = 0x3C;		//led pins PB2-PB5
 PORTB =~0x3C;		//the led that is on
   
 DDRD = 0x00;				
 PORTD =~0xC0;		//buttons PD6-PD7
int val = 0;
 
 while(1){ //exercise 2
  		
 	PORTB = (val << 2);

    if(PIND & 0x80){
     //(left button)adds the val
  	val = (val + 1) & 0x0F;
      
    }
    
    if(PIND & 0x40){
      //(right button) subtracts the val
    	val = (val - 1) & 0x0F;
      
      
  }
  _delay_ms(500); 
  
 }
  
  
  return 0;
}
	 