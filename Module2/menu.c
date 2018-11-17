#include <stdio.h>
#include "generationCode.h"

void affiche_menu()
{
    int choi = 0;
    printf("Liste des facon dont seront allumees les LEDs :\n");
    printf("1- Toutes les LEDs allumees en meme temps au rythme des battements de coeurdetectes par le module Cardio. \n");
    printf("2- 1 LED sur 2 allumee. \n");
    printf("3- 1 LED sur 3 allumee. \n");
    printf("4- 1 LED sur 4 allumee. \n");
    printf("5- 1 LED sur 5 allumee. \n");
    printf("6- 1 LED sur 6 allumee. \n");
    printf("7- 1 LED sur 7 allumee. \n");
    printf("8- 1 LED sur 8 allumee. \n");
    printf("9- 1 LED sur 9 allumee. \n");
    printf("10- 1 LED sur 10 allumee.\n");
    printf("11- Les LEDs s'allument progressivement. \n");
    printf("12- Allumer le coeur en mode chenille. \n\n");

    printf("Quel est votre choix ? \n");
    printf("Tapez 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ou 12 \n");

    scanf("%d", &choi);

    choix_menu(choi);
}

generationCode(choi);

void choix_menu(choi)
{
    switch (choi)
    {
    case 1:
    {
        printf("case 1");
        //config_param_1();
        generationCode(choi);
    }
    break;

    case 2:
    {
        printf("case 2");
        //config_param_2();
        generationCode(choi);
    }
    break;

    case 3:
    {
        printf("case 3");
        //config_param_3();
        generationCode(choi);
    }
    break;

    case 4:
    {
        printf("case 4");
        //config_param_4();
        generationCode(choi);
    }
    break;

    case 5:
    {
        printf("case 5");
        //config_param_5();
        generationCode(choi);
    }
    break;

    case 6:
    {
        printf("case 6");
        //config_param_6();
        generationCode(choi);
    }
    break;

    case 7:
    {
        printf("case 7");
        //config_param_7();
        generationCode(choi);
    }
    break;

    case 8:
    {
        printf("case 8");
        //config_param_8();
        generationCode(choi);
    }
    break;

    case 9:
    {
        printf("case 9");
        //config_param_9();
        generationCode(choi);
    }
    break;

    case 10:
    {
        printf("case 10");
        //config_param_10();
        generationCode(choi);
    }
    break;

    case 11:
    {
        printf("case11");
        //config_param_11();
        generationCode(choi);
    }
    break;

    case 12:
    {
        printf("case 12");
        //config_param_12();
        generationCode(choi);
    }
    break;

    default:
    {
        printf("Desole, choix inexistant ! ");
    }
    }
}

// tests unitaires
/*
int main()
{
    affiche_menu();

}
*/