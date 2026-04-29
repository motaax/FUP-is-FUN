#include <stdio.h>

int main() {
    char str[101];
    int i, len = 0;

    fgets(str, 101, stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (i = len - 1; i >= 0; i--) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            printf("%c", c - 32);
        }
        else if (c >= 'A' && c <= 'Z') {
            printf("%c", c + 32);
        }
        else {
            printf("%c", c);
        }
    }

    printf("\n");

    return 0;
}