#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll m;
    cin >> n >> m;
    
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool possible = true;
    int consecutive = 1;
    
    // Check if there are m consecutive identical timers
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) {
            consecutive++;
            if(consecutive >= m) {
                possible = false;
                break;
            }
        } else {
            consecutive = 1; // Reset count
        }
    }
    
    if(possible) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}