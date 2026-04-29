#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float v[n];

    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                float temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    float mediana;

    if (n % 2 == 1) {
        mediana = v[n / 2];
    } else {
        mediana = (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }

    printf("%.1f\n", mediana);

    return 0;
}