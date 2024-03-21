#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Upisite n > ");
    scanf("%d", &n);
    while (n<3 || n>60){
        printf("Neispravan unos!");
        printf("\nUpisite n > ");
        scanf("%d", &n);
    }

    int x;
    //(int)((double)rand() / (RAND_MAX + 1U)*(b - a + 1)+ a);
    for (int i=0; i <n; i++){
        x = (double)rand() / (RAND_MAX + 1U)*(90 - 65 + 1)+ 65;
        printf("%c", x);
    }
    

    return 0;
}
