#include "fibonacci.h"
static int f_minus_1 = 1, f_minus_2 = 1, rbr = 0;
void resetFibonacci(void) {
    f_minus_1 = 1;
    f_minus_2 = 1;
    rbr = 0;
    
    return;
}

int getNextFibonacci(void) {
    int nextFib;
    ++rbr;
    
    if (rbr <= 2) {
        nextFib = 1;
    } else {
        nextFib = f_minus_1 + f_minus_2;
        f_minus_2 = f_minus_1;
        f_minus_1 = nextFib;
    }

    return nextFib;
}