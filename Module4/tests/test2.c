#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    unsigned long int val;
    int a, b, c, cv;
    float solde, montant, nvsolde;
    char op, devise;

    val = 0;
    printf("Bonjour, entrez un numero de compte --> ");
    scanf("%d-%d-%d", &a, &b, &c);
    val = a * 10000000;
    val = val + b;

    // Controle de validite
    cv = val % 97;

    if (cv == c)
    {
        printf("Le numero de compte est valide\n");
        printf("Entrez le solde du compte (en Euros) --> ");
        scanf("%f", &solde);
        printf("Ajout ou retrait ? --> ");
        fflush(stdin);
        scanf("%c", &op);
        printf("Montant Devise ($ R B E N) : ");
        scanf("%f %c", &montant, &devise);

        // Conversion
        switch (devise)
        {
        case ('$'):
            montant = montant * 0.7399;
            break;
        case (('r') || ('R')):
            montant = montant * 0.81;
            break;
        default:
            break;
        }
        //Ajout
        if (op == toupper('a'))
        {
            nvsolde = solde + montant;
        }
        //Retrait
        else
        {
            nvsolde = solde - montant;
        }
        printf("Nouveau solde : %f", nvsolde);
    }
    else
        printf("Le numero de compte n'est pas valide");

    return 0;
}