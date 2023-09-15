#include <stdio.h>
#include <stdlib.h>

int main()
{

    double heure, min, scd,annee,mois,jour;
    int slc;
    printf("entrez l'annee : ");
    scanf("%lf",&annee);
    while(1){
         printf("\n choisir ton chois: \n 1-mois: \n 2-heure:\n 3-minute:\n 4-seconde:\n 5-jour \n 6/exit: \n \n ");
         scanf("%d", &slc);


    switch (slc){
     case 1:
         mois = (2023 - annee) * 12;
         printf("%lf",mois);
         break;
    case 2:
        heure = (2023 - annee)* 8760;
         printf("%lf",heure);
         break;
    case 3:
         min = (2023 - annee)* 525600;
         printf("%lf",min);
         break;
    case 4:
        scd = (2023 - annee)* 31536000;
         printf("%lf",scd);
         break;
     case 5:
        jour = (2023 - annee)* 365;
         printf("%lf",jour);
         break;
	case 6:
      return 0;
    }
}




}
