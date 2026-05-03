#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int valor;
    int melhor_id = -1;
    float melhor_media = -1.0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);

        int id = valor / 10000;

        int nota1 = (valor / 1000) % 10;
        int nota2 = (valor / 100) % 10;
        int nota3 = (valor / 10) % 10;
        int nota4 = valor % 10;

        float media = (nota1 + nota2 + nota3 + nota4) / 4.0;

        if (media > melhor_media || 
           (media == melhor_media && id > melhor_id)) {
            melhor_media = media;
            melhor_id = id;
        }
    }

    printf("%02d\n", melhor_id);

    return 0;
}