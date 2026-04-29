#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int melhor_id = 1;
    int menor_esforco = 1000000000;

    for (int t = 1; t <= N; t++) {
        int M;
        scanf("%d", &M);

        int H[1005];

        for (int i = 0; i < M; i++) {
            scanf("%d", &H[i]);
        }

        int esq_dir = 0;
        int dir_esq = 0;

        // esquerda -> direita
        for (int i = 1; i < M; i++) {
            if (H[i] > H[i - 1]) {
                esq_dir += H[i] - H[i - 1];
            }
        }

        // direita -> esquerda
        for (int i = M - 2; i >= 0; i--) {
            if (H[i] > H[i + 1]) {
                dir_esq += H[i] - H[i + 1];
            }
        }

        int melhor_local = (esq_dir < dir_esq) ? esq_dir : dir_esq;

        if (melhor_local < menor_esforco) {
            menor_esforco = melhor_local;
            melhor_id = t;
        }
    }

    printf("%d\n", melhor_id);

    return 0;
}