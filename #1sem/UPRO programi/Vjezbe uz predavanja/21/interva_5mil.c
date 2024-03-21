#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOW 10.0f
#define HIGH 15.0f

int main(void){
    srand ((unsigned)time(NULL));

    int x, br = 0;
    for (float i = LOW; i< HIGH; (i=i+0.5)){
        for (int j=0; j<5000000; j++){
            x = (double)rand() / RAND_MAX * (15.0 - 10.0) + 10.0;
            if (x >= i && x <= (i+0.5)){
                br += 1;
            }
        }
        printf("[%0.1f - %0.1f] -> %7d\n", i, (i+0.5), br);
        br =0;
    }

    return 0;
}