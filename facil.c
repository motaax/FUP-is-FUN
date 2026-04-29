#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);

    int H[1005];

    for (int i = 0; i < M; i++) {
        scanf("%d", &H[i]);
    }

    int esq_dir = 0;
    int dir_esq = 0;

    for (int i = 1; i < M; i++) {
        if (H[i] > H[i - 1]) {
            esq_dir += H[i] - H[i - 1];
        }
    }

    for (int i = M - 2; i >= 0; i--) {
        if (H[i] > H[i + 1]) {
            dir_esq += H[i] - H[i + 1];
        }
    }

    if (esq_dir < dir_esq)
        printf("%d\n", esq_dir);
    else
        printf("%d\n", dir_esq);

    return 0;
}