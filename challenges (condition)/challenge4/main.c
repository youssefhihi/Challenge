#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c;
    float dlta,x,x1,x2;
    printf("entrez le premiere nombre : ");
    scanf("%d",&a);
    printf("entrez le deuxieme nombre : ");
    scanf("%d",&b);
    printf("entrez le troisieme nombre : ");
    scanf("%d",&c);
    dlta = pow(b,2) - 4*a*c;
    printf("solition de delta c'est : %.2f",dlta);
    if(dlta < 0){
        printf("\n l'equation a aucune solition");

    }else if(dlta == 0){
        printf("l'equation a une seul solition");
        x = (-b)/(2*a) ;
        printf("\nla soltion c'est : %.2f",x);
    }else{
        printf("\n l'equation a deux solition");
        x1 = (-(b+sqrt(dlta)))/(2*a);
        printf("\n le premiere solition : %.2f ",x1);
        x2 = ((-(b))+sqrt(dlta))/(2*a);
        printf("\n le deuxieme  solition : %.2f",x2);


    }



}
