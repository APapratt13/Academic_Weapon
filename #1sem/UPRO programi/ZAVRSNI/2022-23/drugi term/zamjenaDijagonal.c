#include <stdio.h>
//ne radi
float zamijeniGlavnaD(float *p, int n){
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            *(p + i*n + j) = *(p + (n-j)*n + n);
        }
    }
}

int main(void) {
   int n;
   scanf("%d", &n);
   float array[n][n];
   int i, j;
    for (i = 0; i < n; ++i){
        for (j = 0; j < n; ++j){
            scanf("%f", &array[i][j]);
        }
    }    

   float rez = zamijeniGlavnaD(&array[0][0], n);
   
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%7.2f", array[i][j]);
        }
        printf("\n");
    }
    printf("Suma na sporednoj: %7.2f", rez);
   
    return 0;
}
