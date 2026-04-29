#include <stdio.h>

int main() {
    char texto[201], palavra[51], nova[51];
    int i = 0, j;

    scanf(" %[^\n]", texto);
    scanf(" %[^\n]", palavra);
    scanf(" %[^\n]", nova);

    int lenT = 0, lenP = 0, lenN = 0;

    while (texto[lenT] != '\0') lenT++;
    while (palavra[lenP] != '\0') lenP++;
    while (nova[lenN] != '\0') lenN++;

    while (i < lenT) {
        int match = 1;

        for (j = 0; j < lenP; j++) {
            if (i + j >= lenT || texto[i + j] != palavra[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            for (j = 0; j < lenN; j++) {
                printf("%c", nova[j]);
            }
            i += lenP;
        } else {
            printf("%c", texto[i]);
            i++;
        }
    }

    printf("\n");

    return 0;
}