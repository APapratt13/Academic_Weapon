#include <stdio.h>

int main(void){
    char a, b;
    printf("Upisite dva znaka > ");
    scanf("%c%c", &a, &b);

    for (int i=a; i<=b; i++){
        printf("%c", i);
    }

    return 0;
}