#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[5005];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int visitado[5005] = {0};
    int freq[5005];
    int valores[5005];
    int qtd_valores = 0;

    for (int i = 0; i < n; i++) {
        if (!visitado[i]) {
            int cont = 1;
            for (int j = i + 1; j < n; j++) {
                if (v[i] == v[j]) {
                    cont++;
                    visitado[j] = 1;
                }
            }
            valores[qtd_valores] = v[i];
            freq[qtd_valores] = cont;
            qtd_valores++;
        }
    }

    printf("%d\n", qtd_valores);

    int max = 0;
    for (int i = 0; i < qtd_valores; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    int mais_freq[5005];
    int qtd = 0;

    for (int i = 0; i < qtd_valores; i++) {
        if (freq[i] == max) {
            mais_freq[qtd++] = valores[i];
        }
    }

    for (int i = 0; i < qtd - 1; i++) {
        for (int j = 0; j < qtd - i - 1; j++) {
            if (mais_freq[j] > mais_freq[j + 1]) {
                int temp = mais_freq[j];
                mais_freq[j] = mais_freq[j + 1];
                mais_freq[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < qtd; i++) {
        printf("%d", mais_freq[i]);
        if (i < qtd - 1) printf(" ");
    }

    printf("\n");

    return 0;
}