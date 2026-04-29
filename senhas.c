#include <stdio.h>
#include <string.h>

int main() {
    int S, Q;
    scanf("%d %d", &S, &Q);

    char digitos[100];
    scanf("%s", digitos);

    int K = strlen(digitos);

    char senha[60];
    scanf("%s", senha);

    int atual[60];

    for (int i = 0; i < S; i++) {
        for (int j = 0; j < K; j++) {
            if (senha[i] == digitos[j]) {
                atual[i] = j;
                break;
            }
        }
    }

    for (int q = 0; q < Q; q++) {

        int pos = S - 1;
        while (pos >= 0) {
            atual[pos]++;
            if (atual[pos] < K) break;
            atual[pos] = 0;
            pos--;
        }

        for (int i = 0; i < S; i++) {
            printf("%c", digitos[atual[i]]);
        }
        printf("\n");
    }

    return 0;
}