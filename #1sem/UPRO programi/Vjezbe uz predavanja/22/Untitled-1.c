#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char *ptr = strrchr(str, 'o');

    if (ptr != NULL) {
        printf("Zadnje pojavljivanje 'o': %s\n", ptr);
    } else {
        printf("Znak 'o' nije pronađen.\n");
    }

    return 0;
}
