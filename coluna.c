#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriz[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maiorSoma = -1;
    int maiorColuna = 0;

    for(int j = 0; j < n; j++) {
        int soma = 0;

        for(int i = 0; i < n; i++) {
            soma += matriz[i][j];
        }

        if(soma > maiorSoma) {
            maiorSoma = soma;
            maiorColuna = j;
        }
    }

    printf("%d \n", maiorColuna);
 
    return 0;
}