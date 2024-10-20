#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);
        
        int k = (int)(log2(N));
        int total_time = k * A + (k - 1) * B;
        
        printf("%d\n", total_time);
    }
    
    return 0;
}


