#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num = N;

    // Fator 2 separadamente
    int count = 0;
    while (num % 2 == 0) {
        count++;
        num /= 2;
    }
    if (count > 0)
        printf("2 %d\n", count);

    // Fatores ímpares a partir de 3
    for (int i = 3; i * i <= num; i += 2) {
        count = 0;
        while (num % i == 0) {
            count++;
            num /= i;
        }
        if (count > 0)
            printf("%d %d\n", i, count);
    }

    // Se sobrar um primo maior que sqrt(N)
    if (num > 1)
        printf("%d 1\n", num);

    return 0;
}