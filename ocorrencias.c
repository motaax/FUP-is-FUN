#include <stdio.h>
#include <string.h>

int contar(char str[], char c, int i) {

    if (str[i] == '\0') {
        return 0;
    }

    if (str[i] == c) {
        return 1 + contar(str, c, i + 1);
    }

    return contar(str, c, i + 1);
}

int main() {
    char str[101];
    char c;

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    scanf("%c", &c);

    printf("%d\n", contar(str, c, 0));

    return 0;
}