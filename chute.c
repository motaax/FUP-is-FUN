#include <stdio.h>

int main() {
    float chute, real;
    char escolha;

    scanf("%f", &chute);
    scanf(" %c", &escolha);
    scanf("%f", &real);

    if (real == chute) {
        printf("primeiro\n");
    } else if (real < chute && escolha == 'm') {
        printf("segundo\n");
    } else if (real > chute && escolha == 'M') {
        printf("segundo\n");
    } else {
        printf("primeiro\n");
    }

    return 0;
}