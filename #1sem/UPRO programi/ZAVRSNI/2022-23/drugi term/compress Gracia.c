#include <stdio.h>

void compress(unsigned char *p, int len) {
    int i, j =0;

    for (i=0; i<len; i += 2){ // uzima samo parne indekse
        if(i == len-1){ // ako je i indeks zadnjeg elementa u polju to je neparno polje i taj element treba posebno
            *(p+j) = *(p+i) << 4;
        }else{ //ako nismo u zadnjem elementu tj parni je len
            *(p+i) = *(p+i) << 4; //pomice lijevu polovicu tren elementa u org polje za 4 bita ulijevo
            *(p+j) = *(p+i) | *(p+i+1);
            /*Desnu polovicu trenutnog elementa postavi na desnu 
            polovicu sljedećeg elementa (originalnog polja). 
            Koristimo | (bitwise OR) kako bismo postavili odgovarajuće bitove 
            u desnoj polovici*/
        }
        j++;
    }
}


int main(void) {
    int len;
    scanf ("%d", &len);
    unsigned char polje[len];
    for (int i = 0; i < len; i++) {
        polje[i] = i + 1;
    }    
    compress(polje, len);
    for (int i = 0; i < len/2 + (len%2); i++) {
        printf("%u ", polje[i]);
    }
    return 0;
} 