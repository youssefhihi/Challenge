#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee , mois, jour;
    printf("entrez l'annee : ");
    scanf("%d",&annee);
    printf("entrez la mois : ");
    scanf("%d",&mois);
    printf("entrez le jour : ");
    scanf("%d",&jour);
    printf(" %d /%d /%d",annee,mois,jour);
    printf("\n\n%d",annee);
    switch (mois) {
  case 1:
    printf("-janvier");
    break;
  case 2:
    printf("-febrier");
    break;
  case 3:
    printf("-mars");
    break;
  case 4:
    printf("-avril");
    break;
  case 5:
    printf("-mai");
    break;
  case 6:
    printf("-juin");
    break;
  case 7:
    printf("juillet");
    break;
  case 8:
    printf("-aout");
    break;
  case 9:
    printf("-septembre");
    break;
  case 10:
    printf("-octobre");
    break;
  case 11:
    printf("-novembre");
    break;
  case 12:
    printf("-decembre");
    break;

}
printf(" -%d" ,jour);
}



