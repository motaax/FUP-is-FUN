#include <stdio.h>

int main() {
    char c1, c2, op;

    scanf(" %c", &c1);
    scanf(" %c", &op);
    scanf(" %c", &c2);

    int v1 = c1 - 'a';
    int v2 = c2 - 'a';
    int res;

    if (op == '+') {
        res = (v1 + v2) % 26;
    } else { 
        res = (v1 - v2) % 26;
        if (res < 0) res += 26;
    }

    printf("%c\n", res + 'a');

    return 0;
}