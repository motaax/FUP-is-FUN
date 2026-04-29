#include <stdio.h>
#include <string.h>

int main() {
    char nome[1000];
    int soma = 0;

    fgets(nome, sizeof(nome), stdin);

    int len = strlen(nome);
    if (nome[len - 1] == '\n') {
        nome[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        soma += (int)nome[i];
    }

    printf("%d\n", soma % 50);

    return 0;
}