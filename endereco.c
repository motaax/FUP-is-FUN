#include <stdio.h>

void converte_tempo(int segundos, int *hor, int *min, int *seg) {
    *hor = segundos / 3600;
    segundos %= 3600;

    *min = segundos / 60;
    *seg = segundos % 60;
}

int main() {
    int tempo_em_seg, h, m, s;

    scanf("%d", &tempo_em_seg);

    converte_tempo(tempo_em_seg, &h, &m, &s);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}