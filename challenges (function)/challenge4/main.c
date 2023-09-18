#include <stdio.h>
#include <stdio.h>


int Max_2(int a, int b) {
    //return (a > b) ? a : b;
    if (a > b) {
    return a;
    } else {
        return b;
            }
}
int Max_4(int a, int b, int c, int d) {
    int max1 = Max_2(a, b);
    int max2 = Max_2(c, d);
    return Max_2(max1, max2);
}

int main() {
    int num1, num2, num3, num4;

    printf("Entrez quatre entiers : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int max = Max_4(num1, num2, num3, num4);

    printf("Le maximum de ses quatre nombre c'est : %d", max);

    return 0;
}
