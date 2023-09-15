#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alph ;
    printf("entrez ton lettre: ");
    scanf("%c",&alph);
    if(alph >= 65 && alph <= 90){
        printf("c'est un alphabet majuscule.");
    }else if (alph >= 97 && alph <= 122){
        printf("c'est un alphabet majuscule.");
    }else {
        printf ("c'est pas un alphabet");
    }



}
