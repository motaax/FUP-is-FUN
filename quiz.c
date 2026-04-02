#include <stdio.h>

int main() {
    char r1, r2, r3, r4;
    int acertos = 0;

    scanf(" %c", &r1);
    scanf(" %c", &r2);
    scanf(" %c", &r3);
    scanf(" %c", &r4);

    if (r1 == 'd') acertos++;
    if (r2 == 'a') acertos++;
    if (r3 == 'c') acertos++;
    if (r4 == 'd') acertos++;

    switch(acertos) {
        case 0:
            printf("Nunca assistiu\n");
            break;
        case 1:
            printf("Ja ouviu falar\n");
            break;
        case 2:
            printf("Interessado no assunto\n");
            break;
        case 3:
            printf("Fa\n");
            break;
        case 4:
            printf("Super Fa\n");
            break;
    }

    return 0;
}