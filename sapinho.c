#include <stdio.h>

int main() {
    int P, S, E;
    scanf("%d %d %d", &P, &S, &E);

    int pos = 0;

    while (1) {
        // salto
        pos += S;

        if (pos >= P) {
            printf("%d saiu\n", pos);
            break;
        }

        printf("%d\n", pos);

        // queda
        pos -= E;
        printf("%d\n", pos);
    }

    return 0;
}