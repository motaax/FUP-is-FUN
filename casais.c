#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int animais[50];
    for(int i = 0; i < n; i++) {
        scanf("%d", &animais[i]);
    }

    int casais = 0;

    for(int i = 0; i < n; i++) {
        if(animais[i] == 0) continue;

        for(int j = i + 1; j < n; j++) {
            if(animais[i] + animais[j] == 0 && (animais[i] > 0 && animais[j] < 0 || animais[i] < 0 && animais[j] > 0)) {
                casais++;
                animais[i] = 0;
                animais[j] = 0;
                break;
            }
        }
    }

    printf("%d\n", casais);

    return 0;
}