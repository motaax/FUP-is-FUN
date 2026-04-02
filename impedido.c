#include <stdio.h>

int main() {
    int L, R, D;

    scanf("%d %d %d", &L, &R, &D);

    if (L < R && L < D) {
        printf("S\n"); // Impedimento
    } else {
        printf("N\n"); // Não impedimento
    }

    return 0;
}