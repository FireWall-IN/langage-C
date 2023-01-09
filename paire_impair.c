#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("entrer un nombre : ");
    scanf("%d", a);

    if (a % 2 != 1)
    {
        printf("le nombre est pair");
    }
    else
        printf("le nombre est impair");

    return 0;
}