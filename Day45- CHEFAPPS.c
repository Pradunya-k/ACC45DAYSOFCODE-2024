#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);
        int unused_memory = S - (X + Y);
        if (unused_memory >= Z) {
            printf("0\n");
        } else if ((S - Y) >= Z || (S - X) >= Z) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    return 0;
}
