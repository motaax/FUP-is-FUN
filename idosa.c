#include <stdio.h>

#define MAX 100

typedef struct {
    char nome[21];
    int idade;
    char sexo;
} Pessoa;

int main() {
    int n;
    scanf("%d", &n);

    Pessoa p[MAX];

    for(int i = 0; i < n; i++) {
        scanf("%s %d %c", p[i].nome, &p[i].idade, &p[i].sexo);
    }

    int encontrou = 0;
    int maiorIdade = -1;
    char nomeMaisVelha[21];

    for(int i = 0; i < n; i++) {
        if(p[i].sexo == 'f') {
            if(!encontrou || p[i].idade > maiorIdade) {
                maiorIdade = p[i].idade;

                int j = 0;
                while(p[i].nome[j] != '\0') {
                    nomeMaisVelha[j] = p[i].nome[j];
                    j++;
                }

                nomeMaisVelha[j] = '\0';
                encontrou = 1;
            }
        }
    }

    if (encontrou) {
        printf("%s\n", nomeMaisVelha);
    } else {
        printf("nao ha mulher\n");
    }

    return 0;
}