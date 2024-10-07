#include <stdio.h>

int main() {
    int T, W, X, Y, Z;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d %d %d", &W, &X, &Y, &Z);
        if (W == X || W == Y || W == Z || 
            W == X + Y || W == X + Z || W == Y + Z || 
            W == X + Y + Z) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
