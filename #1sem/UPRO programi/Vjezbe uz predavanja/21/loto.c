#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void dajSljedecuKuglicu(int *kuglica){
    int k2 =  rand() % (39 - 1 + 1)+1;

    for (int j =0; j <7; j++){
        for (int i =0; i <7; i++){
            while (k2 == *(kuglica +i)){
                k2 =  rand() % (39 - 1 + 1)+1;
                i=0; //provjerava opet cijelu listu
            }
        }

        *(kuglica + j) = k2;
    }

    for (int k=0; k<7; k++){
        if (*(kuglica+k)/10 !=0){
            printf(" %d", *(kuglica+k));
        }else{
            printf("  %d", *(kuglica+k));;
        }
        
    }
    
}

void resetirajBubanj(int *kuglica){
    for (int k=0; k<7; k++){
        *(kuglica+k) = 0;
    }
}

int main(void){
    int kuglica[7];
    for (int i=1; i < 11; i++){
        if (i/10 !=0){
            printf(" %d. izvlacenje: ", i);
        }else{
            printf("  %d. izvlacenje: ", i);
        }
        dajSljedecuKuglicu(&kuglica[0]);
        resetirajBubanj(&kuglica[0]);
        printf("\n");
    }

    return 0;
}
