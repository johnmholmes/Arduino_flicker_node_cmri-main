
int ledPin = 10;
byte flicker[] = {180, 30, 89, 23, 255, 200, 90, 150, 60, 230, 180, 45, 90};

int FLICKER = 0;
#include <CMRI.h>

#define CMRI_ADDR 25

CMRI cmri(CMRI_ADDR, 24, 48);
void setup() {
  pinMode(ledPin, OUTPUT);


  Serial.begin(9600);
}



void FLICKERON(){
  for(int i=0; i < 13; i++)
       analogWrite(ledPin, flicker[i]);
}

void FLICKEROFF(){
  digitalWrite(ledPin, LOW);
  analogWrite(ledPin, 0);
}
void loop(){
  cmri.process();
  FLICKER = (cmri.get_bit(0));
  
  if(FLICKER == 1) {
    FLICKERON();
     }
  else{
    FLICKEROFF();
    }
}
 
