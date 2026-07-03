#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353; 

ll power(ll base, ll exp) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void solve(){
    ll n,m,r,c;
    cin>>n>>m>>r>>c;

    ll total = (n*m);
    ll    ans = (n*m) - (m-c+1)*(n-r+1);
    ll res = power(2,ans);
    cout<<res<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}