#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];

    for(int i=0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i < N; i++) {
        printf("%d \n", vetor[i]);
    }

    return 0;
}