#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("[");

    for (int i = A; i < B; i++) {
        printf("%d", i);

        // evita vírgula depois do último número
        if (i < B - 1) {
            printf(", ");
        }
    }

    printf("]\n");

    return 0;
}