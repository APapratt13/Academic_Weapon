#include <stdio.h>

int main(void){
    int n;
    printf("Unesite n > ");
    scanf("%d", &n);

    if (n<=0){
        printf("Neispravan n");
    }else{
        double T=0;
        double suma=0;
        for (int i = 1; i < (n+1); i++){
            T=0;
            for (int j = 1; j < (i+1); j++){
                T=T+j;
            }
            suma=suma + 1*1.f/T;
        }
        printf("%.9lf\n", suma);
    }
    //fprintf(stderr, "varijabla a = %d", n);
    return 0;
}