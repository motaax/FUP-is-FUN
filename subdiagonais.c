#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int soma_principal = 0;
    int soma_secundaria = 0;

    // Leitura da matriz
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        soma_principal += matriz[i][i];        
        soma_secundaria += matriz[i][4 - i];      
    }

    printf("%d\n", soma_principal - soma_secundaria);

    return 0;
}