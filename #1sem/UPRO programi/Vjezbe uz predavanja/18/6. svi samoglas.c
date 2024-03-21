#include <stdio.h>

int traziPrviSamoglas(char *niz, int i){
    int pom=0;
    while (*(niz+i) != '\0'){
        if (*(niz+i) == 'a' || *(niz+i) == 'A' ||
            *(niz+i) == 'e' || *(niz+i) == 'E' ||
            *(niz+i) == 'i' || *(niz+i) == 'I' ||
            *(niz+i) == 'o' || *(niz+i) == 'O' ||
            *(niz+i) == 'u' || *(niz+i) == 'U'){
                pom = *(niz+i);
                return pom;
            }
        ++i;
        //pom = *(niz+i);
    }
    return 0;
}

void izbaciNR(char *niz, int *lenght){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++*lenght, ++niz;
    }
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int lenght=0;

    izbaciNR(niz, &lenght);
    printf("Svi samoglasnici: ");
    for (int i = 0; i < lenght; i++){
        if (traziPrviSamoglas(niz, i) != 0){
            printf("%c", traziPrviSamoglas(niz, i));
        }
        
    }

    return 0;
}