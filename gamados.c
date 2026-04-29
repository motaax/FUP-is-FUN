#include <stdio.h>
#include <string.h>

int main() {
    char frase[101];
    char palavra[101], anterior[101];
    int i = 0, j = 0, ordenado = 1;

    scanf(" %[^\n]", frase);

    anterior[0] = '\0';

    while (1) {
        j = 0;
        while (frase[i] != ' ' && frase[i] != '\0') {
            palavra[j++] = frase[i++];
        }
        palavra[j] = '\0';

        if (anterior[0] != '\0') {
            if (strcmp(anterior, palavra) > 0) {
                ordenado = 0;
                break;
            }
        }

        strcpy(anterior, palavra);

        if (frase[i] == '\0') break;
        i++;
    }

    if (ordenado)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}