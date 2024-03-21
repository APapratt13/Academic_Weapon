//ISPIS NAJMANJEGA U POLJU
#include<stdio.h>
int main() {
    int n;
    printf("n > ");
    scanf("%d", &n);
    int polje[n];
    for(int i = 0; i < n; i++) { //i++ je istko kao i = i + 1;
        scanf("%d", &polje[i]);
    }
    int ind_min;
    for(int i = 0; i < n; i++) {
        if(i == 0 || polje[i] < polje[ind_min]) // < trazi prvi najmanji tj najlijeviji, <= je da se traži najmanji najjedsniji, tj zadnja pojava
            ind_min = i;
    }
    printf("%d", polje[ind_min]);
    return 0;
}