#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    int v[105];
    int gritos[105];

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < X; i++) {
        scanf("%d", &gritos[i]);
    }

    for (int g = 0; g < X; g++) {
        int alvo = gritos[g];
        int existe = 0;

        for (int i = 0; i < N; i++) {
            if (v[i] == alvo || v[i] == -alvo) {
                existe = 1;
                break;
            }
        }

        if (!existe) continue;

        for (int i = 0; i < N; i++) {
            if (v[i] == alvo) {
                v[i] = -v[i];
            } else if (v[i] == -alvo) {
                v[i] = -v[i];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d", v[i]);
        if (i < N - 1) printf(" ");
    }

    printf("\n");

    return 0;
}