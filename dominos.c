#include <stdio.h>

int main() {
    int n, i;
    int domino[50];
    int ordenado = 1; 
    
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &domino[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(domino[i] > domino[i + 1]) {
            ordenado = 0;
            break;
        }
    }

    if(ordenado) {
        printf("ok\n");
    } else {
        printf("precisa de ajuste\n");
    }

    return 0;
}