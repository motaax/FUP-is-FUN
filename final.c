#include <stdio.h>

int main() {
    int nota1, nota2, nota_final;
    float media, media_final;

    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota_final);

    media = (nota1 + nota2) / 2.0;

    if (media >= 7) {
        printf("aprovado\n");
    } 
    else if (media < 4) {
        printf("reprovado\n");
    } 
    else {
        media_final = (media + nota_final) / 2.0;

        if (media_final >= 5) {
            printf("aprovado na final\n");
        } else {
            printf("reprovado na final\n");
        }
    }

    return 0;
}