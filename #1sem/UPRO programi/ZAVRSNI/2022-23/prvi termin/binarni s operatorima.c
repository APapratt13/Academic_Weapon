int postaviBitove(unsigned short int *pokNaBroj, int n){
    int i, b=0;
    for (i=0; i<n; i++){ // petlja ide kroz prvih n bitova varijable *pokNaBroj
        if(((*pokNaBroj >> i) & 0x1)==0){ //provjerava je li i-ti bit najmanjeg znacaja na 0
            b++;
            *pokNaBroj=*pokNaBroj | 0x1 <<i;
        }
    }
    return b;
}