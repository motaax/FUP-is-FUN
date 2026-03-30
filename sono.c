#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    // converter tudo para segundos
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;

    // se o horário de acordar for menor, soma 24h
    if (t2 < t1) {
        t2 += 24 * 3600;
    }

    // diferença em segundos
    int diff = t2 - t1;

    // converter de volta
    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    printf("%d %d %d\n", h, m, s);

    return 0;
}