#include <stdio.h>

int main() {
    int n, m;
    char campo[50][50];
    int i, j, x, y;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf(" %c", &campo[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {

            if(campo[i][j] == '*') {
                printf("*");
            } else {
                int cont = 0;

                for(x = -1; x <= 1; x++) {
                    for(y = -1; y <= 1; y++) {
                        int ni = i + x;
                        int nj = j + y;

                        if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
                            if(campo[ni][nj] == '*') {
                                cont++;
                            }
                        }
                    }
                }

                if(cont == 0) {
                    printf("-");
                } else {
                    printf("%d", cont);
                }
            }
        }
        printf("\n");
    }

    return 0;
}