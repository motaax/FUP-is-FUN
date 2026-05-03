#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int X;
    scanf("%d", &X);

    while (X--) {
        char ultron[30], pessoa[100];
        scanf("%s %s", ultron, pessoa);

        int count = 0;
        int tamPessoa = strlen(pessoa);

        for (int i = 0; i < tamPessoa; i++) {
            char c = tolower(pessoa[i]);

            for (int j = 0; j < strlen(ultron); j++) {
                if (c == tolower(ultron[j])) {
                    count++;
                    break;
                }
            }
        }

        double porcentagem = (double)count / tamPessoa;

        if (porcentagem == 1.0) {
            printf("chefe\n");
        } else if (porcentagem > 0.5) {
            printf("ultron\n");
        } else {
            printf("pessoa\n");
        }
    }

    return 0;
}