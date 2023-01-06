#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define Pi 3.1415927

int main()
{

    int a, b;

    printf("entrer le premier nombre : ");
    scanf("%d", &a);
    printf("entrer le deuxieme nombre : ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("le nombre le plus grand est : %d", b);
    }
    else
    printf("le nombre le plus grand est : %d", a);

    return 0;
}