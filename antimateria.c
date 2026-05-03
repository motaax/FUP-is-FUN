#include <stdio.h>
#include <string.h>

int main() {
    char a[1001], b[1001];
    scanf("%s", a);
    scanf("%s", b);

    int lenA = strlen(a);
    int lenB = strlen(b);
    int max = 0;

    for (int i = 1; i <= lenA && i <= lenB; i++) {
        if (strncmp(a + lenA - i, b, i) == 0) {
            max = i;
        }
    }

    for (int i = 0; i < lenA - max; i++) {
        printf("%c", a[i]);
    }

    printf("\n");
    return 0;
}