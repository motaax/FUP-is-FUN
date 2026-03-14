#include <stdio.h>

int main() {
    int N, X, Y, S;
    char C;

    scanf("%d", &N);
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf(" %c", &C);
    scanf("%d", &S);

    if (C == 'R') {
        X = (X + S) % N;
    }
    else if (C == 'L') {
        X = (X - S) % N;
        if (X < 0)
            X += N;
    }
    else if (C == 'D') {
        Y = (Y + S) % N;
    }
    else if (C == 'U') {
        Y = (Y - S) % N;
        if (Y < 0)
            Y += N;
    }

    printf("%d %d\n", X, Y);

    return 0;
}