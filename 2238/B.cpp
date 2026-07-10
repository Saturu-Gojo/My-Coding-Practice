#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;
    ll b=0;
    for(int i=1; i<=n; i++){
        ll val=n/i;
        b+=val*val;
    }
    cout<<b<<"\n";
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}