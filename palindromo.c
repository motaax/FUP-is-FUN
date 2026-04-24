#include <stdio.h>

int ehPalindromo(int num) {
    int original = num, invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    return original == invertido;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int inicio = 1;
    for (int i = 1; i < N; i++) {
        inicio *= 10;
    }
    int fim = inicio * 10 - 1;

    int palindromos[100000];
    int count = 0;

    for (int i = inicio; i <= fim; i++) {
        for (int j = i; j <= fim; j++) {
            int prod = i * j;

            if (ehPalindromo(prod)) {
                palindromos[count++] = prod;
            }
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (palindromos[j] < palindromos[j + 1]) {
                int temp = palindromos[j];
                palindromos[j] = palindromos[j + 1];
                palindromos[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < M && i < count; i++) {
        printf("%d\n", palindromos[i]);
    }

    return 0;
}