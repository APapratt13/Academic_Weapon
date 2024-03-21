#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gadjajPolje(int *m, int *n, int brh, int *polje){
    for (int i=0; i <*m; i++){
        for (int j=0; j<*n; j++){
            *(polje + *n*i + j) = 0;
        }
    }

    for (int i=0; i <brh; i++){
        int red = rand() % *m;
        int stup = rand() % *n;
        *(polje + *n *red + stup) += 1;
    }
}

int main(void){
    int brh;
    printf("Upisite broj hitaca > ");
    scanf("%d", &brh);

    srand((unsigned)time(NULL));

    int m = rand() % (10 - 5 + 1) + 5;
    int n = rand() % (20 - 10 + 1) + 10;

    int polje[m][n];
    

    gadjajPolje(&n, &m, brh, &polje[0][0]);
    
    printf("\n");
    for (int i=0; i <m; i++){
        for (int j=0; j<n; j++){
            if (polje[i][j] / 100 != 0){
                printf("  %d", polje[i][j]);
            }else if (polje[i][j] / 10 != 0){
                printf("   %d", polje[i][j]);
            }else{
                printf("    %d", polje[i][j]);
            }
            
        }
        printf("\n");
    }

    return 0;
}