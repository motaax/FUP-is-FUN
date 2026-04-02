#include <stdio.h>

int main() {
    float p1, p2, p3, t;
    float menor, media;

    scanf("%f", &p1);
    scanf("%f", &p2);
    scanf("%f", &p3);
    scanf("%f", &t);

    menor = p1;
    if (p2 < menor) menor = p2;
    if (p3 < menor) menor = p3;

    media = (p1 + p2 + p3 - menor + t) / 3.0;

    if (media >= 7.0) {
        printf("Aprovado com nota %.1f\n", media);
    } else {
        printf("Final com nota %.1f\n", media);
    }

    return 0;
}