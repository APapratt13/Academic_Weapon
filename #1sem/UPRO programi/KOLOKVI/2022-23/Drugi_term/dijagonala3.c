#include <stdio.h>

int main(void){
    int m;
    printf("Unesite m > ");
    scanf("%d", &m);

    int polje[m][m];
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            scanf("%d", &polje[i][j]);
        } 
    }

    int a=0;
    int k = 1;
    for (int i = 0; i<m; i++){
        while ((polje[i][i] > polje[k][k]) && (k<m)){
            a = polje[k][k];
            polje[k][k] = polje[i][i];
            polje[i][i] = a;
            k++;
        }
    }

    printf("Ispis:\n");
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            if (polje[i][j]>=0){
                printf("   %d", polje[i][j]);
            }else{
                printf("  %d", polje[i][j]);
            }
            
        }
        printf("\n"); 
    }   
    printf("\n");

    return 0;
}