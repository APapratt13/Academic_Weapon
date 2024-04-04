int najstudenti(char *txtdat, char *bindat){
   FILE *ulazpod=fopen(txtdat,"r");
   FILE *izlazpod=fopen(bindat,"wb");

   int b=0;
   struct rezultat zapis;

   if(ulazpod != NULL && izlazpod != NULL){
        //while(fread((&zapis),sizeof(zapis),1,ulazpod)== 1){
        while(fscanf(ulazpod, "%s %d", zapis.ime, &zapis.bodovi)== 2){
            if(zapis.bodovi>=80){
                fwrite(&zapis, sizeof(zapis), 1, izlazpod);
                b++;
            }
        //fseek(ulazpod, (long)(n + 1) * sizeof(zapis), SEEK_SET);
        }

        fclose (ulazpod);
        fclose (izlazpod);
        return b;

   }else{
      return -1;
   }

}