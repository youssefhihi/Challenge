#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    int somme, trpl;
    printf("entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("entrez le deuxieme nombre : ");
    scanf("%d",&num2);
    somme = num1 + num2;
    trpl = somme * 3;
    if(num1 == num2){
        printf("%d",trpl);
    }else {
        printf("la somme de les deux nombre c'est : %d",somme);
    }


}
