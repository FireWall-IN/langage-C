#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    double R;

    printf("entrer un nombre : ");
    scanf("%d", &a);

    R = sqrt((double)a);
    if (R == (int)R)
    {
        printf("%.f est un carre parfait", R);
    }
    else
        printf("%d n'est pas un carre parfait", a);
    return 1;
}