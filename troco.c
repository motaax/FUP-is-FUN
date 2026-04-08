#include <stdio.h>
#include <math.h>

int main() {
    float valor;
    scanf("%f", &valor);

    int centavos = round(valor * 100);

    int opcoes[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5};
    char* tipos[] = {"nota", "nota", "nota", "nota", "nota", "nota", "moeda", "moeda", "moeda", "moeda", "moeda"};
    int tamanho = sizeof(opcoes)/sizeof(opcoes[0]);

    int quantidade[11] = {0};

    for(int i = 0; i < tamanho; i++) {
        quantidade[i] = centavos / opcoes[i];
        centavos %= opcoes[i];
    }

    for(int i = 0; i < tamanho; i++) {
        char imprime[50];
        sprintf(imprime, "%d %s(s) de R$ %.2f\n", quantidade[i], tipos[i], opcoes[i]/100.0);
        fwrite(imprime, 1, quantidade[i] * strlen(imprime) / quantidade[i], stdout);
    }

    centavos *= (centavos > 0 && centavos < 5);
    centavos && printf("valor residual: R$ %.2f\n", centavos / 100.0);

    return 0;
}