#include <stdio.h>

int main() {
    char linha[1000];
    fgets(linha, 1000, stdin);

    int i = 0;

    while (linha[i] != '\0') {

        if (linha[i] == ' ' || linha[i] == '\n') {
            printf("%c", linha[i]);
            i++;
            continue;
        }

        int inicio = i;
        int corte = -1;

        while (linha[i] != ' ' && linha[i] != '\n' && linha[i] != '\0') {

            char atual = linha[i];
            char prox = linha[i+1];

            int vogal =
                (atual=='a'||atual=='e'||atual=='i'||atual=='o'||atual=='u'||
                 atual=='A'||atual=='E'||atual=='I'||atual=='O'||atual=='U');

            int prox_vogal =
                (prox=='a'||prox=='e'||prox=='i'||prox=='o'||prox=='u'||
                 prox=='A'||prox=='E'||prox=='I'||prox=='O'||prox=='U');

            if (vogal && !prox_vogal && corte == -1 && prox != '\0' && prox != ' ' && prox != '\n') {
                corte = i + 1;
            }

            i++;
        }

        if (corte != -1) {
            for (int k = inicio; k < corte; k++) printf("%c", linha[k]);
            for (int k = inicio; k < corte; k++) printf("%c", linha[k]);
            for (int k = inicio; k < corte; k++) printf("%c", linha[k]);

            for (int k = inicio; k < i; k++) printf("%c", linha[k]);
        } else {
            for (int k = inicio; k < i; k++) printf("%c", linha[k]);
        }
    }

    return 0;
}