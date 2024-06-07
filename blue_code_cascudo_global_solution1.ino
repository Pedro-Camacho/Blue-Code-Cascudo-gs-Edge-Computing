// C++ code
//
#include <Servo.h>

//definições para servo motor e potenciometro (timao)
int timao = A0;
int pinServo = 9;
int valorPot = 0;
int anguloServo = 0;

Servo servo;

//Simulação de ph
int pinPh=A3;
int valorPh;

//Sensor de temperatura
int pinTemp=A1;
int sensorTempTensao;
float tensao;
float temperaturaC;


//Sensor Ldr
int sensorLdr=A2;
int lightVal;


//Motor 
int motorPin = 8;
int botao = 10;

void setup()
{
  //sensor LDR
  pinMode(sensorLdr, INPUT);
  
  //Servo motor
  servo.attach(pinServo);
  
  //Motor e Botao
  pinMode(motorPin, OUTPUT);
  pinMode(botao, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  //LEITURAS
  
  //leitura do ldr e conversão de 0 a 500
  lightVal=analogRead(sensorLdr);
  lightVal=map(lightVal,0,1023,0,500);
  
  //Leitura e Conversão de temperatura
  // Faz a leitura da tensao no Sensor de Temperatura
  sensorTempTensao=analogRead(pinTemp);
  // Converte a tensao lida
  tensao=sensorTempTensao*5;
  tensao/=1024;
  // Converte a tensao lida em Graus Celsius
  temperaturaC=(tensao-0.5)*100;
  
  //Leitura ph !SIMULADO!
  valorPh= analogRead(pinPh);
  valorPh = map(valorPh, 0,1023, 0,140);
  //DIREÇÃO e VELOCIDADE
  controleServo();
  if(digitalRead(botao)==HIGH){
  	
    digitalWrite(motorPin,HIGH);
  }else{
  	digitalWrite(motorPin,LOW);
  }
  
  //PRINTS  
  Serial.print("Turbidez: ");
  Serial.println(lightVal);
  Serial.print("Temperatura: ");
  Serial.println(temperaturaC);
  Serial.print("Ph: ");
  Serial.println(valorPh);
  delay(500);
}

void controleServo(void){
  valorPot = analogRead(timao);
  anguloServo = map(valorPot,0,675,0,180);
  servo.write(anguloServo);
  /*Serial.print("Valor Lido: ");
  Serial.print(valorPot);
  Serial.print(" , Angulo do Servo: ");
  Serial.println(anguloServo);*/
  delay(1000);
}
