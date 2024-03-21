//BUBBLE SORT PO STUPCIMA
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
    for(int j = 0; j < stupac; j++) {
        for(int i = 0; i < redak - 1; i++) {
            for(int k = 0; k < redak - i - 1; k++) {
                if(polje[k][j] > polje[k+1][j]) {
                    int temp = polje[k][j];
                    polje[k][j] = polje[k+1][j];
                    polje[k+1][j] = temp;
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