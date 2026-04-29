#include <stdio.h>

int main() {
    char s[35], temp[36];
    int i, j, valor;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        temp[i] = s[i];
    }

    for (char c = 'a'; c <= 'z'; c++) {

        temp[i] = c;
        temp[i + 1] = '\0';

        valor = 0;
        for (j = 0; temp[j] != '\0'; j++) {
            valor += (temp[j] - 'a' + 1);
        }

        if (valor == 0) {
            printf("%s\n", temp);
            return 0;
        }
    }

    printf("sem sorte\n");

    return 0;
}