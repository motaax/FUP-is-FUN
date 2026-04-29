#include <stdio.h>

int ehVogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char str[101];
    int i = 0;

    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            if (i > 0 && ehVogal(str[i - 1]) && ehVogal(str[i + 1])) {
            } else {
                printf(" ");
            }
        } else {
            printf("%c", str[i]);
        }
        i++;
    }

    printf("\n");

    return 0;
}