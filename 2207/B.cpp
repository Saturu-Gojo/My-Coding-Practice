#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m, l;
    if (!(cin >> n >> m >> l)) return;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> lvls(m, 0);
    int curr = n;

    for (int i = 0; i < l; ++i) {
       
        int idx = min(m, curr + 1) - 1;
        lvls[idx]++;


        sort(lvls.begin(), lvls.end(), greater<int>());

        if (curr > 0 && a[n - curr] - 1 == i) {

            lvls[0] = 0;
            sort(lvls.begin(), lvls.end(), greater<int>());
            curr--;
        }
    }

    cout << lvls[0] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}