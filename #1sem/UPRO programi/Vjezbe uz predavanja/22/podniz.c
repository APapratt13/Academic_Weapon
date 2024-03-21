#include <stdio.h>
#include <string.h>

#define MX 60

/*char *strstr(const char *s1, const char *s2);
--- traženje prve pojave podniza u s1 koji je jednak nizu s2 
(znak terminatora niza s2 se ne uzima u obzir kod usporedbe)*/

int brojPodnizova(char *s1, char *s2) {
    int br=0;
    char *pocetak=s1; //inicijalizaicj apokazivača na početak s1
    while ((pocetak=strstr(pocetak, s2))!= NULL){ //nastavlja od zadnjeg znaka
        ++br, ++pocetak;
    }

    return br;
}

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

int main(void){
    char niz[MX];
    printf("Upisite 1. niz > ");
    fgets(niz, sizeof(niz), stdin);

    char podniz[MX];
    printf("Upisite 2. niz > ");
    fgets(podniz, sizeof(podniz), stdin);

    izbaciNR(podniz);

    printf("2. niz se u 1. nizu pojavljuje %d puta", brojPodnizova(niz, podniz));

    return 0;
}

