#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("[");

    for(int i = a, j = b; i <= j; i++, j--) {
        printf("%d %d", i, j);
        if (i < j) {
            printf(", ");
        }
    }

    printf("]");

    return 0;
}