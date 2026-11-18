#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector<vector<int>> &adj, vector<int> &vis, bool c, int &cnt)
{
    if (c)
        cnt++;
    vis[src] = (c == true ? 1 : 2);
    for (int x : adj[src])
    {

        if (vis[x] == 0)
        {
            dfs(x, adj, vis, !c, cnt);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(n + 1);
    bool col = true;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, adj, vis, col, cnt);
        }
    }

    int uc = n - cnt;
    if (uc < cnt)
    {
        cout << uc << '\n';
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 2 && adj[i].size() > 0)
                cout << i << " ";
        }
        cout << '\n';
    }
    else
    {
        cout << cnt << '\n';
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 1 && adj[i].size() > 0)
                cout << i << " ";
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}