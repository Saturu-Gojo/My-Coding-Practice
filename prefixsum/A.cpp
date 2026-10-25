#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxi = 1e5 + 5;
const int mod = 1e9 + 7;

int main()
{
    int n,q;
    cin>>n>>q;

    vector<ll> a(n+1),prefix(n+1);
    
    for(int i=1; i<=n;i++){
        cin>>a[i];
        prefix[i] = prefix[i-1]+a[i];
    }
    for(int i=0; i<q; i++){
        ll p,q;
        cin>>p>>q;
        cout<<prefix[q]-prefix[p]<<"\n";
    }




    return 0;
}