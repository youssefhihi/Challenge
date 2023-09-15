#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ltr;
    printf(" entrez le lettre : ");
    scanf("%c",&ltr);
    ltr = toupper(ltr);
    switch (ltr) {
  case 'A':
    printf("c'est un voyelle .");
    break;
  case 'E':
    printf("c'est un voyelle .");
    break;
  case 'U':
    printf("c'est un voyelle .");;
    break;
  case 'I':
    printf("c'est un voyelle .");
    break;
  case 'O':
    printf("c'est un voyelle .");
    break;
  case 'y':
    printf("c'est un voyelle .");
    break;
  default:
    printf("c'est un consonnes .");
    break;
}


}
