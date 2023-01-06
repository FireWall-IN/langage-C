#include <stdlib.h>
#include <stdio.h>

int main()
{

int a,b;
float res;

printf("entrer le premier nombre : ");
scanf("%d",&a);
printf("entrer le deuxieme nombre : ");
scanf("%d",&b);

res = (float) a / b;

printf("la fraction de %d diviser par %d est %.4f", a,b,res);
    return 0;
}