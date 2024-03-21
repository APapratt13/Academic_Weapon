#include <stdio.h>

double zbroj2D(int m, int n, double *p){
    double suma = 0; 
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            suma += *(p + i*n + j);
        }
    }
    return suma;
}

int main(void){
    int m, n;
    printf("Upisite dimenzije > ");
    scanf("%d %d", &m, &n);

    double polje[m][n];
    printf("Upisite clanove >\n");
    for (int i = 0; i<m; i++){
        for (int j = 0; j<n; j++){
            scanf("%lf", &polje[i][j]);
        }
    }
    
    double rez = zbroj2D(m, n, &polje[0][0]);
    printf("Suma je: %lf", rez);

    return 0;
}

