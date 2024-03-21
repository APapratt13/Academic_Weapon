#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *ulaz = fopen("c:\\Users\\antea\\Desktop\\ulaz.txt", "r");

    // trebam s nečime ograničiti petlju - EOF end of file
    
    int znak;
    while ((znak = fgetc(ulaz)) != EOF){
        printf("%c", toupper(znak));
    }
    
    fclose(ulaz);
    
    return 0;
}