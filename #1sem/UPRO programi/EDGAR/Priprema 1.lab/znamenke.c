#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, td, sj, raz;
    printf("Unesite cetveroznamenkasti broj > ");
    scanf("%d", &n);

    td = n/1000 + ((n%100)/10);
    //printf("\ntisucice %d", (n/1000));
    //printf("\ndesetke %d", ((n%100)/10));
    //printf("\ntisucice + desetke = %d", td);

    sj = ((n/100)%10) + (n%10);
    //printf("\nstotice %d", ((n/100)%10));
    //printf("\njedinice %d", (n%10));
    //printf("\nstotice + jedinice = %d", sj);

    raz = abs(td-sj);

    if (td == sj) {
        printf("Provjera je uspjesna!");
    }
    else {
        printf("Apsolutna razlika suma je %d",raz);
    }

    return 0;
}