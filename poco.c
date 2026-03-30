#include <stdio.h>

int main() {
    int P, S, E;

    scanf("%d", &P);
    scanf("%d", &S);
    scanf("%d", &E);

    while (1) {
        // Salto
        P = P + S;
        printf("%d\n", P);

        if (P > E) {
            break; // saiu
        }

        P = P - 1;
        printf("%d\n", P);

        if (P <= 0) {
            break; // morreu afogado
        }
    }

    return 0;
}