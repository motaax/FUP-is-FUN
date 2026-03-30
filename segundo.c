#include <stdio.h>

int main() {
    int h, m, s;

    scanf("%d %d %d", &h, &m, &s);

    // Tempo gasto
    int add_h = 1;
    int add_m = 30;
    int add_s = 15;

    // Soma segundos
    s += add_s;
    if (s >= 60) {
        m += s / 60;
        s %= 60;
    }

    // Soma minutos
    m += add_m;
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }

    // Soma horas
    h += add_h;
    if (h >= 24) {
        h %= 24;
    }

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}