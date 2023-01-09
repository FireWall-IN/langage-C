#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,c,d;

    printf("entrer le nombre : ");
    scanf("%d",&a);
    
    b = a + 2;
    c = b + 2;
    d = c + 2;
        if (a % 2 != 1)
    {
        a += 1;
        b = a + 2;
        c = b + 2;
        d = c + 2;
        printf("les trois entiers impairs qui le suivent %d %d %d", b,c,d);
    }
    else 
        printf("les trois entiers impairs qui le suivent %d %d %d", b,c,d);
    return 0;
}
