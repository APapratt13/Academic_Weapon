#include <stdio.h>

int main(void){
    int a, b, n, i=1, zbroj=0;
    printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
    scanf("%d %d", &a, &b);

    n = a;
    if (((a >= 1)&&(a <= 1000)) && ((b > a) && (b <= 1000))){
        while (n <= (b-2)) {
        n = a + (3*i -1);
        //printf("\nn = %d", n);
        zbroj += n;
        //printf("\nzbroj = %d", zbroj);
        i += 1;
        }
        printf("Zbroj svakog treceg broja iznosi: %d", zbroj);

    } else if (((a < 1)||(a > 1000)) || ((b < 1) || (b > 1000))) {
        printf("Brojevi moraju biti u intervalu [1, 1000].");
    } else if (b < a) {
        printf("Prvi broj mora biti manji od drugog broja.");
    } 

    return 0;
}