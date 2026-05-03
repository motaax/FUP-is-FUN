#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[100];
    float n1, n2, n3;
    float media;
} Aluno;

void calcularMedia(Aluno *a) {
    a->media = (a->n1 + a->n2 + a->n3) / 3.0;
}

int main() {
    int n;
    Aluno alunos[MAX];

    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        scanf("%f %f %f", &alunos[i].n1, &alunos[i].n2, &alunos[i].n3);
        getchar(); 

        calcularMedia(&alunos[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (alunos[i].media < alunos[j].media) {
                Aluno temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", alunos[i].nome);
        printf("%.2f\n", alunos[i].media);
        printf("%.1f, %.1f, %.1f\n\n", alunos[i].n1, alunos[i].n2, alunos[i].n3);
    }

    return 0;
}