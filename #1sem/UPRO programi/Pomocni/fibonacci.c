//FIBBONACI

#include<stdio.h>
int main() {
    int a_i = 1, a_i_minus2 = 1, a_i_minus1 = 1, n, i;
    printf("n > ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i >2){
        a_i = a_i_minus1 + a_i_minus2;
        a_i_minus2 = a_i_minus1;
        a_i_minus1 = a_i;
        }
        printf("%d ", a_i);
    }
    return 0;
}