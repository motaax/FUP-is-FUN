#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++) {
        char str[105];
        fgets(str, sizeof(str), stdin);

        int upper;

        int j = 0;
        while (str[j] == ' ') j++;

        if (isupper(str[j]))
            upper = 1;
        else
            upper = 0;

        for (int k = 0; str[k] != '\0'; k++) {
            if (str[k] == ' ') {
                printf(" ");
                continue;
            }

            if (upper) {
                printf("%c", toupper(str[k]));
                upper = 0;
            } else {
                printf("%c", tolower(str[k]));
                upper = 1;
            }
        }

        printf("\n");
    }

    return 0;
}