#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int j = 0;

    printf("entrez ton nombre: \n");
    scanf("%d", &num);
    if( num == 0 || num == 1){
        printf("%d ce n'est pas un nombre premier", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            j += 1;
        }
    }

    if (j > 0) {
            printf("%d ce n'est pas un nombre premier", num);
        } else {
            printf("%d c'est un nombre premier.", num);
        }

}
