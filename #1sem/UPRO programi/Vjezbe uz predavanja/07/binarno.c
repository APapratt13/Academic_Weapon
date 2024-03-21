#include <stdio.h>

int main(void){
    int n, x;
    printf("upisite cijeli broj > ");
    scanf("%d", &n);
    int polje[31];

    int i =0;
    while (n!=1)
    {
        x = n%2;
        n = n/2;
        polje[i]=x;
        i++;
    }
    polje[i]=1;
    printf("binarno: \n");
    for (int j=i; j>=0; j--)
    {
        printf("%d", polje[j]);
    }
    return 0;
}
