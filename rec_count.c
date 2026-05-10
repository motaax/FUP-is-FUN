#include <stdio.h>

int contarOcorrencias(char str[], char c, int pos) {

    if (str[pos] == '\0') {
        return 0;
    }

    if (str[pos] == c) {
        return 1 + contarOcorrencias(str, c, pos + 1);
    }

    return contarOcorrencias(str, c, pos + 1);
}

int main() {
    char str[101];
    char c;

    scanf("%100[^\n]", str);

    scanf(" %c", &c);

    printf("%d\n", contarOcorrencias(str, c, 0));

    return 0;
}