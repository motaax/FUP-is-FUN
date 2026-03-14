#include <stdio.h>

int main() {
    int c;
    int bananas, goiabas, mangas;
    int totalFrutas, minutos;

    scanf("%d", &c);
    scanf("%d", &bananas);
    scanf("%d", &goiabas);
    scanf("%d", &mangas);

    totalFrutas = bananas + goiabas + mangas;

    if (totalFrutas % c == 0) {
        minutos = totalFrutas / c;
    } else {
        minutos = (totalFrutas / c) + 1;
    }

    printf("%d\n", minutos);

    return 0;
}