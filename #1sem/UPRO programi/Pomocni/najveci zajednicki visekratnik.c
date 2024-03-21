//NZV, tj. najveci zajednički višekratnik

int gcd(int br, int naz) {
   int gcd;
   for(int i = 1; i <= br && i <= naz; i++) {
      if(br % i == 0 && naz % i == 0)
        gcd = i;
   }
   return gcd;
}