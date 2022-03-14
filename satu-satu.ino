int pin[] = {16,5,4,0,2,14};
int numPin = 6;
int pinOnIndex = 0;

void setup() {
  for(int a=0;a<numPin;a++){
    pinMode(pin[a],OUTPUT);
  }
}

void loop() {
  for (int a=0;a<numPin;a++){
    if(a==pinOnIndex){
      digitalWrite(pin[a],HIGH);
    }else{
      digitalWrite(pin[a],LOW);
    }
 }

 delay(550);
 pinOnIndex = pinOnIndex+1;
 if(pinOnIndex>=numPin){
  pinOnIndex = 0;
 }

}
