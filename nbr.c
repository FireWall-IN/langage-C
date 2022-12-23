#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv)
{
    int nbr_1 = 0, nbr_2 = 0, res = 0;

    printf("ajouter le premier nombre :");
    scanf("%d", &nbr_1);
    

    printf("ajouter le deuxieme nombre :");
    scanf("%d", &nbr_2);

    res = nbr_1 + nbr_2;

    printf(" %d + %d = %d", nbr_1, nbr_2, res);

    return 0;

}