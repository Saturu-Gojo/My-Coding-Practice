#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n+1),b(n+1);

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        vector<ll> pre(n+2);
        pre[n+1]=0;
        ll maxi = 0;
        for(int i=n;i>=1;i--){
            pre[i] = max({maxi,a[i],b[i]});
            maxi = max({maxi,a[i],b[i]});
        }
        for(int i=1;i<=n;i++){
            pre[i] += pre[i-1];
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<" ";
        }
        cout<<"\n";
    }
}