#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the array to easily extract elements in order
    sort(a.begin(), a.end());
    
    vector<ll> b;
    // Step 2: Put the largest element at the very front
    b.push_back(a.back()); 
    a.pop_back(); 
    
    // Step 3: Extract the 0, 1, 2... sequence
    vector<ll> rest;
    ll target = 0;
    
    for(ll x : a) {
        if(x == target) {
            b.push_back(x);
            target++;
        } else {
            rest.push_back(x); // Duplicates or elements larger than target
        }
    }
    
    // Step 4: Append all unused elements to the back
    b.insert(b.end(), rest.begin(), rest.end());
    
    // Step 5: Simulate and calculate the sum
    ll total_sum = 0;
    ll current_max = 0;
    ll current_mex = 0;
    
    // A boolean array to track which elements we have seen for MEX calculation.
    // The MEX can never exceed n+1, so sizing it to n+2 is perfectly safe.
    vector<bool> mex_present(n + 2, false);
    
    for(int i = 0; i < n; i++) {
        current_max = max(current_max, b[i]);
        
        if(b[i] < mex_present.size()) {
            mex_present[b[i]] = true;
        }
        
        // Advance MEX as much as possible
        while(current_mex < mex_present.size() && mex_present[current_mex]) {
            current_mex++;
        }
        
        total_sum += current_max + current_mex;
    }
    
    cout << total_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}