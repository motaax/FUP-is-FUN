#include <stdio.h>

#define MAX 1000

int main() {
    int N;
    scanf("%d", &N);

    int M[MAX][MAX];
    int somaLinha[MAX] = {0};
    int somaColuna[MAX] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &M[i][j]);
            somaLinha[i] += M[i][j];
            somaColuna[j] += M[i][j];
        }
    }

    int maxPeso = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int peso = somaLinha[i] + somaColuna[j] - M[i][j];
            if (peso > maxPeso) {
                maxPeso = peso;
            }
        }
    }

    printf("%d\n", maxPeso);

    return 0;
}