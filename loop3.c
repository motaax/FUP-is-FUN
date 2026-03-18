#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);

    printf("[");

    for (int i = A; i > B; i--) {
        printf("%d ", i);

    }

    printf("]");

    return 0;
}