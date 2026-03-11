#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite tres numeros inteiros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3) {
        printf("Todos os tres valores sao iguais.\n");
    } 
    else if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Dois valores sao iguais.\n");
    } 
    else {
        printf("Todos os valores sao diferentes.\n");
    }

    return 0;
}