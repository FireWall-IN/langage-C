#include <stdlib.h>
#include <stdio.h>


int main()
{
    float v,canette;
    printf("entrer votre volume : ");
    scanf("%f",&v);
    v = (v / 0.33);

    printf("le volume est : %.4f", v); 


    return 0;
}