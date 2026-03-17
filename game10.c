#include <stdio.h>

int main() {
    int N, D, A;
    
    scanf("%d", &N);
    scanf("%d", &D);
    scanf("%d", &A);
    
    int movimentos = (D - A + N) % N;
    
    printf("%d\n", movimentos);
    
    return 0;
}