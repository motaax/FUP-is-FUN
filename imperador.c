#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char mat[100][100];

    int i, j;
    int G = 0, C = 0;
    int linha_valida;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf(" %c", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        linha_valida = 1;

        for (j = 0; j < m; j++) {
            if (mat[i][j] == 'L') {
                linha_valida = 0;
                break;
            }
        }

        if (!linha_valida) continue;

        for (j = 0; j < m; j++) {
            if (mat[i][j] == 'G') {
                G += 2;
            }
            else if (mat[i][j] == 'C') {
                if (j == m - 1 - i) {
                    G += 2;
                } else {
                    C += 1;
                }
            }
        }
    }

    if (G > C) {
        printf("Gladiadores\n");
    } else if (C > G) {
        printf("Condenados a morte\n");
    } else {
        printf("Ninguém\n");
    }

    return 0;
}