#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ultron[15];
    char linha[600];

    scanf("%s", ultron);

    getchar();

    fgets(linha, sizeof(linha), stdin);

    int mapa[256] = {0};

    for (int i = 0; ultron[i]; i++) {
        mapa[tolower(ultron[i])] = 1;
    }

    char *token = strtok(linha, " \n");

    int first = 1;

    while (token != NULL) {
        int tam = strlen(token);
        int count = 0;

        for (int i = 0; i < tam; i++) {
            if (mapa[tolower(token[i])]) {
                count++;
            }
        }

        double p = (double)count / tam;

        if (!first) printf(" ");
        first = 0;

        if (p == 1.0) {
            printf("chefe");
        } else if (p > 0.5) {
            printf("ultron");
        } else {
            printf("pessoa");
        }

        token = strtok(NULL, " \n");
    }

    printf("\n");

    return 0;
}