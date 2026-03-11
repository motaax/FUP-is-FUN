#include <stdio.h>

int main() {
    char jog1, jog2;

    // Recebe as jogadas dos dois jogadores
    printf("Digite a jogada do Jogador 1 (R, P, S): \n");
    scanf(" %c", &jog1);

    printf("Digite a jogada do Jogador 2 (R, P, S): ");
    scanf(" %c", &jog2);

    // Verifica empate
    if (jog1 == jog2) {
        printf("Empate!\n");
    }
    // Jogador 1 vence
    else if ((jog1 == 'R' && jog2 == 'S') ||
             (jog1 == 'S' && jog2 == 'P') ||
             (jog1 == 'P' && jog2 == 'R')) {
        printf("Jogador 1 venceu!\n");
    }
    // Jogador 2 vence
    else if ((jog2 == 'R' && jog1 == 'S') ||
             (jog2 == 'S' && jog1 == 'P') ||
             (jog2 == 'P' && jog1 == 'R')) {
        printf("Jogador 2 venceu!\n");
    }
    // Entrada inválida
    else {
        printf("Jogada inválida! Use apenas R, P ou S.\n");
    }

    return 0;
}