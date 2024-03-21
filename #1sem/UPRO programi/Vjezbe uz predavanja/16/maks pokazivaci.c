#include <stdio.h>

int maks(int *p1, int *p2){
    if (*p1 < *p2){
        return *p2;
    }else{
        return *p1;
    }
}

int main(void){
    int a, b;
    printf("Upisite dva cijela broja > ");
    scanf("%d %d", &a, &b);
    
    printf("Rezultat je %d",  maks(&a, &b));

    return 0;
}


