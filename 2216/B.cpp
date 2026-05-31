#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll t, h, u;
    cin >> t >> h >> u;

    ll ans = 3 * (t + h + u);

    ll tu = min(t, u);
    ans -= 2 * tu;
    t -= tu;

    // 2. Plug remaining T blocks into H blocks (Saves 1 row per plugged T)
    ll th = min(t, 2 * h);
    ans -= th;
    t -= th;

    // 3. Stack any remaining T blocks together (Saves 1 row for each T beyond the first)
    if (t > 0) {
        ans -= (t - 1);
    }

    cout << ans << '\n';
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}