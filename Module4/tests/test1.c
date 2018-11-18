#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main ()
{
    char str[] ="Apprendre a programmer en C.n";
    char *tokens;
   
    printf ("La chaine '%s' en morceaux:\n", str);
 
    //Découper la chaîne selon les espaces
    tokens = strtok (str," ");
 
    //Afficher le résultat du découpage
 
    while (tokens != NULL)
    {
        printf ("%s \n", tokens);
        tokens = strtok (NULL, " ,");
 
    }
    return 0;
}