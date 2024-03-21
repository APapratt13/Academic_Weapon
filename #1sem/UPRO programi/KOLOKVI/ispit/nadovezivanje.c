#include <stdio.h>

int main(void){
    char a_org[21], b_org[21];
    printf("Unesite prvi niz > ");
    fgets(a_org, sizeof(a_org), stdin);

    printf("Unesite drugi niz > ");
    fgets(b_org, sizeof(b_org), stdin);

    char a[21], b[21];
    int duljina_a=0;
    int i = 0;

    while (a_org[i] != '\n'){
        a[i]=a_org[i];
        duljina_a++;
        i++;
    }
    a[i]='\0';

    int duljina_b=0;
    i = 0;
    while (b_org[i] != '\n'){
        b[i]=b_org[i];
        duljina_b++;
        i++;
    }
    b[i]='\0';
    int duljina_novi = duljina_a + duljina_b+1;
    char novi[duljina_novi];

    int k = duljina_b - 1;
    for (int i = 0; i < (duljina_novi); i++){
        if (i<duljina_a){   
            novi[i]=a[i];
        }else if (i >= duljina_a && k>=0){
            novi[i]=b[k];
            k = k-1;
        }
    }

    char spojeno[duljina_novi];
    i = 0;
    while (novi[i] != b[0]){
        spojeno[i]=novi[i];
        i++;
    }
    spojeno[i]=b[0];
    spojeno[i+1]='\0';

    printf("Spojeni niz > %s\n", spojeno);

    return 0;
}