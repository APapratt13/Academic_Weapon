#include <stdio.h>
#include <string.h>

int main(void){
    char niz[200];
    printf("Upisite znakovni niz > ");
    fgets(niz, sizeof(niz), stdin);

    int duljina = strlen(niz);

    int i = duljina;
    /*
    for (i; i >=0; i--){
        printf("%c", niz[i]);
    }
    */
    printf("Obrnuti niz: ");
    for (i=(duljina-1); i >=0; i--){
        if ((niz[i] != ' ') && (niz[i]>=97 && niz[i]<=122)){
           printf("%c", (niz[i]-32)); 
        }else{
            printf("%c", (niz[i]));
        }
    }
    printf("\n");
    return 0;
}