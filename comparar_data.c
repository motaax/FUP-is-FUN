#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef enum { LT, EQ, GT } compare;

compare compararDatas(Data dt1, Data dt2) {

    if (dt1.ano < dt2.ano)
        return LT;
    else if (dt1.ano > dt2.ano)
        return GT;

    if (dt1.mes < dt2.mes)
        return LT;
    else if (dt1.mes > dt2.mes)
        return GT;

    if (dt1.dia < dt2.dia)
        return LT;
    else if (dt1.dia > dt2.dia)
        return GT;

    return EQ;
}

int main() {

    Data d1, d2;

    scanf("%d", &d1.dia);
    scanf("%d", &d1.mes);
    scanf("%d", &d1.ano);

    scanf("%d", &d2.dia);
    scanf("%d", &d2.mes);
    scanf("%d", &d2.ano);

    compare res = compararDatas(d1, d2);

    if (res == LT)
        printf("Mais antiga\n");
    else if (res == GT)
        printf("Mais recente\n");
    else
        printf("Iguais\n");

    return 0;
}