#include <stdio.h>

double media(double vet[], int qtd) {
    double soma = 0;
    int i;

    for(i = 0; i < qtd; i++) {
        soma += vet[i];
    }

    return soma / qtd;
}

int main() {
    int n, i;
    double alturas[100];
    double m;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%lf", &alturas[i]);
    }

    m = media(alturas, n);

    printf("%.2lf\n", m);

    for(i = 0; i < n; i++) {
        if(alturas[i] < m) {
            printf("P\n");
        } else if(alturas[i] == m) {
            printf("M\n");
        } else {
            printf("G\n");
        }
    }

    return 0;
}