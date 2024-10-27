#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        
        int *strings = (int *)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &strings[i]);
        }

        long long total_skips = 0;
        for (int i = 1; i < N; i++) {
            total_skips += abs(strings[i] - strings[i - 1]) - 1;
        }

        printf("%lld\n", total_skips);
        free(strings);
    }

    return 0;
}
