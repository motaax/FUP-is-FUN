#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            count++;
            max = arr[i];
        }
    }

    printf("%d\n", count);

    return 0;
}