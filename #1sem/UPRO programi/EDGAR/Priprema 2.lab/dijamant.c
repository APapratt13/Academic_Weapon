#include <stdio.h>

int main(){
    int n;
    printf("Unesite broj > ");
    scanf("%d", &n);

    int razmak = n/2;
    int broj = 1;

    if (n%2==1){
        for(int i = 0; i < n; i++){
            for (int j = 0; j < razmak; j++){
                printf(" ");
            }
            for (int j = 0; j < broj; j++){
                printf("*");
            }
            printf("\n");
            
            if( i < n/2){ //smanjuje razmake
                razmak--;
                broj += 2;
            }else{
                razmak++; //dodaje razmake
                broj -= 2;
            }
        }
    }else{
        printf("Neispravan unos!");
    }

    return 0;
}