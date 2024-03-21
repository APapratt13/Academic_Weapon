#include <math.h>
#include <stdio.h>

int postaviBitove(unsigned short int *pokNaBroj, int n){
    char binar[16];
    
    int i =0;
    if (*pokNaBroj == 0){
        for(int j =0; j<16; j++){
            binar[i] = '0';
        }
        for (int j =0; j<n; j++){
            *pokNaBroj += pow(2,j);
        }
        return n;
    }else{
        while (*pokNaBroj != 1){
            if (*pokNaBroj%2 ==0){
                binar[16-i]='0';
            }else{
                binar[16-i]='1';
            }
            ++i;
            *pokNaBroj = *pokNaBroj/2;
        }
        binar[16-i] = '1';
    }

    int br=0;
    for (int j=0; j<n; j++){
        if (binar[16-j] == '0'){
            binar[16-j] = '1';
            ++br;
        }
    }
    
    *pokNaBroj=0;
    for (int j=0; j<16; j++){
        if (binar[16-j] == '1'){
            *pokNaBroj += pow(2,j);
        }
    }
    return br;
}

int main(void) {
   unsigned short int objekt;
   int n, rez;
   scanf("%hu %d", &objekt, &n);
   rez = postaviBitove(&objekt, n);
   printf("Nova vrijednost objekta=%u\nBroj postavljenih bitova=%d", objekt, rez);
   return 0;
}

