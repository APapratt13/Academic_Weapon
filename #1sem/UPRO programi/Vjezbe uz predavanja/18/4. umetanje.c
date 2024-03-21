#include <stdio.h>
#include <stdbool.h>

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

bool umetniZnak(char *niz, int pozic, char z){
    int duljina = 0;
    bool da = 0;

    while (*(niz+duljina) != '\0'){
        ++duljina;
    }

    int i;
    if (pozic >= 0 && pozic <= duljina){
        for(i = duljina; i>= pozic; --i){
            *(niz + i + 1) = *(niz + i);
        }
        *(niz + pozic) = z;
        da = 1;
    }
    return da;
}

int main(void){
    char niz[21];
    int pozic;
    char z;

    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    printf("Upisite znak > ");
    scanf("%c", &z);

    printf("Upisite poziciju > ");
    scanf("%d", &pozic);

    izbaciNR(niz);
    if (umetniZnak(niz, pozic, z)) {
        printf("%s", niz);
    }else{
        printf("Neispravna pozicija");
    }

    return 0;
}