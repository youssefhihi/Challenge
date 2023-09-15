#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note ;
    printf(" entrez ton note s'il vous plait : ");
    scanf("%f",&note);
    if(note < 10 && note >= 0){
        printf(" tu recale malheureusment . ");
    }else if( note >= 10 && note < 12){
            printf(" felicitation tu passe ton annee avec montion PASSABLE");

    }else if( note >=12 && note < 14){
            printf(" felicitation tu passe ton annee avec montion ASSEZ BIEN");

    }else if( note >= 14 && note < 16){
            printf(" felicitation tu passe ton annee avec montion A BIEN");
    }else if( note >= 16 && note <= 20){
            printf(" felicitation tu passe ton annee avec montion TRES BIEN");
    }else {
       printf(" verifiez vos donnee\n entrez ancore ");

    }
    return  0;



}
