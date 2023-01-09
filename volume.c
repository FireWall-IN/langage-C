#include <stdlib.h>
#include <stdio.h>


int main()
{
    int a,b,c,nbr;
    printf("entrer un nombre reel : ");
    scanf("%d %d %d",&a, &b, &c);

    nbr = 2 * (a*b+a*c+b*c);
    
    printf("la suface du parrallepipede est  : %d", nbr);

    return 0;
}
