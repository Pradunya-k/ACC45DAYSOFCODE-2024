#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int max_tastiness = 0;
        max_tastiness = (a + c > b + c ? a + c : b + c);
        max_tastiness = (max_tastiness > a + d ? max_tastiness : a + d);
        max_tastiness = (max_tastiness > b + d ? max_tastiness : b + d);
        printf("%d\n", max_tastiness);
    }
    return 0;
}

