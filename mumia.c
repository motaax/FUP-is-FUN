#include <stdio.h>

int main() {
    char nome[20];
    int idade;

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("%s e crianca! \n", nome);
    } else if (idade < 18) {
        printf("%s e jovem! \n", nome);
    } else if (idade < 65) {
        printf("%s e adulto! \n", nome);
    } else if (idade < 100) {
        printf("%s e idoso! \n", nome);
    } else {
        printf("%s e mumia! \n", nome);
    }
    
    return 0;
}