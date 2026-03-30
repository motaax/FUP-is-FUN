#include <stdio.h>

int main() {
    double A, G, Ra, Rg;

    scanf("%lf %lf %lf %lf", &A, &G, &Ra, &Rg);

    // Calcula o custo por km para cada combustível
    double custo_alcool = A / Ra;
    double custo_gasolina = G / Rg;

    if (custo_alcool < custo_gasolina) {
        printf("A\n");
    } else {
        printf("G\n");
    }

    return 0;
}