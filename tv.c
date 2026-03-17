#include <stdio.h>

int main() {
    float valor_tv, valor_total, valor_parcela;
    int parcelas;
    float juros;

    // Entrada
    scanf("%f", &valor_tv);
    scanf("%d", &parcelas);

    // Determina o percentual de juros
    switch(parcelas) {
        case 1: juros = 0.0; break;
        case 2: juros = 0.05; break;
        case 3: juros = 0.10; break;
        case 4: juros = 0.15; break;
        case 5: juros = 0.20; break;
        case 6: juros = 0.25; break;
        case 7: juros = 0.30; break;
        case 8: juros = 0.35; break;
        case 9: juros = 0.40; break;
        case 10: juros = 0.45; break;
        default:
            printf("Número de parcelas inválido\n");
            return 1;
    }

    // Calcula valor total com juros
    valor_total = valor_tv * (1 + juros);

    // Calcula valor da parcela
    valor_parcela = valor_total / parcelas;

    // Saída com duas casas decimais
    printf("Valor da parcela: R$ %.2f\n", valor_parcela);
    printf("Valor total: R$ %.2f\n", valor_total);

    return 0;
}