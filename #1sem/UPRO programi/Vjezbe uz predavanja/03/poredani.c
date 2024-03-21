#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Upisi 3 cijela broja > ");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a != b) &&  (b != c)) {
        if (((a < b) &&  (b < c)) || ((a > b) &&  (b > c))) {
            printf("brojevi su poredani i razliciti");
        }
         else {
        printf("brojevi nisu poredani ili razliciti");
        }
    }
    else {
        printf("brojevi nisu poredani ili razliciti");
    }

    return 0;
}