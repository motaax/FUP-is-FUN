#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("nao\n");
        return 0;
    }

    int i = 0;

    while (i * i <= n) {
        if (i * i == n) {
            printf("sim\n");
            return 0;
        }
        i++;
    }

    printf("nao\n");

    return 0;
}