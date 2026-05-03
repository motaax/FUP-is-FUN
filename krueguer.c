#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    int t;
    scanf("%d", &t);
    getchar(); 

    while (t--) {
        char s[60];
        fgets(s, sizeof(s), stdin);

        int n = strlen(s);
        if (s[n-1] == '\n') s[n-1] = '\0';

        int best_len = 0, best_start = 0;
        int cur_start = -1, cur_len = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (is_vowel(s[i])) {
                if (cur_start == -1) cur_start = i;
                cur_len++;

                if (cur_len > best_len) {
                    best_len = cur_len;
                    best_start = cur_start;
                }
            } else {
                cur_start = -1;
                cur_len = 0;
            }
        }

        if (best_len == 0) {
            printf("\n");
        } else {
            for (int i = best_start; i < best_start + best_len; i++) {
                putchar(s[i]);
            }
            printf("\n");
        }
    }

    return 0;
}