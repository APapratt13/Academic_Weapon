#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

void genText(char *niz, int duljinaGen, char *novi){
    static bool inicijaliziran = 0;
    if (!inicijaliziran) {
        srand((unsigned int)time(NULL));
        inicijaliziran = 1;
    }


    int duljinaNiz=0;
    while (*(niz +duljinaNiz) != '\0'){
        ++duljinaNiz;
    }

    for (int i =0; i < duljinaGen; i++){
        *novi = *(niz + rand() % duljinaNiz);
        ++novi;
    }
    *novi = '\0';
}

int main(void){
    char niz[60];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int duljinaGen;
    printf("Upisite duljinu generiranog niza > ");
    scanf("%d", &duljinaGen);

    char novi[100];

    izbaciNR(niz);

    for (int i = 0; i < 3; ++i) {
        genText(niz, duljinaGen, novi);
        printf("%s\n", novi);
    }

    return 0;
}