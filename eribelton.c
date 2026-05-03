#include <stdio.h>

int main() {
    char s[55], melhor[60], temp[60];
    int i = 0;
    scanf("%s", s);

    int valor_original = 0;
    while (s[i] != '\0') {
        char c = s[i];

        if (c >= 'A' && c <= 'Z')
            valor_original += (c - 'A' + 1);
        else
            valor_original += (c - 'a' + 1);

        i++;
    }

    int melhor_valor = valor_original;

    i = 0;
    while (s[i] != '\0') {
        melhor[i] = s[i];
        i++;
    }
    melhor[i] = '\0';

    int tamanho = i;

    for (int letra = 'a'; letra <= 'z'; letra++) {

        for (int pos = 0; pos <= tamanho; pos++) {

            int k = 0;

            for (int j = 0; j < pos; j++)
                temp[k++] = s[j];

            temp[k++] = letra;

            for (int j = pos; j < tamanho; j++)
                temp[k++] = s[j];

            temp[k] = '\0';

            int valor = 0;
            for (int j = 0; j < k; j++) {
                char c = temp[j];

                if (c >= 'A' && c <= 'Z')
                    valor += (c - 'A' + 1);
                else
                    valor += (c - 'a' + 1);
            }

            if (valor < melhor_valor) {
                melhor_valor = valor;

                int t = 0;
                while (temp[t] != '\0') {
                    melhor[t] = temp[t];
                    t++;
                }
                melhor[t] = '\0';
            }
        }
    }

    printf("%d\n", valor_original);
    printf("%s\n", melhor);
    printf("%d\n", melhor_valor);

    return 0;
}