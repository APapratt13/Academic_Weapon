#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool capitalizeName(struct person_s *person){
    int lenght = strlen(person->name);

    if (lenght == 0) {
        return false;  // Prazan niz, vraća false
    }

        for (int i=1; i<lenght; i++){

            if ((islower(*(person->name+i)) && *(person->name+i-1) == ' ')
                || (islower(*(person->name+i)) && *(person->name+i-1) == '-')){
                    *(person->name+i) = toupper(*(person->name+i));
            }

            else if(i==1 && (islower(*(person->name+i-1)))){
                    *(person->name+i-1) = toupper(*(person->name+i-1));
            }

            else if ((isupper(*(person->name+i)) && *(person->name+i-1) != ' '
                && *(person->name+i-1) != '-')){
                    *(person->name+i) = tolower(*(person->name+i));
            }
        }
    return true;
}

struct person_s {
  int code;
  char name[128];
  float salary;
};

int main(void) {
    struct person_s s;
    printf("Unesite ime > ");
    fgets(s.name, 128, stdin);
    char *p;
    if (p = strchr(s.name, '\n')) *p = '\n';
    // ovdje ugraditi poziv funkcije i kontrolni ispis rezultata
    return 0;
}