#include <stdio.h>

void izbaciNR(char *niz, int *lenght){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++*lenght, ++niz;
    }
}

void brojiVelikaMala(char *niz, int *v, int *m){
    while(*niz != '\0'){
        if (*niz != ' '){
            if (*niz >= 'a' && *niz<='z'){
                *m += 1;
            }else{
                *v += 1;
            }
        }
        ++niz;
    }
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int lenght=0;
    izbaciNR(niz, &lenght);

    int velika=0, mala=0;
    brojiVelikaMala(niz, &velika, &mala);

    printf("Velikih: %d", velika);
    printf("\nMalih: %d", mala);

    return 0;
}