#include <stdio.h>

#include "menu.h"
#include "donnees.h"

int main(int argc, char *argv[])
{
    nom_fichier = argv[1];

    init_struct_data(nom_fichier);

    afficher_menu();

    return 0;
}
