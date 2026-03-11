#include <stdio.h>
#include <math.h> //Para usar o sqrt

int main() {
    float a, b, c, s, area;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2.0;

    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("A area do triangulo e: %.2f \n", area);

    return 0;
}