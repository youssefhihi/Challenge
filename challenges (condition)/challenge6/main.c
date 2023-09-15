#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("entrez le nombre : ");
    scanf("%d",&num);
    if(num < 0){
        printf("ton nombre est negative.");
    }else if (num > 0){
       printf("ton nombre est positif.");
    }else{
       printf(" c'est ZERO");
    }


}
