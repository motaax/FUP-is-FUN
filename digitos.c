#include <stdio.h>

int main() {
    int A, B;
    int contador = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    // Caso B seja negativo, tornar positivo
    if (B < 0) {
        B = -B;
    }

    // Contar quantas vezes o dígito A aparece em B
    while (B > 0) {
        if (B % 10 == A) {
            contador++;
        }
        B /= 10;
    }

    printf("%d\n", contador);

    return 0;
}