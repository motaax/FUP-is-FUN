#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[50];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int max_count = 1, count = 1;

    for (int i = 1; i < N; i++) {
        if (vetor[i] == vetor[i - 1]) {
            count++;
            if (count > max_count) max_count = count;
        } else {
            count = 1;
        }
    }

    count = 1;
    for (int i = 1; i <= N; i++) {
        if (i < N && vetor[i] == vetor[i - 1]) {
            count++;
        } else {
            if (count == max_count) {
                printf("%d ", vetor[i - 1]);
            }
            count = 1;
        }
    }

    return 0;
}