#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOW 50
#define HIGH 60

//rand() % (b - a + 1) + a

int main(void){
    srand ((unsigned)time(NULL));

    int br = 0;
    for (int i = LOW; i< HIGH+1; i++){
        for (int j=0; j<1000000; j++){
            if ((rand() % (60 - 50 + 1) + 50) == i){
                br += 1;
            }
        }
        printf("%2d %6d\n", i, br);
        br =0;
    }

    return 0;
}