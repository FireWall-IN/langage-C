#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str;
    int i;

    printf("entrer un charactere : ");
    scanf("%c", &str);
    str++;

    printf("la lettre suivante est %C", str);
    return 0;
}