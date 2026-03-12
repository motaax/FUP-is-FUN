#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    printf("O numero foi arredondado para: %.3f \n", num, ceil(num));//Arredonda sempre pra cima
    printf("O numero foi arredondado para: %.3f \n", num, floor(num));//Arredonda sempre pra baixo
    printf("O numero foi arredondado para: %.3f \n", num, round(num));//Arredonda pra baixo se < 0.5 e pra cima se >= 0.5

    return 0;
}