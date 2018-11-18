#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>

#include "donnees.h"

void init_struct_data(char *nom_fichier2)
{
    printf("Le nom du fichier est %s\n", nom_fichier);
    nom_fichier = nom_fichier2;

    lire_fichiercsv(nom_fichier);
}

void afficher_donnees_brutes2()
{

    lire_fichiercsv(nom_fichier);
}

void lire_fichiercsv(char *nom_fichiercsv)
{
    //----------------------- ouverture du fichier de donnees CSV ------------------------------
    FILE *fic;
    char ligne[1000];
    int num_ligne = 0;
    char *tokens;

    fic = fopen(nom_fichiercsv, "rt");

    if (fic == NULL)
    {
        printf("Ouverture fichier impossible !");
        exit(0);
    }

    //----------------------- lecture du fichier de donnees CSV ------------------------------
    // on lit une ligne apres l'autre jusqu'a  la fin du fichier
    int k = 0;
    while (fgets(ligne, 1000, fic) != NULL)
    {
        num_ligne++;

        tokens = strtok(ligne, ";");

        int y = 0;

        while (tokens != NULL)
        {

            y++;

            if (y == 1)
            {
                // printf("--%s\n", tokens);
                puls.temps = atoi(tokens);
            }
            else if (y == 2)
            {
                // printf("//%s\n", tokens);
                puls.pouls = atoi(tokens);
                tab_Pulsations[k] = puls;

                printf("Temps :%i\n", tab_Pulsations[k].temps);
                printf("Pouls :%i\n", tab_Pulsations[k].pouls);
            }
            tokens = strtok(NULL, "");
        }
        k++;
    }
    fclose(fic);
}

void afficher_tableau_struct()
{

    for (int i = 0; i < 10; i++)
    {
        printf("le temps :%i\n", tab_Pulsations[i].temps);
        printf("le pouls :%i\n", tab_Pulsations[i].pouls);
    }
}
/*
    Utilisation
 fgets (chaîne , taille , flot-de-données) 
 -Sémantique des paramètres
 -chaîne est de type pointeur vers char et doit pointer vers un tableau de caractères.
 taille est la taille en octets du tableau de caractères pointé par chaîne.
 -
 flot-de-données est de type pointeur vers FILE. Il pointe vers le fichier à partir duquel se fait la lecture.
 */

void trouver_min_max()
{
    int nombre;
    int maximum;
    int minimum;

    for (int i = 0; i < sizeof(Pulsation); i++)
    {
        nombre = tab_Pulsations[i].pouls;

        if (nombre > maximum)
        {
            maximum = nombre;
        }
        if (nombre < minimum)
        {
            minimum = nombre;
        }
    }
    printf("Le plus grand pouls est : %d \n",maximum);
    printf("Le plus petit pouls est : %d \n",minimum);
}