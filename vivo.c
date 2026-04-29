#include <stdio.h>

int main() {
    int P, R;
    int teste = 1;

    while (1) {
        scanf("%d %d", &P, &R);
        if (P == 0 && R == 0) break;

        int fila[105];
        int novo[105];

        for (int i = 0; i < P; i++) {
            scanf("%d", &fila[i]);
        }

        int tamanho = P;

        for (int r = 0; r < R; r++) {
            int N, J;
            scanf("%d %d", &N, &J);

            int respostas[105];

            for (int i = 0; i < N; i++) {
                scanf("%d", &respostas[i]);
            }

            int novo_tamanho = 0;

            for (int i = 0; i < N; i++) {
                if (respostas[i] == J) {
                    novo[novo_tamanho++] = fila[i];
                }
            }

            for (int i = N; i < tamanho; i++) {
                novo[novo_tamanho++] = fila[i];
            }

            for (int i = 0; i < novo_tamanho; i++) {
                fila[i] = novo[i];
            }

            tamanho = novo_tamanho;
        }

        printf("Teste %d\n", teste++);
        printf("%d\n\n", fila[0]);
    }

    return 0;
}