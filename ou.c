#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if (num == 3 || num == 5) {
        printf("SIM \n");
    } else {
        printf("NAO \n");
    }

    return 0;
}