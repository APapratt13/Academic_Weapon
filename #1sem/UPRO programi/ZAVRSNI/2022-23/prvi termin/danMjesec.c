#include<stdio.h>

void danMjesec(int rbrDanGodina, int *dan, int *mjesec){
    int mjeseci[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    *mjesec = 1;
    *dan = rbrDanGodina;

    int i=0;
    while(*dan >mjeseci[i]){
        *dan -= mjeseci[i];
        ++i;
        ++*mjesec;
    }
}

int main(void) {
    int i, dan, mjesec;
    for (i = 1; i < 366; i++) {
        danMjesec(i, &dan, &mjesec);
        printf("rbrDanGodina = %3d -> dan: %2d, mjesec: %2d\n", i, dan, mjesec);
    }
    return 0;
}   