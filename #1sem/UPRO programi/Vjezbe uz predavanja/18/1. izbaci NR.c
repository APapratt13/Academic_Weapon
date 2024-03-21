#include <stdio.h>

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(n+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    izbaciNR(niz);

    printf("%s!", niz);

    return 0;
}