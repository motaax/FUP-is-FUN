#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int pecas = (N + 1) * (N + 2) / 2;  
    printf("%d\n", pecas);              

    return 0;
}