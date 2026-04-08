#include <stdio.h>

int main() {
    int n;
    int vetor[50];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("[");

    for(int i = n - 1; i >= 0; i--) {
        printf("%d", vetor[i]);

        if(i > 0) {
            printf(" ");
        }
    }

    printf("]\n");

    return 0;
}