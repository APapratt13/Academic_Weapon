#include <stdio.h>

int main(void) {
    int novac, pet, dva, jed;

    printf("Upisite iznos u kn > ");
    scanf("%d", &novac);

    pet = novac/5;
    dva = (novac%5)/2;
    jed = novac - pet*5 - dva*2;

    printf("Kovanice:");

    if (pet != 0){
        printf("\n%d x 5 kn", pet);
    }

    if (dva != 0){
        printf("\n%d x 2 kn", dva);
    }

    if (jed != 0){
        printf("\n%d x 1 kn", jed);
    }

    return 0;
}