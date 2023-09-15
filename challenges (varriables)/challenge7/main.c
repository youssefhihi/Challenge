#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("entrez le nombre : ");
    scanf("%d",&a);
    b = a % 10;
    c = a / 10;
    d = c % 10;
    e = c / 10;
    printf (" \n l'inverse c'est : %d%d%d",b,d,e);

    return 0;
}
