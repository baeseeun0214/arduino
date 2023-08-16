#define PIN_LED 7

void setup(){
  pinMode(PIN_LED,OUTPUT);
  digitalWrite(PIN_LED,false);
  delay(1000);
}

void loop(){
  for (int i=0;i<5;i++){
    digitalWrite(PIN_LED,true);
    delay(100);
    digitalWrite(PIN_LED,false);
    delay(100);
  }
  digitalWrite(PIN_LED,true);
  while(true);
}
