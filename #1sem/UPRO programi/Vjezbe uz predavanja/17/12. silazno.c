#include <stdio.h>

void sort1D(int n, int *p, char silazno){
    int pom;
    if (silazno == 'S'){
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (*(p+j) > *(p+i)){
                    pom = *(p+i);
                    *(p+i) = *(p+j);
                    *(p+j)=pom;
                }
            }
        }
    }else{
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                if (*(p+j) < *(p+i)){
                    pom = *(p+i);
                    *(p+i) = *(p+j);
                    *(p+j)=pom;
                }
            }
        }
    }
}

int main(void){
    char s;
    printf("Upisite smjer poretka (S- silazno) > ");
    scanf("%c", &s);

    int n;
    printf("Upisite dimenziju > ");
    scanf("%d", &n);

    int polje[n];
    printf("Upisite clanove > ");
    for (int k=0; k<n; k++){
        scanf("%d", &polje[k]);
    }

    sort1D(n, polje, s);

    for (int i = 0; i<n; i++){
        printf("%d ", polje[i]);
    }

    return 0;
}