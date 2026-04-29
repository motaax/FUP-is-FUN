#include <stdio.h>

int main() {
    char num[25];
    scanf("%s", num);

    int soma_par = 0, soma_impar = 0;

    for (int i = 0; num[i] != '\0'; i++) {
        int dig = num[i] - '0';

        if (i % 2 == 0)
            soma_par += dig;
        else
            soma_impar += dig;
    }

    int diff = soma_par - soma_impar;
    if (diff < 0) diff = -diff;

    if (diff % 11 == 0)
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}