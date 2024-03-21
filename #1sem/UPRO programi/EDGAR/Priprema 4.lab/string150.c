#include <stdio.h>

int main(void){
    char s[150];
    char s2[150];

    printf("Upisite znakovni niz: ");
    fgets(s, 150, stdin);

    int j=0, i=0;

    while (s[i] != '\0' && i < sizeof(s) - 1){ 
        if ((int(s[i]) >= 65 && int(s[i]) <= 91) || (int(s[i]) >= 97 && int(s[i]) <= 123)){
            s2[j] = s[i];
            j++;
        }
        i++;
    }
    
    if (j==0){
        printf("Izlazni znakovni niz je: prazan strin\n");
    } else{
        printf("Izlazni znakovniniz je: %s\n", s2);
    }

    printf("%c");
    return 0;
}