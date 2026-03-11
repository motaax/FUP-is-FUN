#include <stdio.h>

int main() {
    int tempo = 10000;
    int hora = tempo / 3600;
    int minuto = (tempo % 3600) / 60;
    int segundo = tempo % 60;

    printf("%d \n", hora);
    printf("%d \n", minuto);
    printf("%d \n", segundo);

    printf("%d:%d:%d", hora, minuto, segundo);

    return 0;
}