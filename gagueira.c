#include <stdio.h>

int main() {
    char frase[101];
    char palavra[101];
    
    fgets(frase, 101, stdin);

    int i = 0, j = 0;
    int primeira = 1;

    while (1) {
        if (frase[i] != ' ' && frase[i] != '\0' && frase[i] != '\n') {
            palavra[j] = frase[i];
            j++;
        } else {
            palavra[j] = '\0';

            if (j > 0) {
                if (!primeira) {
                    printf(" ");
                }

                printf("%s %s", palavra, palavra);
                primeira = 0;

                j = 0;
            }
        }

        if (frase[i] == '\0') {
            break;
        }

        i++;
    }

    printf("\n");

    return 0;
}