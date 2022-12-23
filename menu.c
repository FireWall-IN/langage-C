#include <stdlib.h>
#include <stdio.h>

int main ()
{
 int menu = 0, menu_1 = 1, menu_2 = 2,menu_3 = 3, menu_4 = 4;

printf("=== Menu ===\n");
printf("1. Royal Cheese\n");
printf("2. Mc Delux\n");
printf("3. Mc Bacon\n");
printf("4. Big Mac\n");

printf("Votre Choix ?\n");
scanf("%d",&menu);

switch (menu)
{
case 1:
    printf("Royal Cheese\n");
    break;

case 2:
    printf("1. Mc Delux\n");
    break;

case 3:
    printf("1. Mc Bacon\n");
    break;
    
case 4:
    printf("1. Big Mac\n");
    break;
default:
printf("error 404");
}

return 0;
}