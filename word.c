#include <stdio.h>

int main() {
    char texto[101];
    char op;

    fgets(texto, 101, stdin);
    scanf(" %c", &op);

    int i = 0;

    if (op == 'M') {
        while (texto[i] != '\0') {
            if (texto[i] >= 'a' && texto[i] <= 'z')
                texto[i] = texto[i] - 32;
            i++;
        }
    }
    else if (op == 'm') {
        while (texto[i] != '\0') {
            if (texto[i] >= 'A' && texto[i] <= 'Z')
                texto[i] = texto[i] + 32;
            i++;
        }
    }
    else if (op == 'i') {
        while (texto[i] != '\0') {
            if (texto[i] >= 'a' && texto[i] <= 'z')
                texto[i] = texto[i] - 32;
            else if (texto[i] >= 'A' && texto[i] <= 'Z')
                texto[i] = texto[i] + 32;
            i++;
        }
    }
    else if (op == 'p') {
        i = 0;
        while (texto[i] != '\0') {

            if (!((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))) {
                i++;
                continue;
            }

            int inicio = i;

            while (texto[i] != '\0' &&
                  ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z'))) {
                i++;
            }

            int tamanho = i - inicio;

            if (tamanho == 1) {
                if (texto[inicio] >= 'A' && texto[inicio] <= 'Z')
                    texto[inicio] = texto[inicio] + 32;
            } else {
                if (texto[inicio] >= 'a' && texto[inicio] <= 'z')
                    texto[inicio] = texto[inicio] - 32;

                for (int j = inicio + 1; j < i; j++) {
                    if (texto[j] >= 'A' && texto[j] <= 'Z')
                        texto[j] = texto[j] + 32;
                }
            }
        }
    }

    printf("%s", texto);

    return 0;
}