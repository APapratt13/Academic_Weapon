#include <stdio.h>

int traziZadnjiZnak(char *n, char x){
    int i =0; int br =0;
    while (*(n+i) != '\0'){
        if (*(n+i) == x){
            br = i;
        }
        i+=1;
    }

    return br;
}

int main(void){
    char niz[21];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    char x;
    printf("Upisite znak > ");
    scanf("%c", &x);

    int a = traziZadnjiZnak(niz, x);
    if (a != 0){
        printf("%d", a);
    }else{
        printf("U nizu nema zadanog znaka");
    }

    return 0;
}