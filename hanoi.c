#include <stdio.h>

void hanoi(int n, char origem, char aux, char destino) {
    //Caso base
    if(n == 1) {
        printf("%c -> %c \n", origem, destino);
        return;
    }

    hanoi(n - 1, origem, destino, aux);
    printf("%c -> %c \n", origem, destino);
    hanoi(n - 1, aux, origem, destino);
}

int main() {
    int n;
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    return 0;
}