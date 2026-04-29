#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int v[50];
    int i;

    for(i = 0; i < t; i++) {
        scanf("%d", &v[i]);
    }

    int somaJedi = 0, somaSith = 0;

    // primeira metade: Jedi
    for(i = 0; i < t/2; i++) {
        somaJedi += v[i];
    }

    // segunda metade: Sith
    for(i = t/2; i < t; i++) {
        somaSith += v[i];
    }

    if(somaJedi > somaSith) {
        printf("Jedi\n");
    } else if(somaSith > somaJedi) {
        printf("Sith\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}