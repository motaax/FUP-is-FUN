#include <stdio.h>

int main() {
    char frase[101];
    char letra;
    int i = 0, cont = 0;

    fgets(frase, 101, stdin);
    scanf(" %c", &letra);

    while (frase[i] != '\0') {
        if (frase[i] == letra) {
            cont++;
        }
        i++;
    }

    printf("%d\n", cont);

    return 0;
}