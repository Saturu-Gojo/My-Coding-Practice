#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int f(int ind, int n, string &s, vector<vector<string>> &v, string &res)
{
    if (ind == n)
        return 0;
    int m = s.size();
    string r1 = s.substr(1, m - 1);
    string r2 = r1.substr(1, m - 2);
    r2 = s[0] + r2;

    int p = r1.size();
    int q = r2.size();
    if (p > 0 || q > 0)
    {
        bool flag = false;
        for (int i = 0; i < p; i++)
        {
            if (v[p][i] == r1)
        }
    }

    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<vector<string>> v(n + 1);
    string res = "";
    int ans = f(0, n, s, v, res);
    cout << ans << "\n";

    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}