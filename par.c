#include <stdio.h>

int main() {
    int A, B;
    int soma = 0;

    scanf("%d %d", &A, &B);

    if (A > B) {
        printf("invalido\n");
        return 0;
    }

    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}