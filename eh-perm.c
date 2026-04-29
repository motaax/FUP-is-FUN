#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int contA[10] = {0};
    int contB[10] = {0};

    if (A == 0) contA[0]++;
    while (A > 0) {
        contA[A % 10]++;
        A /= 10;
    }

    if (B == 0) contB[0]++;
    while (B > 0) {
        contB[B % 10]++;
        B /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (contA[i] != contB[i]) {
            printf("False\n");
            return 0;
        }
    }

    printf("True\n");

    return 0;
}