#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[100], B[100];

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }

    int vencedor = -1;
    int maiorDist = 0;

    for(int i = 0; i < n; i++) {
        if(A[i] < 10 || B[i] < 10) {
            continue;
        }

        int max_pedra = (A[i] > B[i]) ? A[i] : B[i];

        if(max_pedra > maiorDist) {
            maiorDist = max_pedra;
            vencedor = i;
        }
    }

    if(vencedor == -1) {
        printf("sem ganhador\n");
    } else {
        printf("%d\n", vencedor);
    }
    
    return 0;
}