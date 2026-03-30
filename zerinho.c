#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a != b && a != c) {
        printf("jog1\n");
    } else if (b != a && b != c) {
        printf("jog2\n");
    } else if (c != a && c != b) {
        printf("jog3\n");
    } else {
        printf("empate\n");
    }

    return 0;
}