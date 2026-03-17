#include <stdio.h>

int main() {
    int C, A;

    scanf("%d", &C);
    scanf("%d", &A);

    int viagens = (A + (C - 2)) / (C - 1);

    printf("%d\n", viagens);

    return 0;
}