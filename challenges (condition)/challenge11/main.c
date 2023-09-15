#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   int alt = rand()%7+1;

   if(alt == 1){
    printf("lundi\n");
   }else if (alt == 2){
    printf("mardi\n");
   }else if(alt == 3){
    printf("mercredi\n");
    }else if(alt == 4){
    printf("jeudi\n");
    }else if(alt == 5){
    printf("vendredi\n");
    }else if(alt == 6){
    printf("samedi\n");
    }else if(alt == 7){
    printf("dimanche\n");
    }
}
