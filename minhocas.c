#include <stdio.h>

int main() {
    int N, M;
    int matriz[100][100];
    int i, j;

    scanf("%d %d", &N, &M);

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int max_linha = 0;
    int max_coluna = 0;

    for(i = 0; i < N; i++) {
        int soma = 0;
        for(j = 0; j < M; j++) {
            soma += matriz[i][j];
        }
        if(i == 0 || soma > max_linha) {
            max_linha = soma;
        }
    }

    for(j = 0; j < M; j++) {
        int soma = 0;
        for(i = 0; i < N; i++) {
            soma += matriz[i][j];
        }
        if(j == 0 || soma > max_coluna) {
            max_coluna = soma;
        }
    }

    if(max_linha > max_coluna) {
        printf("%d\n", max_linha);
    } else {
        printf("%d\n", max_coluna);
    }

    return 0;
}