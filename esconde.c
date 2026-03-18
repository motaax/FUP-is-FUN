#include <stdio.h>

int main() {
    int N;
    
    // Lê o número inteiro N
    scanf("%d", &N);

    // Imprime os ímpares de 1 até N
    for (int i = 1; i <= N; i += 2) {
        printf("%d\n", i);
    }

    // Imprime os pares de N até 0
    // Como N é sempre ímpar, o primeiro par abaixo dele é N-1
    for (int i = N - 1; i >= 0; i -= 2) {
        printf("%d\n", i);
    }

    return 0;
}
