#include <stdio.h>

int main() {
    int n;
    int vetor[50];
    int soma_pares = 0, soma_impares = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < n; i++) {
        if(vetor[i] % 2 == 0) {
            soma_pares += vetor[i];
        } else {
            soma_impares += vetor[i];
        }
    }

    if(soma_impares > soma_pares) {
        printf("soldados\n");
    } else if(soma_pares > soma_impares) {
        printf("rebeldes\n");
    } else {
        printf("empate\n");
    }

    return 0;
}