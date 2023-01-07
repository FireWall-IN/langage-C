#include <stdlib.h>
#include <stdio.h>


int main()
{
    float nbr;

    printf("entrer un nombre reel : ");
    scanf("%f",&nbr);

    nbr = nbr - (int)nbr;

    printf("la partie fractionnaire est : %f", nbr);

    return 0;
}
