#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor, chute1, chute2;
    int dist1, dist2;

    scanf("%d", &valor);
    scanf("%d", &chute1);
    scanf("%d", &chute2);

    dist1 = abs(valor - chute1);
    dist2 = abs(valor - chute2);

    if (dist1 < dist2) {
        printf("primeiro\n");
    } else if (dist2 < dist1) {
        printf("segundo\n");
    } else {
        printf("empate\n");
    }

    return 0;
}