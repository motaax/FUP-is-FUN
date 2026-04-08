#include <stdio.h>

int main() {
    int n;
    int numeros[50];
    int alunos[50], servidores[50];
    int count_alunos = 0, count_servidores = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0) {
            servidores[count_servidores++] = numeros[i];
        } else {
            alunos[count_alunos++] = numeros[i];
        }
    }

    printf("[");
    for(int i = 0; i < count_alunos; i++) {
        printf("%d", alunos[i]);
        if(i < count_alunos - 1) printf(" ");
    }
    printf("]\n");

    printf("[");
    for(int i = 0; i < count_servidores; i++) {
        printf("%d", servidores[i]);
        if(i < count_servidores - 1) printf(" ");
    }
    printf("]\n");

    return 0;
}