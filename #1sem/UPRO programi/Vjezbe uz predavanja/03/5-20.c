#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("Upisi dva cijela broja > ");
    scanf("%d %d", &x, &y);

    if (((x >= 5) && (x <= 20))||((x >= 5) && (x <= 20))) {
        printf("Istina je");
    }
    else {
        printf("nije istina");
    }

    return 0;
}