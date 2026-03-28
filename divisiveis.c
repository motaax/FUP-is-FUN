#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a % 3 == 0 && b % 3 == 0) {
        printf("Sim \n");
    } else if(a % 5 == 0 && b % 5 == 0) {
        printf("Sim \n");
    } else {
        printf("Nao \n");
    }

    return 0;
}