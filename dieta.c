#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int calorias[N];
    int soma = 0;

    for(int i=0; i < N; i++) {
        scanf("%d", &calorias[i]);
        soma += calorias[i];
    }

    float media = (float) soma / N;
    printf("%.1f \n", media);

    return 0;
}