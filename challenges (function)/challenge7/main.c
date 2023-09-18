#include <stdio.h>
#include <stdlib.h>

   int nompre (int x){
      int j = 0;
      int i;
      if (x == 0 || x == 1){
        printf ("c'est pas un nombre premier");
        return 0;
      }
      for (i = 0;i <= x / 2;i++){
        if (x % 2 == 0){
        j++;
      }
      }
      if (j > 0){
        printf("ce n'est pas un nombre premier");
      }else {
            printf ("c'est un nombre premier");
      }
      return x;
  }

int main()
{
    int b;

   printf("entrez ton nombre : " );
   scanf("%d",&b);
   nompre(b);

}
