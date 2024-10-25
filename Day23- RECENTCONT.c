#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, count_start38 = 0, count_ltime108 = 0;
        scanf("%d", &N);
        
        char code[10];
        for (int i = 0; i < N; i++) {
            scanf("%s", code);
            if (strcmp(code, "START38") == 0) {
                count_start38++;
            } else if (strcmp(code, "LTIME108") == 0) {
                count_ltime108++;
            }
        }
        printf("%d %d\n", count_start38, count_ltime108);
    }
    
    return 0;
}
