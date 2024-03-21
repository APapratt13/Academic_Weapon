#include <stdio.h>
#include <string.h>
//radi!
void delCharFromName(char *name, char c) {
    int i = 0;
    int j = 0;

    while (*(name + i) != '\0') {
        if (*(name + i) != c) {
            *(name + j) = *(name + i);
            ++j;
        }
        ++i;
    }

    *(name + j) = '\0';
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