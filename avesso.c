#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int v[105];

        for (int i = 0; i < N; i++) {
            scanf("%d", &v[i]);
        }

        while (X--) {
            int grito;
            scanf("%d", &grito);

            int existe = 0;

            for (int i = 0; i < N; i++) {
                if (v[i] == grito || v[i] == -grito) {
                    existe = 1;
                    break;
                }
            }

            if (!existe) continue;

            for (int i = 0; i < N; i++) {
                if (v[i] == grito - 1 || v[i] == -(grito - 1)) {
                    v[i] = -v[i];
                }
                else if (v[i] == grito + 1 || v[i] == -(grito + 1)) {
                    v[i] = -v[i];
                }
            }
        }

        for (int i = 0; i < N; i++) {
            printf("%d", v[i]);
            if (i < N - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}