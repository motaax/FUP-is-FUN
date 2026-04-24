#include <stdio.h>

int main() {
    int vet[5];
    int maior, menor;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    menor = vet[0];

    for(int i = 1; i < 5; i++) {
        if(vet[i] > maior) {
            maior = vet[i];
        } else if(vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("%d \n", maior + menor);

    return 0;
}