#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int carta;
    int soma = 0;
    int ases = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &carta);

        if (carta == 1) { 
            soma += 11;
            ases++;
        } else if (carta >= 11 && carta <= 13) { 
            soma += 10;
        } else {
            soma += carta;
        }
    }

    while (soma > 21 && ases > 0) {
        soma -= 10; 
        ases--;
    }

    printf("%d\n", soma);

    return 0;
}