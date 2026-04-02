#include <stdio.h>

int main() {
    int soma;
    scanf("%d", &soma);

    if (soma == 0) {
        printf("Joguem de novo\n");
    } else {
        char letra;
        letra = 'A' + (soma - 1) % 26;
        printf("%c\n", letra);
    }

    return 0;
}