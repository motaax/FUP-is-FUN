#include <stdio.h>

int main() {
    int N;
    char pe;

    scanf("%d", &N);
    scanf(" %c", &pe);

    char atual = pe;

    for (int i = 1; i <= 10; i++) {
        if (i == N) continue;

        if (i == 10) {
            printf("[ceu]\n");
            break;
        }

        printf("[%d, %c]\n", i, atual);

        // alterna o pé
        if (atual == 'd')
            atual = 'e';
        else
            atual = 'd';
    }

    return 0;
}