#include <stdio.h>

int main(void){
    int N;
    printf("Upisite N > ");
    scanf("%d", &N);

    while (N<=0 || N>50){
        printf("Upisite N > ");
        scanf("%d", &N);
    }

    int prosti[N];
    for (int i = 1; i<(N+1); i++){
        while (i%j)
    }

    int a[N];

    for (int i = 0; i<N; i++){
        for (int j = 3; i<(a[i]+1); i++){
            if (j%prosti[i]<2){
                a[i]=j;
            }
        }
    }

    for (int i=0; i<N; i++){
        printf("%d ", a[i]);
    }

    return 0;
}