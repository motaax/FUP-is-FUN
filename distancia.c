#include <stdio.h>
#include <math.h> //Função sqrt e pow

int main() {
    float x, y, z, w, distancia;

    printf("Digite as coordenadas X e Y do primeiro e segundo ponto: ");
    scanf("%f %f %f %f", &x, &y, &z, &w);

    distancia = sqrt(pow(z - x, 2) + pow(w - y, 2)); //Função para elevar um número a um expoente qualquer
    printf("A distancia e: %.2f \n", distancia);

    return 0;
}