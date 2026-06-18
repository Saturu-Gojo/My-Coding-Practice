#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);

    for(int i=0; i<n; i++)cin>>a[i];

    ll tot = 0;

    for(int i=1;i<n; i++){
        if(a[i]<a[i-1]){
            a[i]=a[i]+a[i-1];
        }
    }
    cout<<a[n-1];

   
    return;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<'\n';
    }
}