#include <stdio.h>

int main() {
    int dia, hora;

    scanf("%d", &dia);
    scanf("%d", &hora);

    if (dia >= 2 && dia <= 6) { // Segunda a sexta
        if ((hora >= 8 && hora <= 11) || (hora >= 14 && hora <= 17)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } 
    else if (dia == 7) { // Sábado
        if (hora >= 8 && hora <= 11) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } 
    else { // Domingo
        printf("NAO\n");
    }

    return 0;
}