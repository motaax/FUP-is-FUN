#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 0;

    for (int i = 0; i < n; i++) {
        int digito;
        scanf("%d", &digito);
        num = num * 10 + digito;
    }

    printf("%d\n", num);

    return 0;
}