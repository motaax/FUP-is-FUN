#include <stdio.h>

typedef struct {
    int vida;
    int ataque;
} Personagem;

void duelo(Personagem p1, Personagem p2) {
    while (p1.vida > 0 && p2.vida > 0) {
        p1.vida -= p2.ataque;
        p2.vida -= p1.ataque;
    }

    if (p1.vida <= 0 && p2.vida <= 0)
        printf("Empate\n");
    else if (p2.vida <= 0)
        printf("Personagem 1\n");
    else
        printf("Personagem 2\n");
}

int main() {
    Personagem p1, p2;

    scanf("%d", &p1.vida);
    scanf("%d", &p1.ataque);

    scanf("%d", &p2.vida);
    scanf("%d", &p2.ataque);

    duelo(p1, p2);

    return 0;
}