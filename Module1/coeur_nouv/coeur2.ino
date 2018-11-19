#include "param.h"
int LED[10] = {13,12,11,10,9,8,7,6,5,4};
int vitesse_entre_battement=250;


void delaysansdelay()//fonction alternative au delay
{
    unsigned long arret = millis() + vitesse_entre_battement;
    while(millis()<arret)
      {
   //c'est une boucle vide
      }
}

int clignottement() {//fait
        digitalWrite(13, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(4, HIGH);
  
  
        delaysansdelay();
  
      digitalWrite(13, LOW);
        digitalWrite(12, LOW);
        digitalWrite(11, LOW);
        digitalWrite(10, LOW);
        digitalWrite(9, LOW);
        digitalWrite(8, LOW);
        digitalWrite(7, LOW);
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
        digitalWrite(4, LOW);
  
        delaysansdelay();
}

int chenillard() {  //fait
      digitalWrite(13, HIGH);
      delaysansdelay();
  
      digitalWrite(4, LOW);
      delaysansdelay();

      digitalWrite(12, HIGH);
      delaysansdelay();

      digitalWrite(13, LOW);
      delaysansdelay();

      digitalWrite(11, HIGH);
      delaysansdelay();

      digitalWrite(12, LOW);
      delaysansdelay();

      digitalWrite(10, HIGH);
      delaysansdelay();
      
      digitalWrite(11, LOW);
      delaysansdelay();

      digitalWrite(9, HIGH);
      delaysansdelay();

      digitalWrite(10, LOW);
      delaysansdelay();

      digitalWrite(8, HIGH);
      delaysansdelay();

      digitalWrite(9, LOW);
      delaysansdelay();

      digitalWrite(7, HIGH);
      delaysansdelay();

      digitalWrite(8, LOW);
      delaysansdelay();

      digitalWrite(6, HIGH);
      delaysansdelay();

      digitalWrite(7, LOW);
      delaysansdelay();

      digitalWrite(5, HIGH);
      delaysansdelay();

      digitalWrite(6, LOW);
      delaysansdelay();

      digitalWrite(4, HIGH);
      delaysansdelay();

      digitalWrite(5, LOW);
      
      delaysansdelay();
      }

   

int affichage_progressif() 
{
//fait
        for (int i = 0; i < 10; i++) { // il va nous servir pour parcourir le tableau+
          
        
        pinMode(LED[i], OUTPUT); //on utilise les valeurs du tableau
        digitalWrite(LED[i], HIGH);
        delaysansdelay();
      }
      for (int i = 0; i < 10; i++) { // i va nous servir pour parcourir le tableau
        pinMode(LED[i], OUTPUT); //on utilise les valeurs du tableau
        digitalWrite(LED[i], LOW);
        delaysansdelay();
      }
        
}

int affichage_1_sur_2() //fait
{
 
      digitalWrite(13, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      delaysansdelay();
      digitalWrite(13, LOW);
      digitalWrite(11, LOW);
      digitalWrite(9, LOW);
      digitalWrite(7, LOW);
      digitalWrite(5, LOW);

      digitalWrite(12, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(4, HIGH);
      delaysansdelay();
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
      digitalWrite(8, LOW);
      digitalWrite(6, LOW);
      digitalWrite(4, LOW);
}

int affichage_1_sur_3() //fait
{

    
     digitalWrite(13, HIGH);
      digitalWrite(10, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(4, HIGH);
      delaysansdelay();
      digitalWrite(13, LOW);
      digitalWrite(10, LOW);
      digitalWrite(7, LOW);
      digitalWrite(4, LOW);

      digitalWrite(12, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(6, HIGH);
      delaysansdelay();
      digitalWrite(12, LOW);
      digitalWrite(9, LOW);
      digitalWrite(6, LOW);

      digitalWrite(11, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      delaysansdelay();
      digitalWrite(11, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, LOW);
    }

int affichage_1_sur_4() {//fait
  
       digitalWrite(13, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(5, HIGH);
      delaysansdelay();
      digitalWrite(13, LOW);
      digitalWrite(9, LOW);
      digitalWrite(5, LOW);

      digitalWrite(12, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      delaysansdelay();
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      digitalWrite(4, LOW);

      digitalWrite(11, HIGH);
      digitalWrite(7, HIGH);
      delaysansdelay();
      digitalWrite(11, LOW);
      digitalWrite(7, LOW);
      
      digitalWrite(10, HIGH);
      digitalWrite(6, HIGH);
      delaysansdelay();
      digitalWrite(10, LOW);
      digitalWrite(6, LOW);
      }
  

int affichage_1_sur_5() {//fait

      digitalWrite(13, HIGH);
      digitalWrite(8, HIGH);
      delaysansdelay();
      digitalWrite(13, LOW);
      digitalWrite(8, LOW);

      digitalWrite(12, HIGH);
      digitalWrite(7, HIGH);
      delaysansdelay();
      digitalWrite(12, LOW);
      digitalWrite(7, LOW);

      digitalWrite(11, HIGH);
      digitalWrite(6, HIGH);
      delaysansdelay();
      digitalWrite(11, LOW);
      digitalWrite(6, LOW);

      digitalWrite(10, HIGH);
      digitalWrite(5, HIGH);
      delaysansdelay();
      digitalWrite(10, LOW);
      digitalWrite(5, LOW);

      digitalWrite(9, HIGH);
      digitalWrite(4, HIGH);
      delaysansdelay();
      digitalWrite(9, LOW);
      digitalWrite(4, LOW);
    }


int affichage_1_sur_10() {//fait
 
      digitalWrite(13, HIGH);
      delaysansdelay();
      digitalWrite(13, LOW);
      //allumé->eteint et inverse
      digitalWrite(12, HIGH);
      delaysansdelay();
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      delaysansdelay();
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
      delaysansdelay();
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      delaysansdelay();
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      delaysansdelay();
      digitalWrite(8, LOW);
      digitalWrite(7, HIGH);
      delaysansdelay();
      digitalWrite(7, LOW);
      digitalWrite(6, HIGH);
      delaysansdelay();
      digitalWrite(6, LOW);
      digitalWrite(5, HIGH);
      delaysansdelay();
      digitalWrite(5, LOW);
      digitalWrite(4, HIGH);
      delaysansdelay();
      digitalWrite(4, LOW);
}
void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);                 
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  
  
}

void loop() {
  switch (choi) {
    case 1:
      {
        
        clignottement();
        break;
      }
    case 2:
      {
         chenillard();
        break;
      }
    case 3:
      {
        affichage_progressif();
        break;
      }
    case 4:
      {
        affichage_1_sur_2();
        break;
      }
    case 5:
      {
        affichage_1_sur_3();
        break;
      }
    case 6:
      {
        affichage_1_sur_4();
        break;
      }
    case 7:
      {
        affichage_1_sur_5();
        break;
      }
    case 8:
      {
        affichage_1_sur_10();
        break;
      }
  }
}
