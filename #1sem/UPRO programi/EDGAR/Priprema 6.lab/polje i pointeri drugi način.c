#include <stdio.h>
//ovo bi trebalo ali neće raditi
void getMinMax(int *p, int d, int *m, int *v){
    *v = *p;
    *m = *p;
    int elem;
    for (int i = 0; i < d; i++){
        elem = *(p+i);
        if (elem > *v){
            *v = elem;
        }
        if (elem  < *m){
            *m = elem ;
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