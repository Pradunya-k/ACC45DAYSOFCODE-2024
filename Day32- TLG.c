#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int player1_total = 0, player2_total = 0;
    int winner = 0, max_lead = 0;

    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T);
        player1_total += S;
        player2_total += T;

        int lead = player1_total - player2_total;
        if (lead > max_lead) {
            max_lead = lead;
            winner = 1;
        } else if (-lead > max_lead) {
            max_lead = -lead;
            winner = 2;
        }
    }

    printf("%d %d\n", winner, max_lead);
    return 0;
}
