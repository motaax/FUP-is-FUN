#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    printf("[");

    int i = A;
    int primeiro = 1; // controla espaço

    while (1) { // loop infinito
        if (i == B) {
            break; // para ao chegar em B (sem imprimir B)
        }

        if (i % 2 == 0) {
            i++;
            continue; // pula números pares
        }

        if (!primeiro) {
            printf(" ");
        }

        printf("%d", i);
        primeiro = 0;

        i++;
    }

    printf("]\n");

    return 0;
}