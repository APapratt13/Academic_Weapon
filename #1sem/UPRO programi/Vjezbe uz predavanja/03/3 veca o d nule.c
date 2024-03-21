#include <stdio.h>

int main(void) {
    float n, B = 0;

    for (int i = 0; i < 5; i++) {
        printf("unesite relan br: ");
        scanf("%f", &n);

        if (n > 0) {
            B += 1;
        }
    }
    if (B >= 3) {
        printf("barem su 3 veca od nule");
    }
    else {
        printf("niti tri nisu veca od nule");
    }
    
    return 0;
}