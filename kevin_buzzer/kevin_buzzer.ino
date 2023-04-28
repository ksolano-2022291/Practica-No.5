/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:  EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: sensor ultrasonico y buzzer
   alumno:Kevin Audiel Solano Torres
   Fecha: 28 de abril
*/

#define BUZZER 2
int Do=261; 
int Re=293; 
int Mi=329; 
int Fa=349; 
int Sol=392;
int La=440; 
int Si=493; 

int duracion=1000;



const int trigPin = 11;
const int echoPin = 12;


long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  
  
  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  Serial.print(String(distance));
  Serial.println(" cm");
  delay(400);
  
  if(distance>=6 && distance <=10){
    
   tone(BUZZER,Do,1000);
    delay(500);
  }

if(distance>=11 && distance <=15){
    
   tone(BUZZER,Re,1000);
    delay(500);
  }

if(distance>=16 && distance <=20){
    
   tone(BUZZER,Mi,1000);
    delay(500);
  }


  if(distance>=21 && distance <=25){
    
   tone(BUZZER,Fa,1000);
    delay(500);
  }


  if(distance>=26 && distance <=30){
    
   tone(BUZZER,Sol,1000);
    delay(500);
  }
if(distance>=31 && distance <=35){
    
   tone(BUZZER,La,1000);
    delay(500);
  }

  if(distance>=36 && distance <=40){
    
   tone(BUZZER,Si,1000);
    delay(500);
  }
}
