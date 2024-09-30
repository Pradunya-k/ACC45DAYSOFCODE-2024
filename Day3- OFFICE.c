#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        int X, Y; 
        scanf("%d %d", &X, &Y); // Read X and Y

        
        int total_hours = (4 * X) + Y;

        
        printf("%d\n", total_hours);
    }

    return 0;
}
