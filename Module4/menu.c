#include <stdio.h>

#include "actions.h"
#include "donnees.h"

void afficher_menu()
{
    printf("0-Donner le nom du .csv a charger\n");
    printf("1-Afficher les donnees dans l’ordre du fichier .csv\n");
    printf("2-Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)\n");
    printf("3-Rechercher et afficher les donnees pour un temps particulier\n");
    printf("4-Afficher la moyenne de pouls dans une plage de temps donnée\n");
    printf("5-Afficher le nombre de lignes de donnees actuellement en memoire\n");
    printf("6-Rechercher et afficher les max/min de pouls (avec le temps associe)\n");
    printf("7-Quitter l application\n\n");

    choix_menu();
}

void choix_menu()
{
    int choix;

    printf("Choississez entre les options ci-dessus :\n");
    scanf("%d", &choix);
    fflush(stdin);

    switch (choix)
    {
    case 0:
    {
        char fichiercsv[256];

        printf("saisissez le nom du fichier :\n");
        scanf("%s\n", fichiercsv);
        printf("%s", fichiercsv);
        charger_fichiercsv_en_memoire(fichiercsv);


    }
    break;

    case 1:
    {
        afficher_donnees_brutes();
    }
    break;

    case 2:
    {
        printf("case 2");
    }
    break;

    case 3:
    {
        printf("case 3");
    }
    break;

    case 4:
    {
        printf("case 4");
    }
    break;

    case 5:
    {
        printf("case 5");
    }
    break;

    case 6:
    {
        rechercher_les_max_min_pouls();
    }
    break;

    case 7:
    {
        printf("Exit...");
        exit(0);
    }
    break;

    default:
    {
        printf("choix indisponible !\n");
    }
    }
}
