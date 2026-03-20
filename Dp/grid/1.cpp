#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Function to calculate Fibonacci using memoization
    int Memoizationfib(int n, vector<int>& dp) {
        // If base case return n
        if (n <= 1) return n;

        // If already computed, return stored value
        if (dp[n] != -1) return dp[n];

        // Otherwise compute and store
        dp[n] = Memoizationfib(n - 1, dp) + Memoizationfib(n - 2, dp);
        return dp[n];
    }

    // Function to calculate Fibonacci using tabulation
    int Tabulationfib(int n) {
        // If n is 0 or 1, return n
        if (n <= 1) return n;

        // Create dp array
        vector<int> dp(n + 1, 0);

        // Initialize base cases
        dp[0] = 0;
        dp[1] = 1;

        // Fill dp array iteratively
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // Return final answer
        return dp[n];
    }


    int spaceOptifib(int n){
        // If n is 0 return 0
        if(n == 0) return 0;
        // If n is 1 return 1
        if(n == 1) return 1;

        // prev2 stores fib(n-2)
        int prev2 = 0;
        // prev stores fib(n-1)
        int prev = 1;
        // curr stores current fib
        int curr;

        // Loop from 2 to n
        for(int i = 2; i <= n; i++) {
            // Calculate current fib
            curr = prev + prev2;
            // Update prev2
            prev2 = prev;
            // Update prev
            prev = curr;
        }
        // Return final answer
        return prev;
    }
};

int main() {
    int n;
    cin>>n;
    Solution sol;
    vector<int> dp(n+1,-1);
    // dp[0]=0;S
    // dp[1]=1;
    cout << sol.Tabulationfib(n)<<"\n";
    cout<< sol.Memoizationfib(n,dp)<<"\n";
    cout<< sol.spaceOptifib(n)<<"\n";

    return 0;
}
