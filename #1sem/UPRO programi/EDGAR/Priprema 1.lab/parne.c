#include <stdio.h>

int main(void) {
    int n, s, d, j, parne, neparne, razlika;
    printf("Upisite troznamenkasti prirodni broj > ");
    scanf("%d", &n);
    neparne = 0, parne = 0;
    s = n/100;
    d = (n % 100)/10;
    j = n % 10;

    if (s%2 == 0) {
        parne += s;
    }
    else {
        neparne += s;
    }

    if (d%2 == 0) {
        parne += d;
    }
    else {
        neparne += d;
    }

    if (j%2 == 0) {
        parne += j;
    }
    else {
        neparne += j;
    }

    razlika = parne - neparne;

    printf("Rezultat: %d", razlika);

    return 0;
}