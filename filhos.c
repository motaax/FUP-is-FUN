#include <stdio.h>

int main() {
    int maisNovo, quantidade;
    scanf("%d", &maisNovo);
    scanf("%d", &quantidade);

    for(int i=0; i < quantidade; i++) {
        printf("%d \n", maisNovo + i);
    }

    return 0;
}