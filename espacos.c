#include <stdio.h>

int main() {
    char s[205];
    fgets(s, sizeof(s), stdin);

    int i = 0, espaco = 0;

    while (s[i] != '\0') {
        if (s[i] != ' ') {
            putchar(s[i]);
            espaco = 0;
        } else {
            if (!espaco) {
                putchar(' ');
                espaco = 1;
            }
        }
        i++;
    }

    return 0;
}