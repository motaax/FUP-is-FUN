#include <stdio.h>

int main() {
    int L, C;
    char mat[20][20];
    int i, j;
    int pode = 1;

    scanf("%d %d", &L, &C);

    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            scanf(" %c", &mat[i][j]);
        }
    }

    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            if(mat[i][j] == 'o') {
                if(i == L - 1 || mat[i + 1][j] == '#' ) {
                    pode = 0;
                }
            }
        }
    }

    if(pode) {
        for(i = L - 1; i >= 0; i--) {
            for(j = 0; j < C; j++) {
                if(mat[i][j] == 'o') {
                    mat[i][j] = '.';
                    mat[i + 1][j] = 'o';
                }
            }
        }
    }

    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}