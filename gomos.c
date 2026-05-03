#include <stdio.h>

typedef struct {
    int x, y;
} Point;

int main() {
    int Q;
    char D;

    scanf("%d %c", &Q, &D);

    Point snake[1000];

    for (int i = 0; i < Q; i++) {
        scanf("%d %d", &snake[i].x, &snake[i].y);
    }

    if (D == 'L') snake[0].x -= 1;
    else if (D == 'R') snake[0].x += 1;
    else if (D == 'U') snake[0].y -= 1;
    else if (D == 'D') snake[0].y += 1;

    Point prev = snake[0];
    for (int i = 1; i < Q; i++) {
        Point tmp = snake[i];
        snake[i] = prev;
        prev = tmp;
    }

    for (int i = 0; i < Q; i++) {
        printf("%d %d\n", snake[i].x, snake[i].y);
    }

    return 0;
}