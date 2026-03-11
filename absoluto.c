#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor1;
    int valor2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &valor1, &valor2);

    int absoluto = abs(valor2 - valor1);
    printf("O modulo e: %d \n", absoluto);

    return 0;
}