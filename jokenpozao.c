#include <stdio.h>
#include <string.h>

int main() {
    char a[20], b[20];
    
    char *ordem[] = {
        "paper", "air", "water", "gun", "rock",
        "fire", "scissors", "human", "sponge"
    };

    scanf("%s %s", a, b);

    int i, ia = -1, ib = -1;

    for (i = 0; i < 9; i++) {
        if (strcmp(a, ordem[i]) == 0) ia = i;
        if (strcmp(b, ordem[i]) == 0) ib = i;
    }

    if (ia == ib) {
        printf("empate\n");
        return 0;
    }

    int diff = (ib - ia + 9) % 9;

    if (diff >= 1 && diff <= 4)
        printf("jog1\n");
    else
        printf("jog2\n");

    return 0;
}