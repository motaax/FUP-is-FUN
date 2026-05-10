#include <stdio.h>

int fatorial(int x) {
    int res;

    if(x == 0) {
        res = 1;
    } else {
        res = x * fatorial(x - 1);
    }

    return res;
}

int main(void) {
    int fatorial(int x);
    int numero, res;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    res = fatorial(numero);

    printf("O fatorial e: %d \n", res);

    return 0;
}