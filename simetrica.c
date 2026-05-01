#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int simetrica = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação de simetria
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
                break;
            }
        }
        if(simetrica == 0) {
            break;
        }
    }

    if(simetrica) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}