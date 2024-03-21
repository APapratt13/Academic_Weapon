#include <stdio.h>

void getMinMax(int *p, int d, int *minim, int *maks){
    *maks = p[0];
    *minim = p[0];
    for (int i = 1; i < d; i++){
        if (p[i] > *maks){
            *maks = p[i];
        }
        if (p[i] < *minim){
            *minim = p[i];
        }
    }
}

int main(void){
    int dimenz;
    printf("Unesite velicinu polja: ");
    scanf("%d", &dimenz);

    int polje[dimenz];
    printf("Unesite %d elemenata u polju: ", dimenz);
    for (int i=0; i < dimenz; i++){
        scanf("%d", &polje[i]);
    }

    int minim, maks;
    getMinMax(polje, dimenz, &minim, &maks);

    printf("\nNajmanji element u polju: %d\nNajveci element u polju: %d", minim, maks);

    return 0;
}