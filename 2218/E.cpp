#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    ll maxi = 0;
    ll ans = a[0];
    for(int i=0; i<n; i++){
        ll val = a[i];
        for(int j=i+1; j<n; j++){
            maxi = max(maxi, a[j]^val);
        }
    }


    
    cout<< maxi << endl;
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    
    }
}