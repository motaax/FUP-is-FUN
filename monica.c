#include <stdio.h>

int main() {
    int M, A, B, C, mais_velho;

    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);

    C = M - (A + B);

    mais_velho = (A > B) ? (A > C ? A : C) : (B > C ? B : C);

    printf("%d \n", mais_velho);

    return 0;
}