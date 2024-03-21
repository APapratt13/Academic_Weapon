//ALGORITAM ZA SORTIRANJE, po stupcima
void sortitajMatrice(int *polje, int redak, int stupac) {
   for(int j = 0; j < stupac; j++) {
      for(int i = 0; i < redak - 1; i++) {
         for(int k = 0; k < redak - i - 1; k++) {
            if(*(polje + stupac*k + j) > *(polje + stupac*(k+1) + j)) {
               int temp = *(polje + stupac*k + j);
               *(polje + stupac*k + j) = *(polje + stupac*(k+1) + j);
               *(polje + stupac*(k+1) + j) = temp;
            }
         }
      }
   }
}