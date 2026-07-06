#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    ll n,x1,x2,k;
    cin>>n>>x1>>x2>>k;

    if(n==2||n==3){
        cout<<1<<"\n";
        return;
    }

    ll moves=k;

    ll r = min(abs(x2-x1), n-abs(x2-x1));
    cout<<moves+r<<"\n";
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