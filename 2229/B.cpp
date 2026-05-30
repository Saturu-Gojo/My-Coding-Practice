#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n),b(n),v;
    ll sum=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(a[i]<b[i]){
            sum+=b[i];
            maxi=max(maxi,a[i]);
        }else{
            sum+=a[i];
            maxi=max(maxi,b[i]);
        }
    }
    sum+=maxi;
    cout<<sum<<'\n';
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