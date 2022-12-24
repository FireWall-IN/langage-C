#include <stdlib.h>
#include <stdio.h>

int main()
{

    int nbr = 0;

    printf("Est-ce que ce nombre est pair ?\n");
    scanf("%d", &nbr);

    if (nbr % 2 == 0)
    {
        printf("Ce nombre est pair\n");
    }
    else
    {
        printf("Ce nombre est impair\n");
    }
    return 0;
}