#include <stdio.h>

int main() {
    int j1, j2, j3, j4;
    int soma;

    scanf("%d", &j1);
    scanf("%d", &j2);
    scanf("%d", &j3);
    scanf("%d", &j4);

    soma = j1 + j2 + j3 + j4;

    if (soma == 0) {
        printf("nenhum\n");
    } else {
        int r = soma % 4;

        if (r == 1) printf("jog1\n");
        else if (r == 2) printf("jog2\n");
        else if (r == 3) printf("jog3\n");
        else printf("jog4\n");
    }

    return 0;
}