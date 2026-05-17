#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

float distancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

Ponto proximo(Ponto vetor[], int n, Ponto p) {

    Ponto maisProximo = vetor[0];
    float menorDist = distancia(vetor[0], p);

    for (int i = 1; i < n; i++) {

        float dist = distancia(vetor[i], p);

        if (dist < menorDist) {
            menorDist = dist;
            maisProximo = vetor[i];
        }
    }

    return maisProximo;
}

int main() {

    Ponto p;
    int n;

    scanf("%f %f", &p.x, &p.y);

    scanf("%d", &n);

    Ponto vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%f %f", &vet[i].x, &vet[i].y);
    }

    Ponto q = proximo(vet, n, p);

    printf("%.2f %.2f\n", q.x, q.y);

    return 0;
}