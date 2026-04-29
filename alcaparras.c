#include <stdio.h>

int main() {
    char frase[101];
    char letra;
    int i, cont = 0;

    scanf(" %[^\n]", frase);
    scanf(" %c", &letra);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}