#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int esquerda[61] = {0};
    int direita[61] = {0};

    for (int i = 0; i < N; i++) {
        int M;
        char L;
        scanf("%d %c", &M, &L);

        if (L == 'E') {
            esquerda[M]++;
        } else if (L == 'D') {
            direita[M]++;
        }
    }

    int pares = 0;

    for (int i = 0; i <= 60; i++) {
        if (esquerda[i] < direita[i]) {
            pares += esquerda[i];
        } else {
            pares += direita[i];
        }
    }

    printf("%d\n", pares);

    return 0;
}