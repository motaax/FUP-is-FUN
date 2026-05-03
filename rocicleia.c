#include <stdio.h>
#include <string.h>

int main() {
    char a[1001], b[1001];
    int count[26] = {0};

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("nao\n");
        return 0;
    }

    for (int i = 0; a[i]; i++) {
        count[a[i] - 'a']++;
    }

    for (int i = 0; b[i]; i++) {
        count[b[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("nao\n");
            return 0;
        }
    }

    printf("sim\n");
    return 0;
}