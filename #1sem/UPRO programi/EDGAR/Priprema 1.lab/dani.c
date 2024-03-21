#include <stdio.h>

int main(void) {
    int d, t, g;

    printf("unesite broj dana: ");
    scanf("%d",&d);

    g = d/365;
    t = (d%365)/7;
    d =  (d%365)%7;

    printf("Unos odgovara razdoblju od %d god, %d tj i %d dana", g, t, d);

    return 0;
}