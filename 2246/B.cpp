#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int INF = 1e9 + 7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;

    if (n == 2) {
        cout << -1 << "\n";
        return;
    }

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    // n >= 3: array = 1, 2, 3, 6, 12, 24, ..., 3*2^(n-3)
    // sum = 3 * 2^(n-2), and every term divides it
    vector<ll> a;
    a.push_back(1);
    a.push_back(2);

    ll cur = 3;
    for (int k = 3; k <= n; k++) {
        a.push_back(cur);
        cur *= 2;
    }

    for (int i = 0; i < (int)a.size(); i++) {
        cout << a[i] << " \n"[i + 1 == (int)a.size()];
    }
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