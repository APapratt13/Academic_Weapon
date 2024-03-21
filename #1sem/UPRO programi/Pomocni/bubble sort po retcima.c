//BUbBLE SORT, po retcima
#include<stdio.h>
int main() {
    int redak, stupac;
    printf("Upisi broj redaka, stupaca > ");
    scanf("%d %d", &redak, &stupac);
    int polje[redak][stupac];
    //upis podatak
    for(int i = 0; i < redak; i++) {
        for(int j = 0; j < stupac; j++) {
            scanf("%d", &polje[i][j]);
        }
    }
    printf("Prije sortiranja: \n");
    for(int i = 0; i < redak; i++) {
        for(int j = 0; j < stupac; j++) {
            printf("%3d", polje[i][j]);
        }
        printf("\n");
    }
    //sortiranje, od manji prema vecem 
    for(int i = 0; i < redak; i++) {
        for(int j = 0; j < stupac - i; j++) {
            for(int k = 0; k < stupac - j - 1; k++) {
                if(polje[i][k] > polje[i][k + 1]) {
                    int temp = polje[i][k];
                    polje[i][k] = polje[i][k+1];
                    polje[i][k+1] = temp;
                }
            }
        }
    }
    printf("Poslije sortiranja: \n");
    for(int i = 0; i < redak; i++) {
        for(int j = 0; j < stupac; j++) {
            printf("%3d", polje[i][j]);
        }
        printf("\n");
    }
    return 0;
}