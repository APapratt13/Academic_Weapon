#include <stdio.h>
#include <stdlib.h>

#define RAND_UPPER_BOUND 8
#define RAND_LOWER_BOUND 2

void generirajSlucajniRedak(int n, int *mat){
    int redak = rand()%n;

    for (int i =0; i<n; i++){
        mat[redak*n + i]= rand()%(8-2+1)+2;
    }
}

void print_mat(int n, int mat[n][n]) {
   for(int i=0; i < n; i++) {
      for(int j=0; j < n; j++){
         printf("%d ", mat[i][j]);
      }
      printf("\n");
   }
}


int compare_2d_arrays(int n, int mat1[n][n], int mat2[n][n]) {
   for(int i=0; i < n; i++) {
      for(int j=0; j < n; j++){
         if (mat1[i][j] != mat2[i][j]) {
            return 1;
         }
      }
   }


   return 0;
}


int main(void) {
   int seed;
   scanf("%d", &seed);


   int my_mat[6][6] = {0};
   int expected_mat[6][6] = {0};


   srand(seed);
   generirajSlucajniRedak(6, &my_mat[0][0]);
   srand(seed);
   generirajSlucajniRedak(6, &expected_mat[0][0]);


   printf("\nVas rezultat:\n");
   print_mat(6, my_mat);
   printf("------------------------\n");
   printf("\nOcekivani rezultat:\n");
   print_mat(6, expected_mat);


   printf("------------------------\n");


   printf("Jednaki:");
   if (compare_2d_arrays(6, my_mat, expected_mat) == 0) {
      printf("DA");
   } else {
      printf("NE");
   }


   return 0;
}