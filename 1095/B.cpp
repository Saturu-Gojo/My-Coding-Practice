#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int ans=0;

    for(int i=0; i<n-1; i++){
        ll a = v[i];
        ll b = v[i+1];
        ll d = abs(a-b);

        if(b%d==0){
            ans++;
        }
    }
    cout<<ans<<'\n';


    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}