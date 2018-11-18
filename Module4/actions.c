#include <stdio.h>

#include "donnees.h"
#include "menu.h"

/*
 *   0-Permet de charger les fichier en memoire.
 * 
 *   Correspond au menu 0  
 */
void charger_fichiercsv_en_memoire(char *fichiercsv)
{
    init_struct_data(fichiercsv);
}

/*
 *   1-Permet d'afficher les donnees brutes
 * 
 *   Correspond au menu 1  
 */
void afficher_donnees_brutes()
{
    afficher_donnees_brutes2();
}

/*
 *   2-Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)
 * 
 *   Correspond au menu 2 
 */
void afficher_donnees_ordre_croissant_decroissant()
{

}

/*
 *   3-Rechercher et afficher les donnees pour un temps particulier
 * 
 *   Correspond au menu 3
 */
void rechercher_donnees_pour_temps_particulier()
{

}

/*
 *   4-Afficher la moyenne de pouls dans une plage de temps donnée
 * 
 *   Correspond au menu 4
 */

void afficher_moyenne_pouls_temps_donnee()
{

}

/*
 *   5-Afficher le nombre de lignes de donnees actuellement en memoire
 * 
 *   Correspond au menu 5
 */

void afficher_nombre_lignes_de_donnees_memoire()
{

}

/*
 *   6-Rechercher et afficher les max/min de pouls (avec le temps associe)
 * 
 *   Correspond au menu 6
 */

void rechercher_les_max_min_pouls()
{
    trouver_min_max();
}

