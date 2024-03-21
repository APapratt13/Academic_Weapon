#include <stdio.h>

void poredaj(double *p1, double *p2, double *p3){
    int pom;
    if (*p1 > *p2){
        pom = *p2;
        *p2 = *p1;
        *p1 = pom;
    }
    if (*p2 > *p3){
        pom = *p3;
        *p3 = *p2;
        *p2 = pom;
    }
    return;
}

int main(void){
    double a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%lf %lf %lf", &a, &b, &c);

    poredaj(&a, &b, &c);

    printf("%lf %lf %lf", a, b, c);

    return 0;
}