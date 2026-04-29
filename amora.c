#include <stdio.h>

int main() {
    char texto[101], trecho[21];
    int i, j;
    int count = 0;

    fgets(texto, 101, stdin);
    fgets(trecho, 21, stdin);

    int lenT = 0, lenS = 0;

    while (texto[lenT] != '\0' && texto[lenT] != '\n') lenT++;
    while (trecho[lenS] != '\0' && trecho[lenS] != '\n') lenS++;

    for (i = 0; i <= lenT - lenS; i++) {
        int match = 1;

        for (j = 0; j < lenS; j++) {
            if (texto[i + j] != trecho[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}