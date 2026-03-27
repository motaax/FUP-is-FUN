#include <stdio.h>

int main() {
    int H, P, F, D;
    scanf("%d %d %d %d", &H, &P, &F, &D);

    int pos = F;

    while (1) {
        // Move o fugitivo uma posição na direção D
        pos = (pos + D + 16) % 16;

        if (pos == P) {
            // Encontrou o policial primeiro
            printf("N\n");
            return 0;
        }
        if (pos == H) {
            // Chegou no helicóptero
            printf("S\n");
            return 0;
        }
    }

    return 0;
}