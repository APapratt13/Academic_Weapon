//ISPIS NAJVECEGA U POLJU
#include<stdio.h>
int main() {
    int n;
    printf("n > ");
    scanf("%d", &n);
    int polje[n];
    for(int i = 0; i < n; i++) { //i++ je istko kao i = i + 1;
        scanf("%d", &polje[i]);
    }
    int ind_max;
    for(int i = 0; i < n; i++) {
        if(i == 0 || polje[i] > polje[ind_max]) {
            ind_max = i;
        }
    }
    printf("%d", polje[ind_max]);
    return 0;
}