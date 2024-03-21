#include <stdio.h>

int PovecajKonvertiraj(float *o, int bonus, float *p){
    *p = (bonus*1.f/(*o))*100;
    *o = (*o + bonus*1.f)/7.53450;

    if (*p >= 10){
        return 1;
    }else{
        return 0;
    }
}

int main(void){
    float osnov, postotak;
    int bonus; 
    printf("Unesite iznos place: ");
    scanf("%f", &osnov);
    printf("Unesite iznos bonusa: ");
    scanf("%d", &bonus);

    PovecajKonvertiraj(&osnov, bonus, &postotak);

    printf("Uvecana placa: %.2f EUR te je uvecanje %.2f %%", osnov, postotak);

    return 0;
}