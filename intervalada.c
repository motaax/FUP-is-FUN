#include <stdio.h>

int main() {
    int n, inf, sup;
    scanf("%d %d %d", &n, &inf, &sup);

    int contador = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x >= inf && x <= sup) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}