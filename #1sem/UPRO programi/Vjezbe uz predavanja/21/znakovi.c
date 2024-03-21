#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x;
    int slova=0, brojevi = 0, dr =0;
    for (int i=0; i<1000; i++){
        x = rand() % (126 - 32 + 1)+32;

        if ((x>=65 && x<=90) || (x>=97 && x<=122)){
            ++slova;
        }else if(x>=48 && x<=57){
            ++brojevi;
        }else{
            ++dr;
        }
    }

    printf("Slova   : %d\n", slova);
    printf("Znamenke: %d\n", brojevi);
    printf("OStali  : %d\n", dr);

    return 0;
}