#include <stdio.h>

typedef struct {
    int x, y;
} Ponto;

typedef struct {
    Ponto supEsq;
    Ponto infDir;
} Retangulo;

int dentro(Retangulo ret, Ponto p) {

    if (p.x >= ret.supEsq.x &&
        p.x <= ret.infDir.x &&
        p.y <= ret.supEsq.y &&
        p.y >= ret.infDir.y) {

        return 1;
    }

    return 0;
}

int main() {

    Retangulo r;
    Ponto p;

    scanf("%d %d %d %d",
          &r.supEsq.x,
          &r.supEsq.y,
          &r.infDir.x,
          &r.infDir.y);

    scanf("%d %d", &p.x, &p.y);

    printf("%d\n", dentro(r, p));

    return 0;
}