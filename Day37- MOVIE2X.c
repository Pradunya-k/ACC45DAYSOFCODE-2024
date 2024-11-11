#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int time = (Y / 2) + (X - Y);
    printf("%d\n", time);
    return 0;
}
