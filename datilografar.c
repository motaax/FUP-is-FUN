#include <stdio.h>
#include <string.h>

int main() {
    char d;
    char n[105];
    char res[105];
    int i, j = 0;

    scanf(" %c", &d);
    scanf("%s", n);

    for (i = 0; n[i] != '\0'; i++) {
        if (n[i] != d) {
            res[j++] = n[i];
        }
    }
    res[j] = '\0';

    int k = 0;
    while (res[k] == '0') {
        k++;
    }

    if (res[k] == '\0') {
        printf("0\n");
    } else {
        printf("%s\n", res + k);
    }

    return 0;
}