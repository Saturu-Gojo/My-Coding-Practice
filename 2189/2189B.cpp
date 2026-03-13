#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll ans = LLONG_MAX;
       
        ll gain = LLONG_MIN;
        ll first = 0;
        for(int i=0; i<n; i++){
            ll a, b, c;
            cin>>a>>b>>c;
            first += (b-1)*a;
            gain = max(gain,b*a - c);
           
        }
        if(first>=x){
            cout<<0<<"\n";
        }else if(gain<=0){
            cout<<-1<<"\n";
        }else{
            ans = (x-first+gain-1)/gain;
            cout<<ans<<"\n";
        }

    }

}