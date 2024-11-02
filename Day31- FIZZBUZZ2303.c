#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int choices = N * (N - 1);
        printf("%d\n", choices);
    }
    return 0;
}
