#include <stdio.h>

int main() {
    int mat[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int somaRef = 0;

    for (int j = 0; j < 3; j++) {
        somaRef += mat[0][j];
    }

    for (int i = 1; i < 3; i++) {
        int somaLinha = 0;
        for (int j = 0; j < 3; j++) {
            somaLinha += mat[i][j];
        }
        if (somaLinha != somaRef) {
            printf("nao\n");
            return 0;
        }
    }

    for (int j = 0; j < 3; j++) {
        int somaCol = 0;
        for (int i = 0; i < 3; i++) {
            somaCol += mat[i][j];
        }
        if (somaCol != somaRef) {
            printf("nao\n");
            return 0;
        }
    }

    // diagonal principal
    int diag1 = mat[0][0] + mat[1][1] + mat[2][2];

    // diagonal secundária
    int diag2 = mat[0][2] + mat[1][1] + mat[2][0];

    if (diag1 != somaRef || diag2 != somaRef) {
        printf("nao\n");
        return 0;
    }

    printf("sim\n");

    return 0;
}