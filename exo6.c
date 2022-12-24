#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nbr = 0;

    printf("Entrer un nombre entier : ");
    scanf("%d", &nbr);

    for(int i = 0; i <= nbr; i = i + 2)
    {
        printf("%d", i);
    }
    return 0;
}