#include <stdio.h>

int main(void){
    int n, veci_indeks=0, zbroj = 0, i, j;
    printf("Unesite duljinu polja: ");
    scanf("%d", &n);
    int elementi[n];

    printf("Unesite elemente polja:");
    for (i=0; i<n; i++){
        scanf("%d", &elementi[i]);
    }

    printf("\nIzracunato polje:");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i < j){
                veci_indeks += elementi[j];
            }
        }
        zbroj = elementi[i]+veci_indeks;
        printf(" %d", zbroj);
        veci_indeks = 0;
    }
    return 0;
}