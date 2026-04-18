#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> div(ll n){
    vector<ll> divi;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            divi.push_back(i);
        }
    }
    return divi;
}


void solve(){
    ll p,q;
    cin >> p >> q;
    ll temp = 2*p + 4*q +1;
    vector<ll> divi = div(temp);
    for(auto it : divi){
        ll x = it;
        ll y = temp/x;
        ll n = (x-1)/2;
        ll m = (y-1)/2;
        if(min(n*(m+1),m*(n+1))>=q){
            cout<<n<<" "<<m<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';

    
    return;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}