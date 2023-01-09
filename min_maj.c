#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str;

    printf("entrer la lettre : ");
    scanf("%c", &str);

    if (str >= 'a' && str <= 'z')
    {
        printf("la lettre %c est une minuscule", str);
    }
    else if (str >= 'A' && str <= 'Z')
    {
        printf("la lettre %c est un majuscule", str);
    }
    else
        printf("%c n'est pas un caracteres de l'alphabets ", str);

    return 0;
}