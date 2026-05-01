#include <stdio.h>

int main() {
    int NL, NC;
    char mat[50][50], nova[50][50];
    int i, j, x, y;

    scanf("%d %d", &NL, &NC);

    for(i = 0; i < NL; i++) {
        for(j = 0; j < NC; j++) {
            scanf(" %c", &mat[i][j]);
        }
    }

    for(i = 0; i < NL; i++) {
        for(j = 0; j < NC; j++) {

            int vivos = 0;

            for(x = -1; x <= 1; x++) {
                for(y = -1; y <= 1; y++) {
                    if(x == 0 && y == 0) continue;

                    int ni = i + x;
                    int nj = j + y;

                    if(ni >= 0 && ni < NL && nj >= 0 && nj < NC) {
                        if(mat[ni][nj] == '#') {
                            vivos++;
                        }
                    }
                }
            }

            if(mat[i][j] == '#') {
                if(vivos < 2 || vivos > 3) {
                    nova[i][j] = '.';
                } else {
                    nova[i][j] = '#';
                }
            } else {
                if(vivos == 3) {
                    nova[i][j] = '#';
                } else {
                    nova[i][j] = '.';
                }
            }
        }
    }

    for(i = 0; i < NL; i++) {
        for(j = 0; j < NC; j++) {
            printf("%c", nova[i][j]);
        }
        printf("\n");
    }

    return 0;
}