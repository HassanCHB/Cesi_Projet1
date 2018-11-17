#include <stdio.h>

typedef struct pulsation
{
    char *temps;
    int pouls;

} pulsation;

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
    char *ptr_chaine;
    char ligne[81];
    short int num_ligne = 0;

    fic = fopen(nom_fichiercsv, "rt");

    if (fic == NULL)
    {
        printf("Ouverture fichier impossible !");
        exit(0);
    }

    //----------------------- lecture du fichier de donnees CSV ------------------------------
    // on lit une ligne apres l'autre jusqu'a  la fin du fichier
    while (fgets(ligne, 1000, fic) != NULL)
    {
        num_ligne++;
        if (num_ligne != 1)
        {
            ptr_chaine = strtok(ligne, ";"); // appel d'initialisation de strtok. Separateur = ';'
            printf("%s", ptr_chaine);
        }
    }
    fclose(fic);
}

/*
    Utilisation
 fgets (chaîne , taille , flot-de-données) 
 Sémantique des paramètres
 -
 chaîne est de type pointeur vers char et doit pointer vers un tableau de caractères.
 -
 taille est la taille en octets du tableau de caractères pointé par chaîne.
 -
 flot-de-données est de type pointeur vers FILE. Il pointe vers le fichier à partir duquel se fait la lecture.
 */