#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, maior;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &num1, &num2);

    maior = (num1 + num2 + abs(num1 - num2)) /2;
    printf("O maior numero e: %d \n", maior);

    return 0;
}