#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    if (num % 7 == 0) {
        printf("SIM \n");
    } else {
        printf("NAO \n");
    }

    return 0;
}