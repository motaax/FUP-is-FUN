#include <stdio.h>
#include <string.h>

int main() {
    char frase[101];
    char vogais[101], consoantes[101];
    int i, v = 0, c = 0;

    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for(i = 0; frase[i] != '\0'; i++) {
        char ch = frase[i];

        if(ch == ' ') {
            continue;
        }

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais[v++] = ch;
        } else {
            consoantes[c++] = ch;
        }
    }

    vogais[v] = '\0';
    consoantes[c] = '\0';

    printf("%s\n", vogais);
    printf("%s\n", consoantes);

    return 0;
}