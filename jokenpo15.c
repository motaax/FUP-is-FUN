#include <stdio.h>

int main() {
    int A, B;
    
    scanf("%d", &A);
    scanf("%d", &B);

    if (A == B) {
        printf("Empate\n");
    } else {
        int diff = (A - B + 15) % 15;

        if (diff >= 1 && diff <= 7) {
            printf("Jogador 1\n");
        } else {
            printf("Jogador 2\n");
        }
    }

    return 0;
}