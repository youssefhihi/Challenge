#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b;
    printf("entrez ton nombre : ");
    scanf("%d",&num);

    a = 0;
    while(num>0){
        b = num % 10;
        a = 10 * a + b;
        num = num / 10;

    }
    printf("%d",a);
}
