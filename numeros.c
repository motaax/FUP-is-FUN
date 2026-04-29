#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[105];
    fgets(frase, 105, stdin);

    int soma = 0;
    int atual = 0;
    int construindo = 0;

    for (int i = 0; i < strlen(frase); i++) {
        char c = frase[i];

        if (isdigit(c)) {
            atual = atual * 10 + (c - '0');
            construindo = 1;
        } else {
            if (construindo) {
                soma += atual;
                atual = 0;
                construindo = 0;
            }
        }
    }

    if (construindo) {
        soma += atual;
    }

    printf("%d\n", soma);

    return 0;
}