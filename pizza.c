#include <stdio.h>

typedef struct {
    char nome[21];
    int pontos;
} Restaurante;

int main() {
    int n;
    scanf("%d", &n);

    Restaurante atual;
    Restaurante melhor;

    scanf("%s %d", melhor.nome, &melhor.pontos);

    for(int i = 1; i < n; i++) {
        scanf("%s %d", atual.nome, &atual.pontos);

        if(atual.pontos > melhor.pontos) {
            melhor = atual;   
        } 
    }

    printf("%s\n", melhor.nome);

    return 0;
}