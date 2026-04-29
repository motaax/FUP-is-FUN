#include <stdio.h>

int main() {
    int N, Q;
    scanf("%d %d", &N, &Q);

    int arr[N + 1];

    for (int i = 0; i <= N; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < Q; i++) {
        int A, B, L;
        scanf("%d %d %d", &A, &B, &L);

        arr[A] += L;
        if (B + 1 < N) {
            arr[B + 1] -= L;
        }
    }

    for (int i = 1; i < N; i++) {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}