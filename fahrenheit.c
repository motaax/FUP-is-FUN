#include <stdio.h>

int main() {
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    double fahrenheit = (1.8 * celsius) + 32;
    printf("Valor em Fahrenheit e: %.6f \n", fahrenheit);

    return 0;
}