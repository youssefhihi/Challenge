#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf ("entrez le nombre: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("c'est un nombre impaire.");
    }else{
    printf("c'est un nombre paire.");
    }


}
