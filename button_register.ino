#define READ_PIN_12 (PINB&(1<<4))
#define LED_HIGH PORTB|=0x20;
#define LED_LOW PORTB&=~(1<<5);

int led_stat=1;
int prev=0;

void setup() {
  DDRB |= 0x20;                       // set pin 13 in output mode
  PORTB |= 0x00;                      // set pin 13 to LOW
}

void loop() {
    if((READ_PIN_12!=0)&&(prev==0)){ 
      delay(50);
      if((READ_PIN_12!=0)&&(prev==0)){
      if(led_stat==1){
        LED_HIGH
        led_stat=0;
      }
      else{
        LED_LOW
        led_stat=1;
      }
      }
  }
  prev = READ_PIN_12 ;
}
