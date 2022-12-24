#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nbr = 0;

    printf("Combient font 2 * 2 ?\n");
    scanf("%d", &nbr);
    while (nbr != 4)
    {
        printf("Faux recommancez\n");
        scanf("%d", &nbr);
    }
    if (nbr == 4)
    {
        printf("Bravo\n");
    }
    return 0;
}