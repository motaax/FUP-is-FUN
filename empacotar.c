#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

float divi(int a, int b) {
    return (float) a / b;
}

int multi(int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d %.1f %d \n", soma(a, b), sub(a, b), divi(a, b), multi(a, b));

    return 0;
}