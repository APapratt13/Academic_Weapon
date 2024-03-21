//ALGORITAM za SORTIRANJE, po retcima
void sortirajMatricu(int *polje, int redak, int stupac) {
   for(int i = 0; i < redak; i++) {
      for(int j = 0; j < stupac - 1, j++) {
         for(int k = 0; k < stupac -j -1; k++) {
            if(*(polje + stupac*i + k) > *(polje + stupac*i + k + 1)) {
               int temp = *(polje + stupac*i + k);
               *(polje + stupac*i + k) = *(polje + stupac*i + k + 1);
               *(polje + stupac*i + k + 1) = temp;
            }
         }
      }
   }
}