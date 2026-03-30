#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Espaços à esquerda
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", N);
        }

        printf("\n");
    }

    return 0;
}