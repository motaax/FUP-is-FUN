#include <stdio.h>
#include <string.h>

int main() {
    char enigma[1000];
    int key;

    fgets(enigma, sizeof(enigma), stdin);

    enigma[strcspn(enigma, "\n")] = '\0';

    scanf("%d", &key);

    char key_str[20];
    sprintf(key_str, "%d", key);

    int lenE = strlen(enigma);
    int lenK = strlen(key_str);

    for (int i = 0; i < lenE; i++) {
        int digito = key_str[i % lenK] - '0'; 
        char resultado = enigma[i] ^ digito;  

        printf("%c", resultado);
    }

    printf("\n");

    return 0;
}