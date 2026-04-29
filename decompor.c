#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[8];
    int i = 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        v[i] = n % 10;
        n = n / 10;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", v[j]);
        if (j > 0) printf(" ");
    }

    printf("\n");

    return 0;
}