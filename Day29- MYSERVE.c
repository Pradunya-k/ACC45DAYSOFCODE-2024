#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int x = (a + b) % 4 / 2;
        if(x == 0) 
            printf("Alice\n");
        else 
            printf("Bob\n");
    }
    return 0;
}

