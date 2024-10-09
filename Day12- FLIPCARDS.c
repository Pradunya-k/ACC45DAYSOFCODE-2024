
#include <stdio.h>

int main() {
    int T, N, X;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &N, &X);
        int faceDown = N - X;
        printf("%d\n", X < faceDown ? X : faceDown);
    }
    return 0;
}

