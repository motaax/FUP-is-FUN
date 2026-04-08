#include <stdio.h>

int main() {
    int total, qtd;
    scanf("%d", &total);
    scanf("%d", &qtd);

    int v[qtd];

    for (int i = 0; i < qtd; i++) {
        scanf("%d", &v[i]);
    }

    int temRepetida = 0;

    for (int i = 1; i < qtd; i++) {
        if (v[i] == v[i - 1]) {
            printf("%d ", v[i]);
            temRepetida = 1;
        }
    }

    if (!temRepetida) {
        printf("N");
    }

    printf("\n");

    int temFaltando = 0;
    int j = 0;

    for (int i = 1; i <= total; i++) {

        for (; j < qtd && v[j] < i; j++);

        if (j >= qtd || v[j] != i) {
            printf("%d ", i);
            temFaltando = 1;
        }
    }

    if (!temFaltando) {
        printf("N");
    }

    printf("\n");

    return 0;
}