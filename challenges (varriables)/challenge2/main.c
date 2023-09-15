#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, degcelsius;
    printf("entrez la temperature en fahrenheit :");
    scanf("%f",& fahrenheit);
    degcelsius = (fahrenheit-32)/1.8 ;
    printf(" \n la temperature en degre celsius c'est :%.2f" ,degcelsius );
    printf(" degre Celsius");
    if(degcelsius < 5){
        printf("\t tres froid");
    }else if(degcelsius > 5 && degcelsius <= 28){
        printf("\t froid");
    }else if(degcelsius > 5 && degcelsius <= 28){
        }else if (degcelsius > 28 && degcelsius <= 35){
            printf(" \t chaud");
        }else{
            printf(" \t tres chaud");
        }
    return 0;
}
