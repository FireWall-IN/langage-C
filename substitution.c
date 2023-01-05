#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    float res;
    int a, b, c;

    printf("Entrer les 3 nombres : ");
    scanf("%d%d%d", &a, &b, &c);

    res = (float)(a+b+c)/3;

    printf("la moyenne est %.2f", res);
    return 0;
}