#include <stdio.h>
#include <string.h>

void delCharFromName(char *name, char c){
    int lenght = strlen(name);

    char novi[lenght];
    int i=0;
    while (*name != '\n'){
        if (*name == c){
            ++*name;
        }
        novi[++i]=*name;
    }
}


int main(void) {
    char name[128+1];
    char c;
    printf("Unesite niz > ");
    fgets(name, 128, stdin);
    printf("Unesite znak > ");
    scanf("%c", &c);
    delCharFromName(name, c);
    printf("%s", name);
    return 0;
}