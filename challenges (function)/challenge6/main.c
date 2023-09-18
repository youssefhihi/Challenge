#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void equation (int a, int b, int c){
    float x,x1,x2,delta;
    delta = pow(b,2)- 4*a*c;
    printf(" \n delta = %.2f",delta);
    if(delta < 0){
        printf("\n l'equation n a pas une solution");

    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("\n l'equation a deux solition sont \n x1 = %.2f \n x2 = %.2f",x1,x2);
    }


}

int main()
{
     int num1, num2, num3;
     printf("entrez la valeur de A : ");
     scanf("%d",&num1);
     printf("entrez la valeur de B : ");
     scanf("%d",&num2);
     printf("entrez la valeur de C : ");
     scanf("%d",&num3);
     equation(num1,num2,num3);
     return 0;

}
