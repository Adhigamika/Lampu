int pin[] = {16,5,4,0,2,14};
int numPin = 6;
int pinOnIndex = 0;

void setup() {
  for(int i=0;i<numPin;i++){
    pinMode(pin[i],OUTPUT);
  }
}

void loop() {
  for (int i=0;i<numPin;i++){
    if(i==pinOnIndex){
      digitalWrite(pin[i],HIGH);
        if(i==(numPin-2)){
          int indexA = i + 1;
          digitalWrite(pin[indexA],HIGH);
          int indexB= 0;
          digitalWrite(pin[indexB],HIGH);
        }else if(i == (numPin-1)){
          int indexA = 0;
          digitalWrite(pin[indexA],HIGH);
          int indexB = indexA+1;
          digitalWrite(pin[indexB],HIGH);
        }else{
          int indexA = i + 1;
          digitalWrite(pin[indexA],HIGH);
          int indexB = indexA + 1;
          digitalWrite(pin[indexB],HIGH);
        }
      
    }
 }

 delay(750);
 pinOnIndex = pinOnIndex+1;
 int indexC = pinOnIndex - 1;
 digitalWrite(pin[indexC],LOW);
 
 
 if(pinOnIndex>=numPin){
  pinOnIndex = 0;
 }

}
