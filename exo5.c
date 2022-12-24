#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nbr = 0, compteur = 0;

    printf("Combient font 2 * 2 ?\n");
    scanf("%d", &nbr);
    while (nbr != 4)
    {
        printf("Faux recommancez\n");
        scanf("%d", &nbr);
        compteur = compteur + 1;
    }
    if (nbr == 4)
    {
        printf("Bravo ! Vous avez trouve en %d essais.\n", compteur);
    }
    
    return 0;
}