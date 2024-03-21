#include <stdio.h>
#include <string.h>

int myStrlen(char *niz){
    int duljina =0;
    while (*(niz+duljina) != '\0'){
        ++duljina;
    }

    return duljina;
}

int main(void){
    char niz[] = "Ovo je niz";
    char *konst = "Ovo je niz";
    printf("%d\n", myStrlen(niz));
    printf("%d\n", myStrlen(konst));

    return 0;
}