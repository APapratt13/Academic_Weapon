#include <stdio.h>

int main(void) {
    int a, b, zbroj;
    printf("Hello WOrld! A sada unesite a i b > ");
    scanf("%d %d ", &a, &b);
    
    zbroj = a + b;
    
    printf("%d %d", a, b);
    printf("%d", zbroj);

    return 0;
}