#include <stdio.h>

void izbaciNR(char *niz, int *lenght){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++*lenght, ++niz;
    }
}

void stvoriObrnutiNiz(char *niz, int lenght, char *novo){
    for(int i=0; i<lenght; i++){
        *(novo+lenght-i-1)=*(niz+i);
    }
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int lenght=0;
    izbaciNR(niz, &lenght);

    char novo[lenght];
    stvoriObrnutiNiz(niz, lenght, novo);

    printf("Originalni: %s", niz);

    printf("\nObrnuti   : ");

    for (int i=0; i<lenght; i++){
        printf("%c", novo[i]);
    }

    return 0;
}