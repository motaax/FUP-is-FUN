#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, N;
    scanf("%d %d", &L, &N);

    int jogadas[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &jogadas[i]);
    }

    int vencedor = -1;
    int menor_dist = 1000000000; 

    for (int i = 0; i < N; i++) {
        int dist = abs(jogadas[i]);

        if (jogadas[i] >= -L && jogadas[i] <= L) {
            if (dist <= menor_dist) {
                menor_dist = dist;
                vencedor = i;
            }
        }
    }

    if (vencedor == -1) {
        printf("nenhum\n");
    } else {
        printf("%d\n", vencedor);
    }

    int perdedor = 0;
    int maior_dist = abs(jogadas[0]);

    for (int i = 1; i < N; i++) {
        int dist = abs(jogadas[i]);

        if (dist >= maior_dist) {
            maior_dist = dist;
            perdedor = i;
        }
    }

    printf("%d\n", perdedor);

    return 0;
}