#include <stdio.h>

int main() {
    int T, N, X, P;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &X, &P);
        int score = X * 3 - (N - X);
        if (score >= P)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}
