#include <stdio.h>
#include <string.h>
#define MAKS

int main(void){
    char niz[MAKS];
    printf("Unesite niz > ");
    fgets(niz, sizeof(niz), stdin);

    int duljina = strlen(niz);

    int brojac[duljina], b=0;
    for (int i=0; i < duljina; i++){
        for (int j=0; j < duljina; j++){
            if (niz[i]==niz[j]){
                b++;
            }
        }
        brojac[i]=b;
        b = 0;
    }
    	
    int spremnik, maksBrojac = brojac[0];
    for (int i=1; i < duljina; i++){
        if (maksBrojac< brojac[i]){
            maksBrojac = brojac[i];
            spremnik = niz[i];
        }
    }
    printf("Znak %d se ponavlja %d puta.", spremnik, b);    
    return 0;
}