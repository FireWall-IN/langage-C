#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Entrer les 2 nombres : ");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("a = b");
    }
    if (a > b)
    {
        printf("a > b");
    }
    if (a < b)
    {
        printf("a < b");
    }
    return 0;
}