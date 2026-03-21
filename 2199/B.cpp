#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans = 0;
        ll mini = min(c,d);
        ll maxi = max(a,b);
        if(mini>=maxi){
            ans=mini-maxi;
            ans+=abs(a-b);
            ans+=abs(c-d);
        }else{
            ans = (c-a)+(d-b);
        }
        cout<<ans<<'\n';
    }
}