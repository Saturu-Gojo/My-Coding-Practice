#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> drops;
    
    // Step 1: Safely record the indices of every drop
    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            drops.push_back(i);
        }
    }

    // If there are no drops, it's already sorted
    if (drops.empty()) {
        cout << "Yes\n";
        return;
    }

    // Step 2: Calculate the Lower Bound (L) for k
    // L is the maximum difference of all the drops
    ll L = 0;
    for (int i : drops) {
        L = max(L, v[i - 1] - v[i]);
    }

    // Step 3: Calculate the Upper Bound (R) for k
    ll R = 2e18; // Representing infinity
    for (size_t i = 0; i + 1 < drops.size(); i++) {
        int d1 = drops[i];
        int d2 = drops[i + 1];
        
        ll max_diff = -1;
        // Check the gaps between consecutive drops to find the upper limit
        for (int j = d1 + 1; j < d2; j++) {
            max_diff = max(max_diff, v[j] - v[j - 1]);
        }
        R = min(R, max_diff);
    }

    // Step 4: Validate if a valid k exists
    if (L <= R) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    // Fast I/O to prevent Time Limit Exceeded on large test cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}