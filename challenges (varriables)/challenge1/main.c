#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[25];
    char prenom [20];
    char sexe [6];
    int age, numtele;
    printf(" entrez ton sexe: ");
    scanf("%s",&sexe);
    printf("\n entrz votre nom :");
    scanf("%s", &nom);
    printf("\n entrez votre prenom : ");
    scanf("%s",&prenom );
    printf("\n qelle ton age : ");
    scanf("%d",&age);
    printf("\n enrez ton numero de telephone : ");
    scanf("%d",&numtele);
    printf("tu finis \n MERCI %s ", prenom);
    return 0;
}
