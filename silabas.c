#include <stdio.h>

int vogal(char c) {
    if(c >= 'A' && c <= 'Z') {
        printf("%c", c += 32);
    }

    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int letra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main() {
    char texto[101];
    fgets(texto, 101, stdin);

    for(int i = 0; texto[i] != '\0' && texto[i] != '\n'; i++) {
        char atual = texto[i];
        char proximo = texto[i + 1];

        printf("%c", atual);

        if(vogal(atual) && letra(proximo) && !vogal(proximo)) {
            printf("-");
        }
    }

    printf("\n");

    return 0;
}