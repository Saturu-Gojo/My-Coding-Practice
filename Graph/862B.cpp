#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void dfs(int src, vector<vector<int>> &adj, int par, bool col, ll &c, ll &uc)
{
    if (col)
        c++;
    else
        uc++;
    for (int x : adj[src])
    {
        if (x != par)
        {
            dfs(x, adj, src, !col, c, uc);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll c = 0;
    ll uc = 0;
    dfs(1, adj, 0, 1, c, uc);
    cout << c * uc - (n - 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // for(int i=1; i<=1e5; i++){
    //     for(int j=i; j<=1e5; j+=i){
    //         fac[j].push_back(i);
    //     }
    // }

    int t = 1;
    // cin>>t;

    while (t--)
        solve();
}