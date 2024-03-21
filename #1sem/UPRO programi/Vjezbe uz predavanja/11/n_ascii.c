#include <stdio.h>

int main(void){
    int n;
    printf("Upisite cijeli broj > ");
    scanf("%d", &n);

    while ((n>=65 && n<=90) || (n>=97 && n<=122)){
        printf("%d %c", n, n);
        printf("\nUpisite cijeli broj > ");
        scanf("%d", &n);
    }

    return 0;
}
