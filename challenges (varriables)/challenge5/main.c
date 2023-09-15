#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float mx, my, nx, ny, distance;
    printf("entrez la valeur de Mx: ");
    scanf("%f", &mx);
    printf("entrez la valeur de My: ");
    scanf("%f", &my);
    printf("entrez la valeur de Nx: ");
    scanf("%f", &nx);
    printf("entrez la valeur de Ny ");
    scanf("%f", &ny);
    float m = pow(nx - mx,2);
    float n = pow(ny - my,2);
    distance = sqrt((m+n));
    printf("\la distance entre M et N est : %.f ", distance);

    return 0;
}
