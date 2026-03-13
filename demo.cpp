#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    const int MOD = 1e9 + 7;
    // dp[i][v] = number of ways to fill array up to index i such that x[i] = v
    // We use m+2 to handle v-1 and v+1 without index errors
    vector<vector<int>> dp(n, vector<int>(m + 2, 0));

    // Base Case: First element
    if (x[0] == 0) {
        for (int v = 1; v <= m; v++) {
            dp[0][v] = 1;
        }
    } else {
        dp[0][x[0]] = 1;
    }

    // Transitions
    for (int i = 1; i < n; i++) {
        if (x[i] == 0) {
            for (int v = 1; v <= m; v++) {
                // The current value v can come from v-1, v, or v+1 at i-1
                dp[i][v] = (1LL * dp[i-1][v-1] + dp[i-1][v] + dp[i-1][v+1]) % MOD;
            }
        } else {
            int v = x[i];
            dp[i][v] = (1LL * dp[i-1][v-1] + dp[i-1][v] + dp[i-1][v+1]) % MOD;
        }
    }

    // Final Answer: Sum of all valid values for the last position
    int ans = 0;
    for (int v = 1; v <= m; v++) {
        ans = (ans + dp[n-1][v]) % MOD;
    }

    cout << ans << endl;

    return 0;
}