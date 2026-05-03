#include <stdio.h>

int main() {
    char frase[101];
    char palavras[50][101];
    int numPalavras = 0;

    int i = 0, j = 0;

    fgets(frase, 101, stdin);

    while (frase[i] != '\0' && frase[i] != '\n') {
        if (frase[i] != ' ') {
            palavras[numPalavras][j++] = frase[i];
        } else {
            if (j > 0) {
                palavras[numPalavras][j] = '\0';
                numPalavras++;
                j = 0;
            }
        }
        i++;
    }

    if (j > 0) {
        palavras[numPalavras][j] = '\0';
        numPalavras++;
    }

    int comum[26];
    int primeira = 1;

    for (int p = 0; p < numPalavras; p++) {
        int atual[26] = {0};

        for (int k = 0; palavras[p][k] != '\0'; k++) {
            char c = palavras[p][k];

            if (c >= 'A' && c <= 'Z') c += 32; 
            if (c >= 'a' && c <= 'z') {
                atual[c - 'a'] = 1;
            }
        }

        if (primeira) {
            for (int k = 0; k < 26; k++)
                comum[k] = atual[k];
            primeira = 0;
        } else {
            for (int k = 0; k < 26; k++)
                comum[k] = comum[k] & atual[k];
        }
    }

    int count = 0;
    for (int k = 0; k < 26; k++) {
        if (comum[k]) count++;
    }

    printf("%d\n", count);

    return 0;
}