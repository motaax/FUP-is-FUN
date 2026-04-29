#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mmc(int n, int m) {
    return (n / mdc(n, m)) * m;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", mmc(n, m));

    return 0;
}