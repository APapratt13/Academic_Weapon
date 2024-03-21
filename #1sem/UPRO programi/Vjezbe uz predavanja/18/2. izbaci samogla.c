#include <stdio.h>

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

void izbaciSamoglase(char *niz){
    int i =0, pomak=0;
    while (*(niz+i) != '\0'){
        if (*(niz+i) != 'a' && *(niz+i) != 'A' &&
            *(niz+i) != 'e' && *(niz+i) != 'E' &&
            *(niz+i) != 'i' && *(niz+i) != 'I' &&
            *(niz+i) != 'o' && *(niz+i) != 'O' &&
            *(niz+i) != 'u' && *(niz+i) != 'U'){
                *(niz + pomak++) = *(niz+i);
            }
        ++i;
    }

    *(niz + pomak) = '\0';
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    izbaciNR(niz);
    izbaciSamoglase(niz);

    printf("%s", niz);

    return 0;
}