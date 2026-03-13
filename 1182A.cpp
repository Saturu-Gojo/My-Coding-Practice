#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main()
{
    int n;
    cin>>n;
    ll ans = 1;
    if(n%2!=0)cout<<0<<"\n";
    else {
        
        for(int i=0; i<n/2; i++){
            ans=ans * 2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}