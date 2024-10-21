#include <stdio.h>

int main() {
    int T, N, X, Y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &X, &Y);
        if (Y >= 0 && Y <= N * X && Y % X == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

