#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        
        int normalAttacks = (H + X - 1) / X;
        int withSpecial = (H - Y + X - 1) / X + 1;
        
        if (withSpecial < 0) withSpecial = 0;
        
        int result = normalAttacks < withSpecial ? normalAttacks : withSpecial;
        
        printf("%d\n", result);
    }
    
    return 0;
}
