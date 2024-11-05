#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        int required_sum = 21 - A - B;
        
        if (required_sum >= 1 && required_sum <= 10) {
            printf("%d\n", required_sum);
        } else {
            printf("-1\n");
        }
    }
    
    return 0;
}
