#include <stdio.h>

/*napisati kao rotaciju matrice ali ovo je lakše jer 
se sljedeći red dodaje iza*/

void transpKvad(int m, int *p){
    int temp;
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            temp = *(p + i * m + j);
            *(p + i * m + j) = *(p + j * m + i);
            *(p + j * m + i) = temp;
        }
    }
}

int main(void){
    int m;
    printf("Upisite dimenzije > ");
    scanf("%d", &m);

    int polje[m][m];
    printf("Upisite clanove >\n");
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            scanf("%d", &polje[i][j]);
        }
    }

    transpKvad(m, &polje[0][0]);

    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            printf("  %d", polje[i][j]);
        }
        printf("\n");
    }
    return 0;
}