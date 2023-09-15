#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n1,n2,n3,x1,x2,x3;

    printf("entrez le nombre: ");
    scanf("%d",&num);
    n1 = num / 8;
    x1 = num % 8;
    n2 = n1 / 8;
    x2 = n1 % 8;
    n3 = n2 /8;
    x3 = n2 % 8;
    printf("en dissimale : %d%d%d",x3,x2,x1);
    n1 = num / 16;
    x1 = num % 16;
    n2 = n1 / 16;
    x2 = n1 % 16;
    n3 = n2 /16;
    x3 = n2 % 16;
    printf("en exadissimale : %d%d%d",x3,x2,x1);

    return 0;
}
