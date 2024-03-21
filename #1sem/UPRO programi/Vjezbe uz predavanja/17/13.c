#include <stdio.h>

void sortRetke2D(int m, int n, int *p, char silazno){
    int pom;
    for (int k = 0; k<m; k++){
        if (silazno == 'S'){
            for (int i=0; i<n; i++){
                for (int j=i+1; j<n; j++){
                    if (*(p+k*n+j) > *(p+k*n+i)){
                        pom = *(p+k*n+i);
                        *(p+k*n+i) = *(p+k*n+j);
                        *(p+k*n+j)=pom;
                    }
                }
            }
        }else{
            for (int i=0; i<n; i++){
                for (int j=i+1; j<n; j++){
                    if (*(p+k*n+j) < *(p+k*n+i)){
                        pom = *(p+k*n+i);
                        *(p+k*n+i) = *(p+k*n+j);
                        *(p+k*n+j)=pom;
                    }
                }
            }
        }
    }
}

int main(void){
    char s;
    printf("Upisite smjer poretka (S- silazno) > ");
    scanf("%c", &s);

    int m, n;
    printf("Upisite dimenzije > ");
    scanf("%d %d", &m, &n);

    int polje[m][n];
    printf("Upisite clanove > ");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &polje[i][j]);
        }
    }

    sortRetke2D(m, n, &polje[0][0], s);

    for (int i = 0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("  %d ", polje[i][j]);
        }
        printf("\n");   
    }
    return 0;
}