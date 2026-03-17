#include <stdio.h>

int main() {
    int hora, minuto, dia, mes, ano;

    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);

    // Imprime no formato hh:mm dd/mm/aa
    printf("%02d:%02d %02d/%02d %02d\n", hora, minuto, dia, mes, ano % 100);

    return 0;
}