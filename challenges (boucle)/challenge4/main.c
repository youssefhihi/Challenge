

#include <stdlib.h>

int main()
{
    int x ,somme,n;
    printf(" entrez le s nombre que tu vrux mais pas grand que 100, tu peux fini par quliquer sur 0: ");
    somme = 0;
    n = 0;
    while(1){
        scanf("%d",&x);
        if(x == 0 ){
            break;
        }
        if(x <= 100){
            somme += x;
            if (x > n){
                n = x;
            }
        }


    }
    printf("\n la somme de tes nombre ces : %d ",somme);
        printf("\n le grand nombre dans ton list ces : %d ",n);

}
