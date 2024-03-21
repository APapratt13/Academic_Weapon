#include <stdio.h>

int main(void) {
    char i, j;
    for (i = 'A'; i <= 'U'; i = i + 1) {
        printf("%c. ", i);
        for (j = i + 'a' - 'A'; j < i + 'a' - 'A' + 6; j++) {
            printf("%c ", j);
        }
        printf(".%c\n", i + 5);
    }
 return 0;
}