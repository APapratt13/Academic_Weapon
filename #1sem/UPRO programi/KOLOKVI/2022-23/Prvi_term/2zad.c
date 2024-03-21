#include <stdio.h>

int main(void){
    int m, n;
    printf("Unesite m > ");
    scanf("%d", &m);
    printf("Unesite n > ");
    scanf("%d", &n);

    int polje[m][n], e;

    for (int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &e);
            polje[i][j]=e;
        }
    }

    int x, b=0;
    printf("Unesite trazenu udaljenost > ");
    scanf("%d", &x);

    for (int i = 0; i<m; i++){
        for(int j = 0; j<n-1; j++){
            if (polje[i][j+1]-polje[i][j] == x){
                b++;
            }
        }
        if (i!= (m-1)){
            printf("%d. redak, parova: %d\n", i+1, b);
        }else{
        printf("%d. redak, parova: %d", i+1, b);
        }
        b=0;
    }
    return 0;
}