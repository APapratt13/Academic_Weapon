#include <stdio.h>
#include "fibonacci.h"

int main(void) {
    int n;
    do {
        printf("Upisite broj Fibonaccijevih brojeva > ");
        scanf("%d", &n);

        if (n > 0) {
            resetFibonacci();
            for (int i = 0; i < n; ++i) {
                printf("%d\n", getNextFibonacci());
                }
        }
        
    } while (n > 0);

    return 0;
}