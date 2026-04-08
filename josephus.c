#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int vivo[N];

    for (int i = 0; i < N; i++) {
        vivo[i] = 1;
    }

    int restantes = N;
    int atual = X - 1;

    for (; restantes > 1; ) {

        int prox;

        for (prox = (atual + 1) % N; vivo[prox] == 0; prox = (prox + 1) % N);

        vivo[prox] = 0;
        restantes--;

        for (atual = (prox + 1) % N; vivo[atual] == 0; atual = (atual + 1) % N);
    }

    for (int i = 0; i < N; i++) {
        if (vivo[i] == 1) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}