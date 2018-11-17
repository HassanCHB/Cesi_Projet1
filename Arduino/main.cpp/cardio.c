#include "cardio.h"

int Phototr;             //Phototransistor sur le port analogique 0
int duree;                 //la durée depuis que le doigt est dans la pince 
int beat;                //pulsation
int mesure;           //mesure que l'on va récolter sur le PhotoTr
int pouls;
int doigt;
float temps;
int val;

int calcul_et_mesure_pouls(){ 

unsigned long duree_prog;   //temps écoulé depuis que le programme est en route/


  duree_prog = millis();         //débute le chronomètre

  if(Phototr!=0){
  void SerialEvent(){
  while(available()>0){
    Phototr = analogRead(0);
    analogWrite(Phototr,mesure);
    val = digitalRead(3);
    analogWrite(3,val);
    digitalWrite(2,HIGH);

  for(duree=0; mesure!=0; duree++){

  if(doigt!=beat){
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
  }
  else if(doigt==beat){
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    print("pouls:");
    println(pouls);
   }
   temps++;
  }
 }
}
}
    else if(Phototr==0){
           print("temps");
           println(duree_prog);
           exit(0);
       }
   }
