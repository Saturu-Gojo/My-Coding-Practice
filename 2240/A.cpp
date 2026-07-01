#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,k;
    cin>>n>>k;

    ll maxi = 0;
    ll bit = 1;
    while(n>0){
        ll take = min(k,n/bit);

        if(take==0){
            break;
        }
        maxi += take;
        n-=(take*bit);
        bit*=2;
    }
    cout<<maxi<<'\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}