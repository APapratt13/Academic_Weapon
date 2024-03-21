#include <stdio.h>

int main(void){
    int n;
    printf("Unesite n > ");
    scanf("%d", &n);
    while (n<0){
        printf("Unesite n > ");
        scanf("%d", &n);
    }
    

    int polje[n];
    int e;
    for (int i = 0; i <n; i++){
        scanf("%d", &e);
        polje[i]=e;
    }

    int a[n];
    for (int i = 0; i < n; i++){
        if (n%2 == 1 && i == (n-1)){
            a[i]=polje[i];
        }
        else if (i%2 == 0){
            a[i]=polje[i+1];
            a[i+1]=polje[i];
        }
        
    }
    fprintf(stderr, "varijabla a = %d", n);

   for (int i = 0; i < n; i = i + 1) {
      printf("%d ", a[i]);
   }
   return 0;
}