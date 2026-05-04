#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    ll x, y;
    cin >> n >> x >> y; 
    
    vector<ll> a(n);
    ll total = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        total+=a[i]/x;
    }
    ll maxi = 0;
    for(int i=0; i<n ; i++){
        ll cur = total - a[i]/x;
        ll val = a[i] + cur*y;
        maxi=max(maxi,val);
    }
    cout<<maxi<<'\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}