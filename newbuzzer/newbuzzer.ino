const int pinoSensor = 2;
const int pinoLed = 12;

void setup() {
  // put your setup code here, to run once:
 pinMode(pinoSensor, INPUT_PULLUP);
 pinMode(pinoLed, OUTPUT);
 digitalWrite(pinoLed, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinoSensor) == HIGH){
    digitalWrite(pinoLed, HIGH);
  }
  else{
    digitalWrite(pinoLed, LOW);
  }
  
  
}
