#include <stdio.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("O numero %d e primo!\n", n);
    } else {
        printf("O numero %d nao e primo!\n", n);
    }

    return 0;
}