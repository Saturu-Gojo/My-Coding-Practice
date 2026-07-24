#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

int f(int ind, vector<ll> &a, vector<ll>& b){
    if(ind==0){
        if(a[ind]<=b[ind])return 1;
        else return 0;
    }

    if(a[ind]<b[ind]){
        a[ind]=b[ind];
    }else{
        ll diff = a[ind]-b[ind];
        a[ind]=b[ind];
        a[ind-1]+=diff;
    }
    return f(ind-1,a,b);

}

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    // for(int i=1; i<n; i++){
    //     a[i]+=a[i-1];
    //     b[i]+=b[i-1];
    // }
    // for(int i=0; i<n; i++){
    //     if(a[i]>b[i]){
    //         cout<<"NO"<<"\n";
    //         return;
    //     }
    // }

    vector<int> dp(n+1,-1);
    if(f(n-1,a,b))cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
    
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