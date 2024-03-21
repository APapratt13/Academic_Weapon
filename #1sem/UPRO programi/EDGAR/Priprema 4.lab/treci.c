#include <stdio.h>

int main(void){
    int N, M, idxi, idxj;
    printf("Upisite brojeve N, M, idxi i idxj > ");
    scanf("%d %d %d %d", &N, &M, &idxi, &idxj);

    //inicijalizacija polja
    int polje[N][M];
    for (int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            polje[i][j] = 0;
        }
    }

    printf("Upisana matrica: \n");
    for (int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            printf("%d", polje[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int i_smjer = 1, j_smjer = -1;
    int brojac = 0;
    while (polje[idxi][idxj] != 1){
        if (polje[idxi][idxj] == 0){
            polje[idxi][idxj] = 1;
            brojac++;
            if (idxi == N){ //stranice
                idxi = idxi - i_smjer;
            }else if (idxj == M){ //stranice
                idxj = idxj - j_smjer; 
            }else if (idxi==N && idxj==M){ //kut
                idxi = idxi - i_smjer;
                idxj = idxj - j_smjer;
            }else{
                idxi = idxi + i_smjer;
                idxj = idxj + j_smjer;
            }
        }
    }

    for (int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            printf("%d", polje[i][j]);
        }
        printf("\n");
    }
    printf("%d", brojac);

    return 0;
}