#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[10000], key[10000], op;
    
    fgets(text, sizeof(text), stdin);
    fgets(key, sizeof(key), stdin);
    scanf(" %c", &op);

    text[strcspn(text, "\n")] = 0;
    key[strcspn(key, "\n")] = 0;

    int key_len = strlen(key);
    int j = 0; 

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            int t = c - 'a';
            int k = key[j % key_len] - 'a';

            if (op == '+') {
                c = ((t + k) % 26) + 'a';
            } else { // '-'
                c = ((t - k + 26) % 26) + 'a';
            }

            j++;
        }

        putchar(c);
    }

    return 0;
}