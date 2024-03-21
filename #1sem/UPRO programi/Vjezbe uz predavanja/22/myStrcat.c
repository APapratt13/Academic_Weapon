#include <stdio.h>

void myStrcat(char *s, char *skopija){
    int duljinaPrvi =0;
    while (*(s + duljinaPrvi) != '\0'){
        ++duljinaPrvi;
    }

    int duljinaDrugi =0;
    while (*(skopija + duljinaDrugi) != '\0'){
        ++duljinaDrugi;
    }

    int i, j=0;
    for (i = duljinaDrugi; i<(duljinaDrugi+duljinaPrvi); i++){
        *(skopija + i) = *(s+j);
        ++j;
    }
    *(skopija + i)= '\0';
}

int main(void){
    char skopija[] = "Ovo je niz";
    char *s = "Napor mentalni";

    myStrcat(s, skopija);
    printf("%s", skopija);

    return 0;
}