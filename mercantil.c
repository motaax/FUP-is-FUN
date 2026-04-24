#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float valores[n];
    float chutes[n];
    char escolhas[n];

    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%f", &chutes[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf(" %c", &escolhas[i]);
    }

    int v1 = 0, v2 = 0;

    for (int i = 0; i < n; i++) {
        if (chutes[i] == valores[i]) {
            v1++;
        } else {
            if ((escolhas[i] == 'M' && valores[i] > chutes[i]) ||
                (escolhas[i] == 'm' && valores[i] < chutes[i])) {
                v2++;
            } else {
                v1++;
            }
        }
    }

    if (v1 > v2) {
        printf("primeiro\n");
    } else if (v2 > v1) {
        printf("segundo\n");
    } else {
        printf("empate\n");
    }

    return 0;
}