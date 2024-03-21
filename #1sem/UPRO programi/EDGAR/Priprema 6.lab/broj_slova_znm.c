#include <stdio.h>
#include <string.h>

void BrojSlovaZnamenaka(char niz[101], int *bs, int *bz){
    int duljina;
    duljina = strlen(niz);
    for (int i=0; i<duljina; i++){
        if ((niz[i]>='A' && niz[i]<='Z') || (niz[i]>='a' && niz[i]<='z')){
            ++*bs;
        }else if (niz[i]>='0' && niz[i]<='9'){
            ++*bz;
        }
    }

    return;
}

int main(void){
    char niz[101];
    printf("Unesite niz znakova > ");
    fgets(niz, sizeof(niz), stdin);

    int brojSlova=0, brojZnamenaka=0;

    BrojSlovaZnamenaka(niz, &brojSlova, &brojZnamenaka);

    printf("%d %d", brojSlova, brojZnamenaka);

    return 0;
}