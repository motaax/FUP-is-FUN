#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];

    for(int i=0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[ ");

    for(int i=0; i < N; i++) {
        printf("%d", vetor[i]);

        if(i < N - 1) {
            printf(" ");
        }
    }

    printf(" ]");

    return 0;
}