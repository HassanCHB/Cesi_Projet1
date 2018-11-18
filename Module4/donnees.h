void init_struct_data(char *nom_fichier);

void afficher_tableau_struct();
 
void trouver_min_max();

typedef struct
{
    int temps;
    int pouls;

} Pulsation;

Pulsation puls;

Pulsation tab_Pulsations[];

char *nom_fichier;