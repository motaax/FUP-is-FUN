#include <stdio.h>

int main() {
    int valores[5];
    int menor;

    for(int i=0; i < 5; i++) {
        scanf("%d", &valores[i]);
    }

    menor = valores[0];

    for(int i=1; i < 5; i++) {
        if(valores[i] < menor) {
            menor = valores[i];
        }
    }

    printf("%d \n", menor);

    return 0;
}