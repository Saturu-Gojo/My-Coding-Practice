
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cal(int n){
    int res = 0;
    while(n>0){
        int r = n%10;
        res+=r*r;
        n/=10;
    }
    return res;
}
ll sync(ll x){
    for(int i=0; i<100; i++){
        x=cal(x);
    }
    return x;
}

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ll final = sync(v[i]);
        mp[final]++;
    }
    ll ans=0;
    for(auto &[v,c]:mp){
        ans +=c*(c-1)/2;
        
    }
    cout<<ans<<"\n";
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}