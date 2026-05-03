#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contains(char c, char guesses[]) {
    int i;
    char lc = tolower(c);

    for (i = 0; guesses[i] != '\0'; i++) {
        if (tolower(guesses[i]) == lc) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char frase[101];
    char chutes[27];
    char marcadorLinha[10];
    char marcador;

    int i;

    fgets(frase, 101, stdin);
    fgets(chutes, 27, stdin);
    fgets(marcadorLinha, 10, stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == '\n') {
            frase[i] = '\0';
            break;
        }
    }

    for (i = 0; chutes[i] != '\0'; i++) {
        if (chutes[i] == '\n') {
            chutes[i] = '\0';
            break;
        }
    }

    marcador = marcadorLinha[0];

    for (i = 0; marcadorLinha[i] != '\0'; i++) {
        if (marcadorLinha[i] == '\n') {
            marcadorLinha[i] = '\0';
            break;
        }
    }

    for (i = 0; frase[i] != '\0'; i++) {
        char c = frase[i];

        if (isalpha(c)) {
            if (contains(c, chutes)) {
                printf("%c", c);
            } else {
                printf("%c", marcador);
            }
        } else {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}