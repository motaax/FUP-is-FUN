#include <stdio.h>

int main() {
    int p1, p2;

    printf("Digite 0(PAR) ou 1(IMPAR): \n");
    scanf("%d", &p1);
    
    printf("Digite 0(PAR) ou 1(IMPAR): \n");
    scanf("%d", &p2);

    if (p1 == 0) {
        printf("Alice ganhou");
    } else if(p2 == 1) {
        printf("Bob ganhou");
    } else {
        printf("Ninguem ganhou");
    }

    return 0;
}