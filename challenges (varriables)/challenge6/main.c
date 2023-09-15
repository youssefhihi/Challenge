#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.14;
    float r ;
    float cir;
    printf("entrez le rayon du cercle : ");
    scanf("%f",&r);
    cir = 2 * pi * r;
    printf(" le la circonférence de cercle c'est : %.2f ",cir);

    return 0;
}
