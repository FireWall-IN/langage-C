#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av){

int nbr1 = 0, nbr2 = 0, res =0; 

printf("ajouter premier nombre :\n");
scanf("%d",&nbr1);
printf("ajouter deuxieme nombre :\n");
scanf("%d",&nbr2);

res = nbr1 * nbr2;

printf("le resultat est %d\n", res);

    return 0;
}