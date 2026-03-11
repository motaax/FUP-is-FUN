#include <stdio.h> 

int main() {

    int dividendo = 10;
    int divisor = 5;
    
    printf("%d \n", dividendo);
    printf("%d \n", divisor);

    int quociente = dividendo / divisor;
    printf("O quociente e: %d \n", quociente);

    int resto = dividendo % divisor;
    printf("O resto e: %d \n", resto);

    return 0;
}