#include <stdio.h>
#include "generationCode.h"

void config_param_1()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs(" \n", fichier);
        fclose(fichier);
    }
}

int generationCode(int choi)
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        /*
        fputs("#define NBRLED 5 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        */
        fprintf(fichier, "int choi = %i;", choi);
        fclose(fichier);
    }
    return 0;
}
/*
void config_param_2(int choi)
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        /*
        fputs("#define NBRLED 5 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        
        fprintf(fichier, "int param = %i;", choi);
        fclose(fichier);
    }
}

void config_param_3()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 3 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_4()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_5()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_6()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 2 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_7()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_8()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_9()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_10()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_11()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}

void config_param_12()
{
    FILE *fichier = NULL;

    fichier = fopen("param.h", "w");
    if (fichier != NULL)
    {
        fputs("#define NBRLED 1 \n", fichier);
        fputs("#define INTERVALE_POULS 0000 \n", fichier);
        fputs("#define DUREE_PROG 0000 \n", fichier);
        fclose(fichier);
    }
}
*/

// tests unitaires
/*
int main(void)
{
    creer_param_h();

    return 0;
}
*/
