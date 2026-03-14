#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2f\n", x1);
        printf("%.2f\n", x2);
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("%.2f\n", x1);
    } 
    else {
        printf("nao ha raiz real\n");
    }

    return 0;
}