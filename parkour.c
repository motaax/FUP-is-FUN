#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int altura[50];
    for(int i = 0; i < n; i++) {
        scanf("%d", &altura[i]);
    }

    int movimentos = 0;

    for(int i = 1; i < n; i++) {
        if(altura[i] != altura[i-1]) {
            movimentos++;
        }
    }

    printf("%d\n", movimentos);

    return 0;
}