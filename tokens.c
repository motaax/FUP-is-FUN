#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char frase[101];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '#' || str[i] == ';') {
            if (j > 0) {
                frase[j] = '\0';
                printf("%s\n", frase);
                j = 0;
            }
        } else {
            frase[j++] = str[i];
        }
    }

    if (j > 0) {
        frase[j] = '\0';
        printf("%s\n", frase);
    }

    return 0;
}