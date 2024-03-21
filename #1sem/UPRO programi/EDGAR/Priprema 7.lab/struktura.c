#include <stdio.h>
#include <string.h>

struct person_s {
    int code;
    char name[128];
    float salary;
}

void delCharFromName(struct person_s *s, char c){
    int lenght = strlen(s ->name); 
    /* 
        s je pokkazivac na strukturu person_s
        s->name je polje znakova unutar strukture
    */

    int j=0;
    for(int i=0; i<lenght; i++){
        if(s->name[i] != c){
            s->name[j++] = s->name[i];
        }
    }

    s->name[j]='\0';
}


int main(void) {
    struct person_s s;
    char c;
    printf("Unesite niz > ");
    fgets(s.name, 128, stdin);

    printf("Unesite znak > ");
    scanf("%c", &c);

    // ovdje ugraditi poziv funkcije

    printf("%s", s.name);
    return 0;
}