#include <stdio.h>

int main() {
    int T, N, A, B;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &N, &A, &B);
        int odd_count = (N + 1) / 2;
        int even_count = N / 2;
        int total_duration = (odd_count * B) + (even_count * A);
        printf("%d\n", total_duration);
    }
    return 0;
}