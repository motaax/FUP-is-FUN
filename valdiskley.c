#include <stdio.h>

int main() {
    char letra;
    int rotacao;

    scanf("%d %d", &letra, &rotacao);

    int pos = letra - 'a';
    int novaPos = (pos + rotacao) % 26;

    if(novaPos < 0) {
        novaPos += 26;
    }

    char res = novaPos + 'a';

    printf("%c", res);

    return 0;
}