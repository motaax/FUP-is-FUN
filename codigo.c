#include <stdio.h>

int main() {
    int N;
    int seq[1000];
    int i, contador = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &seq[i]);
    }

    for(i = 0; i < N - 2; i++) {
        if(seq[i] == 1 && seq[i+1] == 0 && seq[i+2] == 0) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}