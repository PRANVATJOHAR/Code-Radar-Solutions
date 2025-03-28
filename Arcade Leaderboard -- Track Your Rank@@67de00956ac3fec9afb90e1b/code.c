#include <stdio.h>

// Function to determine player ranks
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int rank[n];  
    rank[0] = 1;

    // Assign dense ranks to the leaderboard
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1])
            rank[i] = rank[i - 1];
        else
            rank[i] = rank[i - 1] + 1;
    }

    int index = n - 1; // Start from the lowest rank in the leaderboard
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= ranked[index]) {
            index--;
        }
        result[i] = (index == -1) ? 1 : rank[index] + 1; // Compute rank
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[m], result[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &player[i]);

    trackPlayerRanks(ranked, n, player, m, result);

    // Print results
    for (int i = 0; i < m; i++)
        printf("%d\n", result[i]);

    return 0;
}