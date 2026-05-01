#include <stdio.h>

int main() {
    int lin, col;
    scanf("%d", &lin);
    scanf("%d", &col);

    int a[lin][col];
    int b[lin][col];
    int s[lin][col];

    //leitura matriz a
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //leitura matriz b;
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    //soma das matrizes
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            s[i][j] = a[i][j] + b[i][j];
        }
    }

    //resultado
    for(int i = 0; i < lin; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ", s[i][j]);
        }

        printf("\n");
    }

    return 0;
}