#include <stdio.h>

int main() {
    int n;
    long long int a = 0, b = 1, temp;

    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("%lld\n", b);

    return 0;
}