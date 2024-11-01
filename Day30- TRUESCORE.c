#include <stdio.h>

int main() {
    int T, A, B, C, D;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D);
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
