//FAKTORIJELE
#include<stdio.h>
int main() {
    int n, i, fakt;
    scanf("%d", &n);
    fakt = 1;
    for(i = 2; i <= n; i++) {
        fakt *= i; //fakt*=i je isto kao i fakt = fakt * i;
    }
    printf("%d!= %d", n, fakt);
    return 0;
}
