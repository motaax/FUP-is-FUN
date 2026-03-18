#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    printf("[");

    int passo = (A < B) ? 1 : -1;
    int i = A;

    while (i != B) {
        printf("%d", i);

        if (i + passo != B) {
            printf(" ");
        }

        i += passo;
    }

    printf("]\n");

    return 0;
}