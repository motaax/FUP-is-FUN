#include <stdio.h>
#include <string.h>

int main() {
    char texto[1000];
    char word1[1000];
    char word2[1000];

    fgets(texto, sizeof(texto), stdin);
    fgets(word1, sizeof(word1), stdin);
    fgets(word2, sizeof(word2), stdin);

    texto[strcspn(texto, "\n")] = '\0';
    word1[strcspn(word1, "\n")] = '\0';
    word2[strcspn(word2, "\n")] = '\0';

    int len = strlen(texto);
    int tam = strlen(word1);

    for (int i = 0; i < len; i++) {
        int trocou = 0;

        for (int j = 0; j < tam; j++) {
            if (texto[i] == word1[j]) {
                texto[i] = word2[j];
                trocou = 1;
                break;
            }
            else if (texto[i] == word2[j]) {
                texto[i] = word1[j];
                trocou = 1;
                break;
            }
        }
    }

    printf("%s\n", texto);

    return 0;
}