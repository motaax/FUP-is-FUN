#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d", &n1);
    int v1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    scanf("%d", &n2);
    int v2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int contido = 1;

    for (int i = 0; i < n1; i++) {
        int achou = 0;

        for (int j = 0; j < n2; j++) {
            if (v1[i] == v2[j]) {
                achou = 1;
                break; 
            }
        }

        if (!achou) {
            contido = 0;
            break;
        }
    }

    if (contido) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}