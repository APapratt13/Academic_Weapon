#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("Upisi dva cijela broja > ");
    scanf("%d %d", &x, &y);

    if ((x > 100 + y) && ((y % 2 == 0) || (y >= 0))) {
        printf("Istina je");
    }
    
    return 0;
}