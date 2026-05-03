#include <stdio.h>
#include <string.h>

int proxima_permutacao(char *s) {
    int n = strlen(s);
    
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1]) i--;

    if (i < 0) return 0; 

    int j = n - 1;
    while (s[j] <= s[i]) j--;

    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    int l = i + 1, r = n - 1;
    while (l < r) {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }

    return 1;
}

int main() {
    char s[1001];
    int n;

    scanf("%s", s);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (!proxima_permutacao(s)) break;
    }

    printf("%s\n", s);

    return 0;
}