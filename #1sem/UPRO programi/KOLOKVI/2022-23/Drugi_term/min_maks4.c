#include <stdio.h>
#include <string.h>

int main(void){
    char niz[31];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    char *novir=strchr(niz, '\n'); //micem ca ovaj new line
    if (novir != NULL){
        *novir = '\0';
    }

    int duljina = strlen(niz);

    int k = 1, l=1, imax, imin;
    for (int i = 0; i < duljina; i++){
        while (niz[i]>niz[k]){
            imax = i;
            k++;
        }
        while (niz[i]<niz[l]){
            imin = i;
            l++;
        }
    }
    
    printf("imin = %d, imax = %d", imin, imax);


    return 0;
}