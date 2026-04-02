#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n >= 1) {
        printf("Positivo \n");
    } else if(n < 0) {
        printf("Negativo \n");
    } else {
        printf("Nulo \n");
    }

    return 0;
}