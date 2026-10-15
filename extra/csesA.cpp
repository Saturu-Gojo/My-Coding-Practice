#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 676767677;



void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    ll maxi = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
        maxi=max(maxi,v[i]);
    }
    

    cout<<max(2*maxi,sum)<<"\n";
    
    
    return;
}

int main()
{
    
        solve();
    
}