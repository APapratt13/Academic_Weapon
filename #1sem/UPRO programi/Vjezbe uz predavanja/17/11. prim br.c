#include <stdio.h>

int genPrim(int br){
    for (int k = 2; k<br; k++){
        if (br%k == 0){
            return 0;
        }       
    }
    return 1;
}

int main(void){
    int i, n;
    printf("Upisite donju granicu i broj prim brojeva > ");
    scanf("%d %d", &i, &n);

    int br = i;
    int polje[n];
    for(int k = 0; k<n; k++){
        while (genPrim(br) == 0){
            genPrim(br);
            br++;
        }
        polje[k]=br;
        br++;
    }

    for (int j=0; j<n; j++){
        printf("%7d", polje[j]);
        printf("\n");
    }

    return 0;
}