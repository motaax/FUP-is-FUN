#include <stdio.h>

typedef struct {
    int valor;
    int indice;
} Par;

int main() {
    int n;
    scanf("%d", &n);

    Par v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i].valor);
        v[i].indice = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j].valor > v[j + 1].valor) {
                Par temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d", v[i].indice);
        if (i < n - 1) printf(" ");
    }

    printf("\n");

    return 0;
}