#include <stdio.h>

int main() {
    int n1, n2;

    // Entrada
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Saída
    printf("%d\n", n1 / n2);          // divisão inteira
    printf("%d\n", n1 % n2);          // resto da divisão
    printf("%.2f\n", (float)n1 / n2); // divisão quebrada com 2 casas

    return 0;
}