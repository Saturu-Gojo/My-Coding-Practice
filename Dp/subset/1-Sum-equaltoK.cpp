//dp-14 Given an array arr of n integers and an integer 
//target, determine if there is a subset of the given 
//array with a sum equal to the given target.


//Input: arr = [1, 2, 7, 3], target = 6

// Output: True

// Explanation: There is a subset (1, 2, 3) with sum 6.

// Example 2

// Input: arr = [2, 3, 5], target = 6

// Output: False

// Explanation: There is no subset with sum 6.

#include<bits/stdc++.h>
using namespace std;

// Memoization Approach
bool f(int ind, vector<int> &v, int k, vector<vector<int>> &dp) {
    if (k == 0) return true;
    if (ind == v.size()) return false;

    if (dp[ind][k] != -1) return dp[ind][k];

    // Choice 1: Don't take the current element
    bool notTake = f(ind + 1, v, k, dp);

    // Choice 2: Take the current element (only if it fits)
    bool take = false;
    if (v[ind] <= k) {
        take = f(ind + 1, v, k - v[ind], dp);
    }

    return dp[ind][k] = take || notTake;
}

// Tabulation Approach
bool Tabulation(int n, int k, vector<int> &a) {
    vector<vector<bool>> dp(n, vector<bool>(k + 1, 0));
    
    // Base Case: Target 0 is always possible (empty subset)
    for (int i = 0; i < n; i++) dp[i][0] = true;
    
    // Base Case: First element can form a subset of its own value
    if (a[0] <= k) dp[0][a[0]] = true;

    for (int i = 1; i < n; i++) {
        for (int tar = 1; tar <= k; tar++) {
            bool notTake = dp[i - 1][tar];
            bool take = false;
            if (a[i] <= tar) {
                take = dp[i - 1][tar - a[i]];
            }
            dp[i][tar] = take || notTake;
        }
    }
    return dp[n - 1][k];
}


//Space optimization

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Memoization DP table (n x k+1)
    vector<vector<int>> dp(n, vector<int>(k + 1, -1));

    cout << "Memoization: " << (f(0, a, k, dp) ? "Found" : "NOT FOUND") << endl;
    cout << "Tabulation: " << (Tabulation(n, k, a) ? "Found" : "NOT FOUND") << endl;

    return 0;
}