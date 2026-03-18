#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i <= 10; i++) {
        if (i == N) {
            continue; // pula o número N
        }

        if (i == 10) {
            printf("ceu");
        } else {
            printf("%d", i);
        }

        // evitar espaço extra no final (opcional)
        if (i < 10 && !(i + 1 == N && i + 1 == 10)) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}