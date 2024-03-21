#include <stdio.h>
#include <string.h>

int brojiSamoglasnike(char *imeDatoteke){
    FILE *ulaz = fopen(imeDatoteke, "r");

    if (ulaz == NULL){
        return -1;
    }else{
        char znak, br=0;
        char *p= "aeiouAEIOU";

        while ((znak = fgetc(ulaz)) != EOF){
            if ((strchr(p, znak) )!= NULL){
                ++br;
            }
        }
        return br;
    }
}

void izbaciNR(char *imeDatoteke){
    while (*imeDatoteke != '\0'){
        if (*imeDatoteke == '\n' && *(imeDatoteke+1)=='\0'){
            *imeDatoteke = '\0';
        }
        *(++imeDatoteke);
    }
}

int main(void){
    char imeDatoteke[150];
    printf("Upisite kompletan put do datoteke > ");
    fgets(imeDatoteke, sizeof(imeDatoteke), stdin);

    izbaciNR(imeDatoteke);

    if (brojiSamoglasnike(imeDatoteke) == -1){
        printf("Nije uspjelo otvaranje datoteke %s", imeDatoteke);
    }else{
        printf("Broj samoglasnika u datoteci %s je %d > ", imeDatoteke, brojiSamoglasnike(imeDatoteke));
    }

    return 0;
}