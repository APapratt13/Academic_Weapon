#include <stdio.h>
#include <math.h>

double e_approx(int n){
    double umn = 1.0;
    double euler = 1.0;
    for (int i = 1; i <= n; i++){
        umn = umn*i;
        euler = euler + 1/umn;
    }

    return euler;
}

int main(void){
    int n;
    printf("Upisite broj n: ");
    scanf("%d", &n); 

    double e, razlika;
    e = exp(1);

    razlika =e_approx(n) - e;

    printf("Aproksimacija e: %.12f", e_approx(n));
    printf("\nRazlika: %.12f", razlika);

    return 0;
}