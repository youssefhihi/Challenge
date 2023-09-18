#include <stdio.h>
#include <stdlib.h>


void permuter(int a, int b) {
    int s = a;
    a = b;
    b = s ;
    printf("la valeur de X est :%d",a);
    printf("\n la valeur de Y est : %d ",b);



}
int main()
{
    int x, y;
    printf (" donnez une valeur  a X : ");
    scanf("%d",&x);
    printf("donnez une valeur  a Y : ");
    scanf("%d",&y);
    permuter(x,y);
    return 0;
}
