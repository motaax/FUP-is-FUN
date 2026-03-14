#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    if(salario <= 1000) {
       float aumento = salario * 1.20;
       printf("Salario novo: %.2f", aumento);
    } else if (salario <= 1500) {
        float aumento = salario * 1.15;
        printf("Salario novo: %.2f", aumento);
    } else if (salario <= 2000) {
        float aumento = salario * 1.10;
        printf("Salario novo: %.2f", aumento);
    } else {
        if(salario > 2000) {
            float aumento = salario * 1.05;
            printf("Salario novo: %.2f", aumento);
        }
    }

    return 0;
}