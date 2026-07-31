#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vis(26,0);
    ll ans = 0;
    for(int i=0; i<n; i++){
        int ind = s[i]-'a';
        if(vis[ind]==0){
            ans+=(n-i);
            vis[ind]=1;
        }
    }
    cout<<ans<<"\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}


      
