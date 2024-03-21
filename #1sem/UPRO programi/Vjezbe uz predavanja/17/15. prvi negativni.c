#include <stdio.h>

int prviNegativac(int n, int *p){
    for (int i=0; i<n; i++){
        if (*(p+i)<0){
            return *(p+i);
        }
    }
    return 0;
}

int main(void){
    int n;
    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    int polje[n];
    printf("Upisite clanove > ");
    for (int i=0; i<n; i++){
        scanf("%d", &polje[i]);
    }

    int b = prviNegativac(n, polje);
    if (b!=0){
        printf("Prvi negativni je %d", b);
    }else{
        printf("Nema negativnih");
    }

    return 0;
}