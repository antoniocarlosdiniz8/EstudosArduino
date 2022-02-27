const int pinoSensor = 2;//PINO DIGITAL UTILIZADO PELO SENSOR
const int pinoLed = 12;//PINO DIGITAL UTILIZADO PELO LED
const int buzzer = 10;//VAEIAVEL BUZZER

void setup() {
  // put your setup code here, to run once:
 pinMode(buzzer, OUTPUT);
 pinMode(pinoSensor, INPUT_PULLUP);//DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
 //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH)
 pinMode(pinoLed, OUTPUT);//DEFINE O PINO COMO SAÍDA
 digitalWrite(pinoLed, LOW);//LED INICIA DESLIGADO

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinoSensor) == HIGH){//SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
    digitalWrite(pinoLed, HIGH);//ACENDE O LED
    tone(buzzer, 2500, 100);
    
  }
  else{
    digitalWrite(pinoLed, LOW);//APAGA O LED
  }
  
  
}
