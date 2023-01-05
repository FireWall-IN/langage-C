#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int ac, char **av)
{
    float a,b,res;

    printf("ajouter le premier nombre : ");
    scanf("%f", &a);
    printf("ajouter le second nombre : ");
    scanf("%f", &b);
    res = a * b;

    printf("le resultat est : %.3f",res);
    
    return 0;
}