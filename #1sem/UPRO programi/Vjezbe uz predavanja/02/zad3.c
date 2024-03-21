#include <stdio.h>
#include <math.h>

int main(void) {
    int broj, a, b, c;

    printf("Upisi peteroznamenkasti cijeli broj: ");
    scanf("%d", &broj);
    
    a = broj / pow(10,5);
    b = broj / 100 % 10;
    c = broj % 10;

    printf("%d %d %d", a, b, c);

    return 0;

}