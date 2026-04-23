#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gc(ll a, ll b){
    if(b==0)return a;
    return gc(b, a%b);

}

void solve(){
    ll n, m,a,b;
    cin>>n>>m>>a>>b;
    ll val1 = gc(n,a);
    ll val2 = gc(m,b);
    ll val3 = gc(n,m);
    
  
    if(val1==1 && val2==1 && val3<=2){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    return;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}