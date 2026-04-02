#include <stdio.h>

int main() {
    char tipo;
    int F, T, P;

    scanf(" %c", &tipo);
    scanf("%d", &F);

    if (tipo == 'b') {
        T = 20;
    } else if (tipo == 'c') {
        T = 18;
    }

    P = ((F * T) - 80) / 10;

    if (P < 150) {
        printf("Fraco, nem passou\n");
    } else if (P < 180) {
        printf("Perfeito\n");
    } else if (P <= 210) {
        printf("Satisfeito\n");
    } else {
        printf("Muito forte, bola fora\n");
    }

    return 0;
}