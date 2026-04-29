#include <stdio.h>

int main() {
    int n, v[20];
    int i, j, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] > max) {
            max = v[i];
        }
    }

    for (i = max; i > 0; i--) {
        for (j = 0; j < n; j++) {
            if (v[j] >= i)
                printf("#");
            else
                printf("_");
        }
        printf("\n");
    }

    return 0;
}