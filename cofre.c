#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int barra[1005];

    for (int i = 1; i <= N; i++) {
        scanf("%d", &barra[i]);
    }

    int pos;
    scanf("%d", &pos); 

    int freq[10] = {0};

    for (int i = 1; i < M; i++) {
        int prox;
        scanf("%d", &prox);

        int ini, fim;

        if (pos < prox) {
            ini = pos;
            fim = prox;
        } else {
            ini = prox;
            fim = pos;
        }

        for (int j = ini; j <= fim; j++) {
            freq[barra[j]]++;
        }

        pos = prox;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d", freq[i]);
        if (i < 9) printf(" ");
    }

    printf("\n");

    return 0;
}