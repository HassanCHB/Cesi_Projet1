#include "cardio.h"

int LED1=2;
int LEDir=3; //LED infrarouge sur la pin 12
int Phototr = A0;  //Phototransistor sur le port analogique 0

int duree;                 //la durée depuis que le doigt est dans la pince 
boolean pince;            //indique si le doigt est dans la pince
int beat;                //pulsation
int mesure=0;           //mesure que l'on va récolter sur le PhotoTr
int pouls=0;
int doigt;
float temps;
int val;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
  mesure = analogRead(Phototr);       //récolte les données que le Phototransistor envoie sur le port série
  pouls = mesure / 1 * 60;          //calcul du pouls
  temps = 1 / pouls * 60000000;   //calcul du temps entre chaque pulsations
  beat = pulseIn(mesure,HIGH,temps);   //pulsation
  
}

void loop() {
 int calcul_et_mesure_pouls();
} 
