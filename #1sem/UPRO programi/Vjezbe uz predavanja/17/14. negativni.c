#include <stdio.h>

int brojac(int d, int *p){
    int j=0;
    for(int i=0; i<d; i++){
        if (*(p+i)<0){
            j++;
        }
    }

    return j;
}

void negativci(int d, int *p, int *n){
    int j=0;
    for(int i=0; i<d; i++){
        if (*(p+i)<0){
            *(n+j)=*(p+i);
            j++;
        }
    }
}

int main(void){
    int n;
    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    int polje[n];
    printf("Upisie clanove > ");
    for(int i= 0; i<n; i++){
        scanf("%d", &polje[i]);
    }

    int n2;
    n2 = brojac(n, &polje[0]);

    int novo[n2];
    negativci(n, &polje[0], &novo[0]);

    for (int j=0; j<n2; j++){
        printf("%d ", novo[j]);
    }

    return 0; 
}