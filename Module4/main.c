#include <stdio.h>

#include "menu.h"
#include "donnees.h"

int main(int argc, char *argv[])
{
    char *nom_fichier = argv[1];

    //init_struct_data(nom_fichier);

    //afficher_menu();

    lire_fichiercsv(nom_fichier);

    afficher_tableau_struct();

    return 0;
}
