#include <stdio.h>

void compress(unsigned char *p, int len) {
    // Iteriraj kroz parne indekse
    for (int i = 0; i < len; i += 2) {
        unsigned char left = p[i];
        unsigned char right;

        // Ako postoji sljedeći broj, koristi njegovu desnu polovicu
        if (i + 1 < len) {
            right = p[i + 1];
        } else {
            right = 0; // Ako nema sljedećeg broja, koristi 0
        }

        // Sažmi brojeve i spremi rezultat na indeks i/2
        p[i / 2] = (left << 4) | (right & 0x0F);
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