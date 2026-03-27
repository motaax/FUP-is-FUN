#include <stdio.h>

int main() {
    int c, m;
    scanf("%d %d", &c, &m);

    if(m == 0) {
        printf("Vazio \n");
    } else if(m < c) {
        printf("Ainda cabe \n");
    } else if(m == c) {
        printf("Lotado \n");
    } else if(m == c * 2) {
        printf("Hora de partir \n");
    } else {
        printf("Nao foi possivel informar o status do onibus \n");
    }

    return 0;
}