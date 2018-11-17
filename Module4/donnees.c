#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct
{
    char* temps;
    char* pouls;

} Pulsation;

Pulsation puls;

Pulsation tab_Pulsations[];

void init_struct_data(char *nom_fichier)
{
    printf("Le nom du fichier est %s\n", nom_fichier);
}

void afficher_donnees_brutes()
{
}

void lire_fichiercsv(char *nom_fichiercsv)
{
    //----------------------- ouverture du fichier de donnees CSV ------------------------------
    FILE *fic;
    char ligne[1000];
    short int num_ligne = 0;
    char* tokens;

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
        if (num_ligne != 1)
        {
            tokens = strtok(ligne, ";"); // appel d'initialisation de strtok. Separateur = ';'

            int y = 0;
            
            while (tokens != NULL)
            {
                
                y++;    
                
                if(y == 1)
                    {
                        printf("--%s\n", tokens);
                        puls.temps = tokens;
                    }
                else if(y == 2)
                    {
                        printf("//%s\n", tokens);
                        puls.pouls = tokens;
                        tab_Pulsations[k] = puls;
                        
                    }
                    tokens = strtok(NULL, "");       
            }
            
           
            
        }
        k++;
    }
    fclose(fic);
}

void afficher_tableau_struct()
{
    
    for(int i = 0; i < 10 ; i++)
    {
        printf("%i", i);
        printf("le temps :%s\n", tab_Pulsations[i].temps);
        printf("le pouls :%s\n", tab_Pulsations[i].pouls);
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