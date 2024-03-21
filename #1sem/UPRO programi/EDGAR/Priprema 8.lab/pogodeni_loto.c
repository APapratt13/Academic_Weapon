#include <stdbool.h>

struct listic{
    long serijski_broj;
    int odigrana_kombinacija[6];
};

struct listic dobitni;

void ObradaIgre (struct listic *svi_listici, int N, int *izvuceni_brojevi){
    dobitni.serijski_broj = -1;

    

    for (int i=0; i<N; i++){
        bool je_dobitni = true;
        for (int j=0; j<6; j++){
            if (svi_listici[i].odigrana_kombinacija[j] != *(izvuceni_brojevi+j)){
                je_dobitni = false;
            }
        }
        if (je_dobitni){
            dobitni = svi_listici[i];
        }
    }
}
