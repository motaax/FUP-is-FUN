#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char op;

    printf("Digite dois numeros inteiros e a operacao desejada (+ - * /): \n");
    scanf("%d %d %c", &num1, &num2, &op);

    if (op == '+') {
        resultado = num1 + num2;
        printf("Resultado: %d \n", resultado);
    } else if (op == '-') {
        resultado = num1 - num2;
        printf("Resultado: %d \n", resultado);
    } else if (op == '*') {
        resultado = num1 * num2;
        printf("Resultado: %d \n", resultado);
    } else if (op == '/') {
        // Verifica se o divisor é zero
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %d\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else {
        printf("Operacao invalida!\n");
    }

    return 0;
}