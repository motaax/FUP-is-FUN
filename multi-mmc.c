#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int a, int b) {
    return (a / mdc(a, b)) * b;
}

int main() {
    int n;
    scanf("%d", &n);

    int v[50];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int resultado = v[0];

    for (int i = 1; i < n; i++) {
        resultado = mmc(resultado, v[i]);
    }

    printf("%d\n", resultado);

    return 0;
}