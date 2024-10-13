#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int notebooks = (N * 1000) / 100;
        printf("%d\n", notebooks);
    }
    return 0;
}
