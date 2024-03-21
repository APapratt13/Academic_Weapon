#include <stdio.h>

int main(void) {
    int n;
    printf("Unesite broj > ");
    scanf("%d", &n);

    if ((n>=1) && (n<100)) {
        printf("je");
    }
    else {
        printf("nije");
    }

    return 0;
}