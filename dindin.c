#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char sabor[N], turno[N];

    int choc = 0, lima = 0;
    int manha = 0, tarde = 0;

    for (int i = 0; i < N; i++) {
        scanf(" %c %c", &sabor[i], &turno[i]);

        if (sabor[i] == 'c') {
            choc++;
        } else if (sabor[i] == 'l') {
            lima++;
        }

        if (turno[i] == 'm') {
            manha++;
        } else if (turno[i] == 't') {
            tarde++;
        }
    }

    if (choc > lima) {
        printf("chocolate\n");
    } else if (lima > choc) {
        printf("limao\n");
    } else {
        printf("empate\n");
    }

    if (manha < tarde) {
        printf("manha\n");
    } else if (tarde < manha) {
        printf("tarde\n");
    } else {
        printf("empate\n");
    }

    return 0;
}