#include <stdio.h>
#include <string.h>

#define MAXNIZ 60

/*      int strcmp(const char *s1, const char *s2);
      leksikografska usporedba nizova znakova s1 i s2     
     = funkcija vraća
          0 ako su nizovi leksikografski jednaki
          negativni cijeli broj ako je s1 < s2
          pozitivni cijeli broj ako je s1 > s2 */

void izbaciNR(char *niz){
    while (*niz != '\0'){
        if (*niz == '\n' && *(niz+1)=='\0'){
            *niz = '\0';
        }
        ++niz;
    }
}

int main(void){
    char a[MAXNIZ], b[MAXNIZ], c[MAXNIZ];
    printf("Upisite 1.niz > ");
    fgets(a, sizeof(a), stdin);

    printf("Upisite 2.niz > ");
    fgets(b, sizeof(b), stdin);

    printf("Upisite 3.niz > ");
    fgets(c, sizeof(c), stdin);

    izbaciNR(a), izbaciNR(b), izbaciNR(c);

    char *pa = a, *pb = b, *pc = c, *pom = NULL;

    if (strcmp(pa, pb) > 0) {
    pom = pa;
    pa = pb;
    pb = pom;
    }
    if (strcmp(pa, pc) > 0) {
    pom = pa;
    pa = pc;
    pc = pom;
    }
    if (strcmp(pb, pc) > 0) {
    pom = pb;
    pb = pc;
    pc = pom;
    }
    printf("%s\n%s\n%s", pa, pb, pc);

    return 0;
}
