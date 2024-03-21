#include <stdio.h>

int main(void) {
    int n;
    printf("Unesite broj > ");
    scanf("%d", &n);

    if ((n >= -100) && (n < 1)) {
        printf("je");
    }
    else {
        printf("nije");
    }

    return 0;
}