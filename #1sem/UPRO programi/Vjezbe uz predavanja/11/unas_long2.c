#include <stdio.h>

int main(void){
    unsigned n;
    unsigned long long kvad;

    printf("Upisite prirodni broj u granicama [1, 4250000000] > ");
    scanf("%u", &n);

    kvad = 1ULL * n * n ;
    printf("%u * %u = %llu", n, n, kvad);

    return 0;
}