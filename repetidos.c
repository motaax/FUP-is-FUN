#include <stdio.h>

int main() {
    int X, N;
    scanf("%d %d", &X, &N);

    int robos[50];
    int contador = 0;
    
    for(int i=0; i < N; i++) {
        scanf("%d", &robos[i]);

        if(robos[i] == X) {
            contador++;
        }
    }

    printf("%d \n", contador);

    return 0;
}