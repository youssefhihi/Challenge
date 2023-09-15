#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 0;
    int x;
    int n;
    printf("entrez un nombre :\n ");
    scanf("%d",&x);
    while(i <= 10){
     n = x * i;
      printf("%d * %d = %d\n",x, i, n );
    //printf("")
      i++;
    }



}
