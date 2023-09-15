#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b,c,d;
    float somme, moyenne;
    printf("entrez le premiere nombre : ");
    scanf("%f", &a);
    printf("entrez le deusieme nombre : ");
    scanf("%f", &b);
    printf("entrez le troisieme nombre : ");
    scanf("%f", &c);
    printf("entrez le quatrieme nombre : ");
    scanf("%f", &d);
    somme = (a + b + c + d);
    printf("la somme c'est: %.2f",somme);
    moyenne = somme/4;
    printf("\n la myenne c'est: %.2f",moyenne);
    return 0;
}
