#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[101];
    
    fgets(frase, 101, stdin);

    char *token = strtok(frase, " \n");

    while (token != NULL) {
        int tem_letra = 0;
        int tem_ponto = 0;

        for (int i = 0; token[i] != '\0'; i++) {
            if (isalpha(token[i])) {
                tem_letra = 1;
                break;
            }
            if (token[i] == '.') {
                tem_ponto = 1;
            }
        }

        if (tem_letra) {
            printf("str");
        } else if (tem_ponto) {
            printf("float");
        } else {
            printf("int");
        }

        token = strtok(NULL, " \n");

        if (token != NULL) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}