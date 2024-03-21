#include <stdio.h>
#include <math.h>

int savrseni_kvadrat(int n){
    double sqrt_n = sqrt(n);
    if (sqrt_n - floor(sqrt_n) == 0) {
        return 1;  // n je savršen kvadrat
    } else {
        return 0;  // n nije savršen kvadrat
    }
}

int factorial(int n){
    int umn = 1;
    for (int i = 1; i <= n; i++){
        umn = umn*i;
    }
    return umn;
}

int zbroj_znamenaka(int n){
    int zbroj=0;
    while (n > 10){
        zbroj += n%10;
        n = (n - n %10) /10;
    }
    if (n<10){
        zbroj += n;
    }
    return zbroj;
}

int main(void){
    int n;
    printf("Upisite prirodni broj > ");
    scanf("%d", &n);

    int faktorijela, zb_znm=0;
    faktorijela = factorial(n);
    zb_znm = zbroj_znamenaka(faktorijela);

    if ((savrseni_kvadrat(zb_znm) == 1)){
        printf("Suma znamenaka od %d! je savrsen kvadrat.", n);
    }else if (savrseni_kvadrat(zb_znm) == 0){
        printf("Suma znamenaka od %d! nije savrsen kvadrat.", n);
    }

    return 0;
}