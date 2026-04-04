#include <stdio.h>

int main() {
    int chico, cebolinha, N;

    scanf("%d", &chico);
    scanf("%d", &cebolinha);

    scanf("%d", &N);

    char animais[N];
    int total_patas = 0;

    for (int i = 0; i < N; i++) {
        scanf(" %c", &animais[i]); 

        if (animais[i] == 'v' || animais[i] == 'c') {
            total_patas += 4;
        } else if (animais[i] == 'g') {
            total_patas += 2;
        }
    }

    // Calcula diferença dos chutes
    int diff_chico = total_patas - chico;
    if (diff_chico < 0) diff_chico = -diff_chico;

    int diff_cebolinha = total_patas - cebolinha;
    if (diff_cebolinha < 0) diff_cebolinha = -diff_cebolinha;

    printf("%d\n", total_patas);

    if (diff_chico < diff_cebolinha) {
        printf("Chico Bento\n");
    } else if (diff_cebolinha < diff_chico) {
        printf("Cebolinha\n");
    } else {
        printf("empate\n");
    }

    return 0;
}