#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{
    int a = 0,b = 0,c;

    printf("Entrer les 2 nombres : ");
    scanf("%d%d",&a,&b);

    c = a;
    a = b;
    b = c;

    printf("le premier nombre est %d le deuxieme nombre est %d", a,b);    
    return 0;
}