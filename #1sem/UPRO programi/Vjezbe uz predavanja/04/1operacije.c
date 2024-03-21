#include <stdio.h>

int main(void){
    float a, b, r;
    int q;
    printf("Upisite dva realna broja > ");
    scanf("%f %f", &a, &b);

    printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > ");
    scanf("%d", &q);

    if ( q == 1){
        //r = a + b;
        printf("Zbroj je %f", a+b);
    }
    else if ( q == 2){
        r = a * b;
        printf("Umnozak je %f", r);
    }
    else {
        printf("Neispravan odabir operacije.");
    }
    return 0;
}