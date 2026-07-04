#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    ll sum_a = 0, sum_b = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum_a += a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        sum_b += b[i];
    }
    
    // Check if we can do it WITHOUT reordering
    bool can_without_reorder = true;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            can_without_reorder = false;
            break;
        }
    }
    
    // Check if we can do it WITH reordering
    vector<int> sorted_a = a;
    vector<int> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());
    
    bool can_with_reorder = true;
    for (int i = 0; i < n; i++) {
        if (sorted_a[i] < sorted_b[i]) {
            can_with_reorder = false;
            break;
        }
    }
    
  
    ll diff = sum_a - sum_b;
    
    if (can_without_reorder) {

        cout << diff << "\n";
    } else if (can_with_reorder) {
    
        cout << diff + c << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}