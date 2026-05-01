#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 9, 27, 23},
        {34, 20, 37, 47},
        {30, 87, 55, 69},
        {13, 60, 99, 66}
    };

    int vetor[6];
    int i, j, k;
    int cont = 0;

    for (i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {
                if (vetor[i] == matriz[j][k]) {
                    cont++;
                }
            }
        }
    }

    printf("%d\n", cont);

    return 0;
}