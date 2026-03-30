#include <stdio.h>

int consegue_sair(int P, int E, int S) {
    int altura = 0;
    int salto = S;

    while (salto > 0) {
        altura += salto;

        if (altura >= P) {
            return 1; // saiu
        }

        altura -= E;

        if (altura < 0) {
            return 0; // morreu
        }

        salto -= 10;
    }

    return 0;
}

int main() {
    int P, E;
    scanf("%d %d", &P, &E);

    int S = 1;

    while (!consegue_sair(P, E, S)) {
        S++;
    }

    printf("%d\n", S);

    return 0;
}