#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n+1);
    ll cnt=0;
    for(int i=1; i<=n; i++){
        int x;
        cin>>x;
        x=x%k;
        v[i]=x+v[i-1];
        v[i]=v[i]%k;
        
    }
    map<int,int> mp;
    
   
    for(int i=k+1;i<=n; i++){
        int ind = i-k-1;
        mp[v[ind]]++;
        cnt += mp[v[i]];
    }
    cout<<cnt<<"\n";


    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}