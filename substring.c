#include <stdio.h>
#include <string.h>

void substring(char str[], int inicio, int quantidade, char resultado[]) {
    int tamanho = strlen(str);

    if(inicio < 0 || inicio >= tamanho || quantidade <= 0) {
        resultado[0] = '\0';
        return;
    }

    int i;
    for(i = 0; i < quantidade && (inicio + i) < tamanho; i++) {
        resultado[i] = str[inicio + i];
    }

    resultado[i] = '\0'; 
}

int main() {
    char str[101];
    char resultado[101];
    int inicio, quantidade;

    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    scanf("%d", &inicio);
    scanf("%d", &quantidade);

    substring(str, inicio, quantidade, resultado);

    printf("%s\n", resultado);

    return 0;
}