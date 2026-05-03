#include <stdio.h>

int main() {
    char s[55];
    int i;

    fgets(s, 55, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '\n') {
            continue;
        }

        if (ch == ' ') {
            printf(" ");
        }
        else if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                printf("v");
            else
                printf("c");
        }
        else if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                printf("v");
            else
                printf("c");
        }
    }

    printf("\n");

    return 0;
}