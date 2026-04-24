#include <stdio.h>
#include <string.h>

int main() {
    int N, i, j;
    char numero[105];
    int leds;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%s", numero);

        leds = 0;

        for(j = 0; numero[j] != '\0'; j++) {
            char d = numero[j];

            if(d == '0') leds += 6;
            else if(d == '1') leds += 2;
            else if(d == '2') leds += 5;
            else if(d == '3') leds += 5;
            else if(d == '4') leds += 4;
            else if(d == '5') leds += 5;
            else if(d == '6') leds += 6;
            else if(d == '7') leds += 3;
            else if(d == '8') leds += 7;
            else if(d == '9') leds += 6;
        }

        printf("%d leds\n", leds);
    }

    return 0;
}