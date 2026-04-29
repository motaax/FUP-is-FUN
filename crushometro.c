#include <stdio.h>

int main() {
    char nome1[105], nome2[105];
    int i, len1 = 0, len2 = 0;
    int vogais1 = 0, vogais2 = 0;
    int pontos = 0;

    scanf("%s", nome1);
    scanf("%s", nome2);

    for (i = 0; nome1[i] != '\0'; i++) {
        len1++;

        if (nome1[i] == 'a' || nome1[i] == 'e' || nome1[i] == 'i' ||
            nome1[i] == 'o' || nome1[i] == 'u' ||
            nome1[i] == 'A' || nome1[i] == 'E' || nome1[i] == 'I' ||
            nome1[i] == 'O' || nome1[i] == 'U') {
            vogais1++;
        }
    }

    for (i = 0; nome2[i] != '\0'; i++) {
        len2++;

        if (nome2[i] == 'a' || nome2[i] == 'e' || nome2[i] == 'i' ||
            nome2[i] == 'o' || nome2[i] == 'u' ||
            nome2[i] == 'A' || nome2[i] == 'E' || nome2[i] == 'I' ||
            nome2[i] == 'O' || nome2[i] == 'U') {
            vogais2++;
        }
    }

    if (nome1[0] == nome2[0]) {
        pontos += 20;
    }

    if (len1 == len2) {
        pontos += 30;
    }

    if (vogais1 == vogais2) {
        pontos += 30;
    }

    int end1_vogal = (nome1[len1 - 1] == 'a' || nome1[len1 - 1] == 'e' ||
                      nome1[len1 - 1] == 'i' || nome1[len1 - 1] == 'o' ||
                      nome1[len1 - 1] == 'u' || nome1[len1 - 1] == 'A' ||
                      nome1[len1 - 1] == 'E' || nome1[len1 - 1] == 'I' ||
                      nome1[len1 - 1] == 'O' || nome1[len1 - 1] == 'U');

    int end2_vogal = (nome2[len2 - 1] == 'a' || nome2[len2 - 1] == 'e' ||
                      nome2[len2 - 1] == 'i' || nome2[len2 - 1] == 'o' ||
                      nome2[len2 - 1] == 'u' || nome2[len2 - 1] == 'A' ||
                      nome2[len2 - 1] == 'E' || nome2[len2 - 1] == 'I' ||
                      nome2[len2 - 1] == 'O' || nome2[len2 - 1] == 'U');

    if (end1_vogal == end2_vogal) {
        pontos += 20;
    } else {
        pontos -= 10;
    }

    if (pontos < 0) pontos = 0;

    printf("As chances do crush te dar bola sao: %d%%!\n", pontos);

    return 0;
}