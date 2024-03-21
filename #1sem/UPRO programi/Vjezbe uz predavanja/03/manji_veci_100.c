#include <stdio.h>

int main(void) {
    int a, b;

    printf("Upisi dva cijela broja > ");
    scanf("%d %d", &a, &b);

    if (((a < 100) && (b > 100)) || ((a > 100) && (b < 100))) {
        printf("jedan je veci, a drugi je manji od 100");
    }
    
    return 0;
}