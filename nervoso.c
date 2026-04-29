#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int pilha[N];
    int topo = 0;

    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);

        if (x == 0) {
            if (topo > 0) {
                topo--;
            }
        } else {
            pilha[topo] = x;
            topo++;
        }
    }

    int soma = 0;

    for (int i = 0; i < topo; i++) {
        soma += pilha[i];
    }

    printf("%d\n", soma);

    return 0;
}