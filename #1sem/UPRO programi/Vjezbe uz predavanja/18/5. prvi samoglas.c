#include <stdio.h>

int traziPrviSamoglas(char *niz){
    int i = 0;
    while (*(niz+i) != '\0'){
        if (*(niz+i) == 'a' || *(niz+i) == 'A' ||
            *(niz+i) == 'e' || *(niz+i) == 'E' ||
            *(niz+i) == 'i' || *(niz+i) == 'I' ||
            *(niz+i) == 'o' || *(niz+i) == 'O' ||
            *(niz+i) == 'u' || *(niz+i) == 'U'){
            return *(niz+i);
        }
        ++i;
    }
    return 0;
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int a = traziPrviSamoglas(niz);
    if (a != 0){
        printf("%c", a);
    }else{
        printf("U nizu nema samoglasnika");
    }

    return 0;
}