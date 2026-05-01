#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j;
    int soma = 0;

    // Leitura da matriz
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }

    printf("%d\n", soma);

    return 0;
}