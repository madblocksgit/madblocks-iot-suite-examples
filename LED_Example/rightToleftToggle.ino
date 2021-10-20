/****************************************************************************
Agenda      :   Right to Left Toggling the four on-board LEDs (LED1, LED2, LED3, LED4)
Hardware    :   madBlocks IoT Suite
Programmer  :   Maddy
Date        :   20th Oct 2021
*****************************************************************************/

int led1=13;
int led2=12;
int led3=19;
int led4=32;

int ledPins[]={led1,led2,led3,led4};

#define ledLength 4
#define LED_ON 1
#define LED_OFF 0

void setup() {

 for(int i=0;i<ledLength;i++) {
  pinMode(ledPins[i],OUTPUT);
 }
}

void loop() {
 for(int i=ledLength-1;i>=0;i--) {
  digitalWrite(ledPins[i],LED_ON);
  delay(100);
  digitalWrite(ledPins[i],LED_OFF);
  delay(100);
 }
}
