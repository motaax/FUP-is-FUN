#include <stdio.h>

#define MAX 100

int main() {
    int nl, nc;
    scanf("%d %d", &nl, &nc);

    int mat[MAX][MAX];

    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int cont = 0;

    for (int j = 0; j < nc; j++) {
        for (int i = 0; i < nl; i++) {
            for (int k = i + 1; k < nl; k++) {
                if (mat[i][j] > mat[k][j]) {
                    cont++;
                }
            }
        }
    }

    printf("%d\n", cont);

    return 0;
}