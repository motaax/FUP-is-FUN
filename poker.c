#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int t = 1; t <= N; t++) {
        int cartas[5];
        int freq[14] = {0}; 

        for (int i = 0; i < 5; i++) {
            scanf("%d", &cartas[i]);
            freq[cartas[i]]++;
        }

        int score = 0;

        for (int x = 1; x <= 9; x++) {
            if (freq[x] == 1 &&
                freq[x+1] == 1 &&
                freq[x+2] == 1 &&
                freq[x+3] == 1 &&
                freq[x+4] == 1) {
                score = x + 200;
            }
        }

        for (int i = 1; i <= 13; i++) {
            if (freq[i] == 4) {
                score = i + 180;
            }
        }

        for (int i = 1; i <= 13; i++) {
            for (int j = 1; j <= 13; j++) {
                if (i != j && freq[i] == 3 && freq[j] == 2) {
                    score = i + 160;
                }
            }
        }

        for (int i = 1; i <= 13; i++) {
            if (freq[i] == 3) {
                int outros = 0;
                for (int j = 1; j <= 13; j++) {
                    if (j != i && freq[j] == 1) outros++;
                }
                if (outros == 2) {
                    score = i + 140;
                }
            }
        }

        int pares[2], p = 0, outro = 0;
        for (int i = 1; i <= 13; i++) {
            if (freq[i] == 2) {
                if (p < 2) pares[p++] = i;
            }
            if (freq[i] == 1) outro = i;
        }
        if (p == 2) {
            int x = pares[0], y = pares[1];
            if (x < y) {
                int tmp = x; x = y; y = tmp;
            }
            score = 3 * x + 2 * y + 20;
        }

        for (int i = 1; i <= 13; i++) {
            if (freq[i] == 2) {
                int distintos = 0;
                for (int j = 1; j <= 13; j++) {
                    if (freq[j] == 1) distintos++;
                }
                if (distintos == 3) {
                    score = i;
                }
            }
        }

        printf("Teste %d\n", t);
        printf("%d\n\n", score);
    }

    return 0;
}