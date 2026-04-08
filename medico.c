#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int fila[50];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &fila[i]);
    }

    int desprotegidos = 0;

    for(int i = 0; i < n; i++) {
        if(fila[i] == 0) { 
            int esquerda = (i > 0) ? fila[i-1] : 0;
            int direita = (i < n-1) ? fila[i+1] : 0;

            if(esquerda != 1 && direita != 1) {
                desprotegidos++;
            }
        }
    }

    printf("%d\n", desprotegidos);

    return 0;
}