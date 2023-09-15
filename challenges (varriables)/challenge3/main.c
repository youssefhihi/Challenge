#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int rr;

    //le premiere numero
    printf("entrez le premiere numero : ");
    scanf("%d", &num1);
    //le deuxieme numero
    printf("entrez le deuxieme numero : ");
    scanf("%d", &num2);
    rr = num1 % num2;
    printf("\n la somme : %d", num1 + num2);
    printf("\n la multiplication : %d", num1 + num2);
    printf("\n la division : %d", num1 * num2);
    printf("\n la sonstraction : %d", (num1 - num2));
    printf("\n le restant: %d", rr);


}
