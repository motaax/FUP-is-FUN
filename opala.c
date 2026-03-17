#include <stdio.h>

int main() {
    float velocidade, tempo_min, consumo;
    float tempo_horas, distancia, desempenho;

    // Entrada
    scanf("%f", &velocidade);
    scanf("%f", &tempo_min);
    scanf("%f", &consumo);

    // Conversões e cálculos
    tempo_horas = tempo_min / 60.0;
    distancia = velocidade * tempo_horas;
    desempenho = distancia / consumo;

    // Saída com duas casas decimais
    printf("%.2f\n", desempenho);

    return 0;
}