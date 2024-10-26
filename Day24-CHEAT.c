#include <stdio.h>

int main() {
    int T, n;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d", &n);
        int ans = 0;
        for (int x = 2; x <= n; x += 7) {
            ans++;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}
