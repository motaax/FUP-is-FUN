#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int soma = a + b;
    int sub = a - b;
    int multi = a * b;
    int divi = (float) a / b;
    int resto = a % b;

    printf("A soma: %d \n", soma);
    printf("A subtracao: %d \n", sub);
    printf("A multiplicacao: %d \n", multi);
    printf("A divisao: %.2f \n", (float) divi);
    printf("O resto: %d \n", resto);

    return 0;
}