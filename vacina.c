#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int vacinas[n], pacientes[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vacinas[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &pacientes[i]);
    }

    qsort(vacinas, n, sizeof(int), cmp);
    qsort(pacientes, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++) {
        if (vacinas[i] < pacientes[i]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}