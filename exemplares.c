#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int vetor[50];
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(vetor[j] > vetor[j+1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }

    printf("[");
    for(int i = 0; i < n; i++) {
        if(i == 0 || vetor[i] != vetor[i-1]) {
            printf("%d", vetor[i]);
            if(i < n-1) {
                int j = i + 1;
                while(j < n && vetor[j] == vetor[i]) j++;
                if(j < n) printf(" ");
            }
        }
    }
    printf("]\n");

    return 0;
}